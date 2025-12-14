#ifndef _4426332113_03_H
#define _4426332113_03_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 9
# define PB_P 9
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_P
# define vA PB_Q
# define xB PB_L
# define yB PB_P
# define zB PB_Q
# define vB PB_Q
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define vC PB_Q
# define xD PB_M
# define yD PB_P
# define zD PB_Q
# define xE PB_M
# define yE PB_L
# define zE PB_L
# define vE PB_L
# define xF PB_M
# define yF PB_M
# define zF PB_L
# define xG PB_N
# define yG PB_N
# define zG PB_M
# define vG PB_M
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define vH PB_P
# define wH PB_Q
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define vI PB_P
# define xJ PB_M
# define yJ PB_L
# define xK PB_L
# define yK PB_P
# define zK PB_Q
# if !defined(DATA_TYPE_IS_FLOAT) && !defined(DATA_TYPE_IS_DOUBLE)
#  define DATA_TYPE_IS_DOUBLE
# endif
#ifdef DATA_TYPE_IS_FLOAT
#  define DATA_TYPE float
#  define DATA_PRINTF_MODIFIER "%f "
#  define SCALAR_VAL(x) x##f
#  define SQRT_FUN(x) sqrtf(x)
#  define EXP_FUN(x) expf(x)
#  define POW_FUN(x,y) powf(x,y)
# endif
#ifdef DATA_TYPE_IS_DOUBLE
#  define DATA_TYPE double
#  define DATA_PRINTF_MODIFIER "%lf "
#  define SCALAR_VAL(x) x
#  define SQRT_FUN(x) sqrt(x)
#  define EXP_FUN(x) exp(x)
#  define POW_FUN(x,y) pow(x,y)
# endif
# endif

