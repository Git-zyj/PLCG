#ifndef _4434331211_01_H
#define _4434331211_01_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 8
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_N
# define yA PB_L
# define zA PB_L
# define vA PB_Q
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define vB PB_Q
# define xC PB_N
# define yC PB_N
# define xD PB_N
# define yD PB_M
# define zD PB_M
# define xE PB_N
# define yE PB_L
# define zE PB_P
# define vE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_Q
# define xG PB_L
# define yG PB_P
# define xH PB_M
# define yH PB_L
# define xI PB_M
# define yI PB_L
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

