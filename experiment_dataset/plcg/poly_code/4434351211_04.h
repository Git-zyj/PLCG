#ifndef _4434351211_04_H
#define _4434351211_04_H
/* params start */
# define PB_N 40
# define PB_M 30
# define PB_L 40
# define PB_P 40
# define PB_Q 40
/* params end */
# define xA PB_N
# define yA PB_M
# define zA PB_L
# define xB PB_M
# define yB PB_L
# define xC PB_L
# define yC PB_L
# define xD PB_N
# define yD PB_N
# define xE PB_M
# define yE PB_P
# define zE PB_Q
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_L
# define vG PB_P
# define xH PB_L
# define yH PB_P
# define xI PB_M
# define yI PB_L
# define xJ PB_M
# define yJ PB_L
# define xK PB_L
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

