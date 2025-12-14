#ifndef _4334251113_01_H
#define _4334251113_01_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 8
# define PB_P 8
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_P
# define zA PB_Q
# define vA PB_Q
# define xB PB_M
# define yB PB_M
# define zB PB_P
# define xC PB_N
# define yC PB_L
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define vD PB_Q
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define vE PB_P
# define wE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_P
# define xG PB_M
# define yG PB_P
# define zG PB_Q
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define xI PB_M
# define yI PB_P
# define xJ PB_M
# define yJ PB_L
# define xK PB_M
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

