#ifndef _4426351211_03_H
#define _4426351211_03_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 10
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_L
# define vA PB_P
# define xB PB_M
# define yB PB_P
# define zB PB_Q
# define vB PB_Q
# define xD PB_M
# define yD PB_L
# define xE PB_M
# define yE PB_L
# define zE PB_L
# define vE PB_P
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_Q
# define xG PB_N
# define yG PB_L
# define zG PB_P
# define vG PB_Q
# define wG PB_Q
# define xH PB_N
# define yH PB_M
# define zH PB_P
# define vH PB_P
# define wH PB_Q
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define vI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define xK PB_M
# define yK PB_L
# define zK PB_P
# define xL PB_M
# define yL PB_P
# define zL PB_Q
# define xM PB_P
# define yM PB_Q
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

