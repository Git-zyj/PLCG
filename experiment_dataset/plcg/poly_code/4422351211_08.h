#ifndef _4422351211_08_H
#define _4422351211_08_H
/* params start */
# define PB_N 9
# define PB_M 10
# define PB_L 8
# define PB_P 10
# define PB_Q 8
/* params end */
# define xA PB_L
# define yA PB_P
# define zA PB_Q
# define vA PB_Q
# define xB PB_M
# define yB PB_L
# define xC PB_L
# define yC PB_P
# define zC PB_Q
# define xD PB_M
# define yD PB_L
# define xE PB_N
# define yE PB_M
# define zE PB_L
# define vE PB_P
# define xF PB_M
# define yF PB_M
# define zF PB_L
# define vF PB_P
# define xG PB_L
# define yG PB_L
# define zG PB_P
# define vG PB_P
# define wG PB_Q
# define xH PB_M
# define yH PB_M
# define zH PB_M
# define vH PB_L
# define xI PB_M
# define yI PB_M
# define xJ PB_L
# define yJ PB_Q
# define xK PB_L
# define xL PB_M
# define yL PB_L
# define zL PB_Q
# define xM PB_M
# define yM PB_M
# define xN PB_M
# define yN PB_P
# define zN PB_Q
# define xO PB_L
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

