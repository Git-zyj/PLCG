#ifndef _4326251123_07_H
#define _4326251123_07_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 10
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_P
# define vA PB_Q
# define xB PB_N
# define yB PB_M
# define xD PB_M
# define yD PB_P
# define zD PB_Q
# define vD PB_Q
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define vE PB_Q
# define wE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_Q
# define xG PB_M
# define xH PB_M
# define yH PB_L
# define xI PB_L
# define yI PB_P
# define zI PB_Q
# define xJ PB_L
# define yJ PB_Q
# define zJ PB_Q
# define xK PB_L
# define yK PB_P
# define zK PB_Q
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

