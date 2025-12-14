#ifndef _4426332211_08_H
#define _4426332211_08_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 8
# define PB_P 8
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_P
# define xB PB_M
# define xC PB_N
# define yC PB_M
# define zC PB_L
# define vC PB_P
# define xD PB_M
# define yD PB_M
# define zD PB_L
# define xE PB_M
# define yE PB_P
# define xF PB_L
# define yF PB_L
# define xG PB_L
# define yG PB_P
# define zG PB_Q
# define xH PB_N
# define yH PB_M
# define zH PB_L
# define xI PB_L
# define yI PB_L
# define zI PB_P
# define vI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_Q
# define vJ PB_Q
# define xK PB_N
# define yK PB_M
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

