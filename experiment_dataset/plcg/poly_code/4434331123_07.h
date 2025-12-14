#ifndef _4434331123_07_H
#define _4434331123_07_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 9
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_P
# define vA PB_Q
# define xB PB_L
# define xC PB_L
# define yC PB_P
# define zC PB_Q
# define xD PB_M
# define yD PB_M
# define xE PB_M
# define yE PB_L
# define zE PB_L
# define vE PB_P
# define xF PB_N
# define yF PB_M
# define zF PB_P
# define vF PB_Q
# define xG PB_N
# define yG PB_L
# define zG PB_P
# define vG PB_Q
# define xH PB_M
# define yH PB_M
# define zH PB_P
# define vH PB_Q
# define wH PB_Q
# define xI PB_N
# define yI PB_M
# define zI PB_L
# define xJ PB_M
# define yJ PB_P
# define xK PB_M
# define yK PB_L
# define xL PB_N
# define yL PB_M
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

