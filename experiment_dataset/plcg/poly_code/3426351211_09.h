#ifndef _3426351211_09_H
#define _3426351211_09_H
/* params start */
# define PB_N 40
# define PB_M 30
# define PB_L 50
# define PB_P 40
# define PB_Q 30
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define xC PB_M
# define yC PB_P
# define xD PB_M
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_M
# define yF PB_L
# define xG PB_L
# define yG PB_P
# define zG PB_Q
# define xH PB_N
# define yH PB_M
# define zH PB_L
# define vH PB_Q
# define xI PB_N
# define yI PB_M
# define zI PB_P
# define xJ PB_L
# define xK PB_N
# define yK PB_M
# define xL PB_M
# define xM PB_M
# define yM PB_M
# define xN PB_L
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

