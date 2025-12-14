#ifndef _4426352221_09_H
#define _4426352221_09_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 10
# define PB_P 8
# define PB_Q 10
/* params end */
# define xA PB_M
# define xB PB_M
# define yB PB_L
# define xC PB_N
# define yC PB_L
# define zC PB_P
# define vC PB_Q
# define xE PB_L
# define xF PB_N
# define xG PB_M
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define vJ PB_Q
# define xK PB_M
# define yK PB_L
# define zK PB_L
# define vK PB_P
# define xL PB_N
# define yL PB_M
# define zL PB_L
# define vL PB_P
# define xM PB_L
# define yM PB_P
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

