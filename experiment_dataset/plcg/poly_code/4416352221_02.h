#ifndef _4416352221_02_H
#define _4416352221_02_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 10
# define PB_P 8
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_P
# define vA PB_Q
# define xB PB_M
# define yB PB_L
# define zB PB_L
# define xC PB_L
# define yC PB_P
# define zC PB_P
# define vC PB_Q
# define xD PB_M
# define xE PB_M
# define yE PB_M
# define zE PB_L
# define vE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_L
# define vF PB_P
# define xG PB_N
# define yG PB_N
# define zG PB_N
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define vH PB_P
# define xI PB_N
# define yI PB_N
# define zI PB_M
# define xJ PB_M
# define yJ PB_L
# define zJ PB_L
# define xK PB_L
# define yK PB_P
# define zK PB_Q
# define vK PB_Q
# define wK PB_Q
# define xL PB_M
# define yL PB_P
# define xM PB_M
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

