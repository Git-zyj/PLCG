#ifndef _4424232115_08_H
#define _4424232115_08_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 9
# define PB_P 8
# define PB_Q 8
/* params end */
# define xB PB_M
# define yB PB_L
# define zB PB_L
# define xC PB_M
# define yC PB_P
# define xD PB_L
# define yD PB_L
# define zD PB_P
# define xE PB_M
# define yE PB_M
# define zE PB_P
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define yG PB_L
# define zG PB_Q
# define vG PB_Q
# define xH PB_N
# define yH PB_N
# define zH PB_M
# define xI PB_N
# define yI PB_N
# define zI PB_M
# define vI PB_L
# define wI PB_P
# define xJ PB_N
# define yJ PB_M
# define zJ PB_L
# define vJ PB_P
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

