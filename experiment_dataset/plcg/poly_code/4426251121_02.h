#ifndef _4426251121_02_H
#define _4426251121_02_H
/* params start */
# define PB_M 10
# define PB_L 9
# define PB_P 9
# define PB_Q 8
/* params end */
# define xA PB_L
# define yA PB_P
# define xB PB_L
# define yB PB_P
# define zB PB_Q
# define vB PB_Q
# define xC PB_L
# define yC PB_L
# define zC PB_Q
# define xD PB_M
# define yD PB_P
# define zD PB_P
# define vD PB_Q
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_M
# define xG PB_M
# define yG PB_L
# define xH PB_L
# define yH PB_Q
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define vI PB_Q
# define xJ PB_M
# define yJ PB_Q
# define zJ PB_Q
# define xK PB_L
# define yK PB_L
# define zK PB_L
# define vK PB_P
# define xL PB_M
# define yL PB_L
# define zL PB_P
# define vL PB_Q
# define wL PB_Q
# define xM PB_M
# define yM PB_L
# define zM PB_P
# define vM PB_Q
# define wM PB_Q
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

