#ifndef _4416332111_08_H
#define _4416332111_08_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 8
# define PB_P 9
# define PB_Q 8
/* params end */
# define xA PB_L
# define yA PB_Q
# define zA PB_Q
# define vA PB_Q
# define wA PB_Q
# define xC PB_L
# define yC PB_P
# define zC PB_Q
# define xD PB_N
# define yD PB_M
# define zD PB_L
# define vD PB_P
# define xE PB_M
# define yE PB_L
# define zE PB_L
# define vE PB_L
# define xF PB_N
# define yF PB_M
# define zF PB_M
# define vF PB_L
# define xG PB_N
# define yG PB_N
# define zG PB_M
# define vG PB_M
# define xH PB_M
# define yH PB_L
# define xI PB_L
# define yI PB_Q
# define xJ PB_N
# define yJ PB_M
# define zJ PB_L
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

