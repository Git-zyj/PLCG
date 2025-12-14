#ifndef _4416351221_02_H
#define _4416351221_02_H
/* params start */
# define PB_N 9
# define PB_M 10
# define PB_L 8
# define PB_P 8
# define PB_Q 10
/* params end */
# define xA PB_L
# define yA PB_P
# define zA PB_P
# define vA PB_Q
# define xB PB_M
# define yB PB_P
# define zB PB_Q
# define vB PB_Q
# define xC PB_M
# define yC PB_L
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define vD PB_P
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define vE PB_P
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define vF PB_Q
# define xG PB_L
# define yG PB_P
# define zG PB_P
# define vG PB_Q
# define xH PB_M
# define yH PB_M
# define zH PB_L
# define xI PB_N
# define yI PB_L
# define zI PB_P
# define vI PB_Q
# define wI PB_Q
# define xJ PB_M
# define yJ PB_L
# define xK PB_M
# define yK PB_L
# define xL PB_M
# define xM PB_M
# define yM PB_M
# define zM PB_L
# define xN PB_N
# define xO PB_N
# define yO PB_P
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

