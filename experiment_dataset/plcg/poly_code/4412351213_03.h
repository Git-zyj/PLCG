#ifndef _4412351213_03_H
#define _4412351213_03_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 8
# define PB_P 9
# define PB_Q 10
/* params end */
# define xA PB_L
# define yA PB_P
# define zA PB_Q
# define vA PB_Q
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xE PB_M
# define yE PB_L
# define zE PB_Q
# define vE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_Q
# define wF PB_Q
# define xG PB_M
# define yG PB_P
# define zG PB_Q
# define xH PB_N
# define yH PB_M
# define zH PB_L
# define vH PB_Q
# define xI PB_M
# define yI PB_P
# define zI PB_Q
# define vI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define xK PB_M
# define yK PB_P
# define xL PB_L
# define yL PB_Q
# define zL PB_Q
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

