#ifndef _4412251211_06_H
#define _4412251211_06_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 8
# define PB_P 9
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_M
# define zA PB_M
# define xB PB_L
# define yB PB_P
# define zB PB_Q
# define vB PB_Q
# define xC PB_M
# define xE PB_N
# define yE PB_N
# define zE PB_L
# define xF PB_M
# define yF PB_L
# define zF PB_L
# define xG PB_L
# define yG PB_Q
# define zG PB_Q
# define vG PB_Q
# define wG PB_Q
# define xH PB_L
# define yH PB_P
# define zH PB_Q
# define vH PB_Q
# define xI PB_L
# define yI PB_P
# define zI PB_P
# define vI PB_Q
# define xJ PB_M
# define xK PB_N
# define xL PB_L
# define yL PB_P
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

