#ifndef _4412351311_08_H
#define _4412351311_08_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 8
# define PB_P 10
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_Q
# define vA PB_Q
# define wA PB_Q
# define xB PB_M
# define yB PB_P
# define zB PB_Q
# define xC PB_N
# define yC PB_N
# define zC PB_N
# define xE PB_M
# define yE PB_M
# define zE PB_L
# define vE PB_P
# define xF PB_M
# define yF PB_M
# define zF PB_L
# define vF PB_L
# define xG PB_N
# define yG PB_M
# define zG PB_L
# define vG PB_Q
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define vH PB_P
# define wH PB_P
# define xI PB_N
# define yI PB_M
# define zI PB_L
# define xJ PB_N
# define yJ PB_L
# define zJ PB_P
# define xK PB_M
# define yK PB_M
# define zK PB_L
# define xL PB_M
# define yL PB_P
# define xM PB_N
# define yM PB_M
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

