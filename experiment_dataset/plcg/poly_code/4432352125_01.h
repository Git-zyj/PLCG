#ifndef _4432352125_01_H
#define _4432352125_01_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 10
# define PB_P 9
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_P
# define xE PB_N
# define yE PB_M
# define zE PB_M
# define xF PB_M
# define yF PB_M
# define xG PB_L
# define yG PB_Q
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define xI PB_M
# define yI PB_L
# define zI PB_L
# define vI PB_P
# define xJ PB_N
# define yJ PB_M
# define zJ PB_L
# define xK PB_L
# define yK PB_P
# define xL PB_M
# define yL PB_L
# define zL PB_P
# define vL PB_Q
# define xM PB_M
# define yM PB_L
# define zM PB_P
# define vM PB_P
# define wM PB_P
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

