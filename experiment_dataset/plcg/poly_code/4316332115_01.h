#ifndef _4316332115_01_H
#define _4316332115_01_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 8
# define PB_P 9
# define PB_Q 10
/* params end */
# define xA PB_L
# define yA PB_L
# define zA PB_P
# define vA PB_Q
# define xB PB_L
# define yB PB_L
# define xC PB_L
# define yC PB_Q
# define zC PB_Q
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define vD PB_P
# define wD PB_P
# define xE PB_L
# define yE PB_P
# define zE PB_Q
# define vE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_Q
# define vF PB_Q
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define xI PB_M
# define yI PB_L
# define xJ PB_N
# define yJ PB_M
# define zJ PB_L
# define xK PB_M
# define yK PB_L
# define zK PB_P
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

