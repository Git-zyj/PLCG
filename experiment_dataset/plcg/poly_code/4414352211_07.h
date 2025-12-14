#ifndef _4414352211_07_H
#define _4414352211_07_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 10
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_P
# define zA PB_Q
# define xB PB_M
# define xC PB_N
# define yC PB_L
# define zC PB_Q
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define vD PB_Q
# define xE PB_M
# define yE PB_M
# define zE PB_M
# define vE PB_L
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define vF PB_Q
# define xG PB_N
# define yG PB_M
# define zG PB_L
# define vG PB_P
# define xH PB_M
# define yH PB_L
# define zH PB_L
# define xI PB_M
# define xJ PB_L
# define xK PB_M
# define xL PB_M
# define yL PB_L
# define zL PB_L
# define xM PB_M
# define yM PB_L
# define zM PB_L
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

