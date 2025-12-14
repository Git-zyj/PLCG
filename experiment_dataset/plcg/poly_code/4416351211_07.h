#ifndef _4416351211_07_H
#define _4416351211_07_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 8
# define PB_P 8
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_L
# define xC PB_M
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_M
# define yE PB_P
# define zE PB_Q
# define xF PB_L
# define yF PB_P
# define xG PB_L
# define yG PB_L
# define zG PB_P
# define xH PB_N
# define xI PB_M
# define xJ PB_M
# define xK PB_M
# define yK PB_M
# define zK PB_L
# define xL PB_L
# define yL PB_Q
# define zL PB_Q
# define vL PB_Q
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

