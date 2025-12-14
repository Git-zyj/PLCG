#ifndef _4434352221_02_H
#define _4434352221_02_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 10
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_L
# define xB PB_M
# define yB PB_P
# define zB PB_Q
# define vB PB_Q
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xD PB_M
# define xE PB_M
# define xF PB_M
# define xG PB_L
# define yG PB_Q
# define zG PB_Q
# define vG PB_Q
# define xH PB_M
# define yH PB_L
# define zH PB_L
# define xI PB_L
# define yI PB_P
# define zI PB_Q
# define vI PB_Q
# define wI PB_Q
# define xJ PB_N
# define yJ PB_L
# define zJ PB_P
# define vJ PB_Q
# define xK PB_M
# define yK PB_P
# define zK PB_Q
# define vK PB_Q
# define wK PB_Q
# define xL PB_M
# define yL PB_L
# define zL PB_P
# define vL PB_Q
# define xM PB_M
# define yM PB_P
# define zM PB_Q
# define xN PB_M
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

