#ifndef _4424332125_03_H
#define _4424332125_03_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 10
# define PB_P 8
# define PB_Q 8
/* params end */
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define vD PB_Q
# define xB PB_N
# define xC PB_M
# define yC PB_L
# define xE PB_N
# define yE PB_M
# define zE PB_L
# define vE PB_L
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_Q
# define xG PB_M
# define xH PB_M
# define yH PB_L
# define zH PB_Q
# define xI PB_M
# define yI PB_L
# define xJ PB_L
# define yJ PB_Q
# define zJ PB_Q
# define vJ PB_Q
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

