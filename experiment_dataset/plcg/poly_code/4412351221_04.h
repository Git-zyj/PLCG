#ifndef _4412351221_04_H
#define _4412351221_04_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 10
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_P
# define vA PB_Q
# define xB PB_M
# define xC PB_M
# define yC PB_L
# define xD PB_M
# define yD PB_P
# define xE PB_M
# define yE PB_P
# define zE PB_Q
# define vE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_P
# define wF PB_Q
# define xG PB_N
# define yG PB_N
# define zG PB_L
# define vG PB_P
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define vH PB_Q
# define wH PB_Q
# define xI PB_L
# define yI PB_Q
# define zI PB_Q
# define vI PB_Q
# define xJ PB_M
# define xK PB_M
# define xL PB_M
# define yL PB_L
# define zL PB_L
# define xM PB_M
# define yM PB_M
# define zM PB_P
# define xN PB_M
# define yN PB_M
# define xO PB_M
# define yO PB_L
# define zO PB_P
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

