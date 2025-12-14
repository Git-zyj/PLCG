#ifndef _4336251223_00_H
#define _4336251223_00_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 8
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_M
# define zA PB_L
# define vA PB_L
# define xB PB_N
# define yB PB_L
# define zB PB_L
# define xC PB_M
# define yC PB_M
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define vD PB_Q
# define wD PB_Q
# define xE PB_N
# define yE PB_M
# define zE PB_L
# define vE PB_Q
# define xF PB_N
# define yF PB_M
# define zF PB_L
# define vF PB_P
# define xG PB_L
# define yG PB_Q
# define zG PB_Q
# define xH PB_M
# define yH PB_M
# define zH PB_L
# define xI PB_M
# define yI PB_L
# define xJ PB_M
# define yJ PB_L
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

