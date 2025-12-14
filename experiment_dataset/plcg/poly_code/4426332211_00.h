#ifndef _4426332211_00_H
#define _4426332211_00_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 10
# define PB_P 8
# define PB_Q 8
/* params end */
# define xA PB_N
# define yA PB_N
# define zA PB_M
# define vA PB_L
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define xC PB_N
# define yC PB_L
# define zC PB_P
# define vC PB_Q
# define xD PB_M
# define yD PB_L
# define zD PB_Q
# define vD PB_Q
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define vE PB_Q
# define xF PB_M
# define yF PB_P
# define zF PB_P
# define vF PB_Q
# define xG PB_L
# define yG PB_P
# define zG PB_P
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define xI PB_N
# define yI PB_M
# define xJ PB_M
# define yJ PB_M
# define zJ PB_P
# define vJ PB_Q
# define xK PB_M
# define yK PB_L
# define zK PB_P
# define vK PB_Q
# define wK PB_Q
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

