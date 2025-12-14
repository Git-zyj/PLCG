#ifndef _4416352213_08_H
#define _4416352213_08_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 8
# define PB_P 8
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_P
# define vA PB_P
# define xB PB_L
# define xC PB_L
# define yC PB_Q
# define zC PB_Q
# define xD PB_M
# define yD PB_L
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define vE PB_P
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_Q
# define xG PB_M
# define yG PB_M
# define zG PB_L
# define vG PB_P
# define wG PB_Q
# define xH PB_M
# define yH PB_P
# define zH PB_Q
# define vH PB_Q
# define wH PB_Q
# define xI PB_N
# define yI PB_N
# define xJ PB_L
# define xK PB_M
# define yK PB_P
# define xL PB_N
# define yL PB_M
# define zL PB_L
# define xM PB_M
# define yM PB_L
# define zM PB_P
# define xN PB_M
# define yN PB_L
# define zN PB_P
# define xO PB_M
# define xP PB_M
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

