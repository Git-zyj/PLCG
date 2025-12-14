#ifndef _4322251221_07_H
#define _4322251221_07_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 9
# define PB_P 9
# define PB_Q 10
/* params end */
# define xA PB_L
# define yA PB_P
# define zA PB_Q
# define vA PB_Q
# define xB PB_N
# define xC PB_M
# define yC PB_P
# define zC PB_Q
# define xD PB_M
# define yD PB_P
# define zD PB_Q
# define vD PB_Q
# define wD PB_Q
# define xE PB_N
# define yE PB_N
# define zE PB_M
# define vE PB_L
# define xF PB_M
# define yF PB_P
# define zF PB_Q
# define vF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define xH PB_N
# define yH PB_M
# define xI PB_M
# define xJ PB_M
# define yJ PB_L
# define xK PB_M
# define yK PB_L
# define zK PB_Q
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

