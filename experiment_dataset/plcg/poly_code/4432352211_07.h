#ifndef _4432352211_07_H
#define _4432352211_07_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 10
# define PB_P 9
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_P
# define zA PB_Q
# define xB PB_M
# define yB PB_L
# define xC PB_M
# define yC PB_M
# define zC PB_L
# define vC PB_P
# define xD PB_M
# define yD PB_M
# define zD PB_L
# define xE PB_M
# define yE PB_L
# define zE PB_L
# define xF PB_M
# define yF PB_M
# define zF PB_L
# define xG PB_M
# define yG PB_L
# define xH PB_L
# define yH PB_Q
# define zH PB_Q
# define xI PB_L
# define yI PB_Q
# define zI PB_Q
# define vI PB_Q
# define xJ PB_M
# define yJ PB_P
# define zJ PB_Q
# define vJ PB_Q
# define xK PB_N
# define yK PB_N
# define zK PB_M
# define vK PB_L
# define xL PB_M
# define yL PB_L
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

