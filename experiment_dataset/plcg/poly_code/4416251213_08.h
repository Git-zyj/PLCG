#ifndef _4416251213_08_H
#define _4416251213_08_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 10
# define PB_P 8
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_P
# define zA PB_Q
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define vB PB_P
# define xD PB_M
# define xE PB_M
# define yE PB_M
# define zE PB_P
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define xH PB_M
# define yH PB_L
# define xI PB_L
# define yI PB_L
# define zI PB_P
# define vI PB_P
# define wI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define vJ PB_Q
# define xK PB_M
# define yK PB_P
# define zK PB_Q
# define vK PB_Q
# define xL PB_M
# define xM PB_N
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

