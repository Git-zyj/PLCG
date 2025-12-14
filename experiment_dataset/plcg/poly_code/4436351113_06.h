#ifndef _4436351113_06_H
#define _4436351113_06_H
/* params start */
# define PB_N 9
# define PB_M 10
# define PB_L 8
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_M
# define zA PB_L
# define vA PB_P
# define wA PB_Q
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define vB PB_P
# define xD PB_L
# define yD PB_P
# define xE PB_M
# define yE PB_P
# define zE PB_Q
# define vE PB_Q
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define vG PB_Q
# define xH PB_N
# define yH PB_N
# define zH PB_M
# define vH PB_L
# define wH PB_P
# define xI PB_M
# define yI PB_M
# define zI PB_L
# define vI PB_P
# define xJ PB_N
# define yJ PB_M
# define zJ PB_M
# define xK PB_M
# define yK PB_L
# define xL PB_P
# define yL PB_Q
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

