#ifndef _4324351123_02_H
#define _4324351123_02_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 10
# define PB_P 10
# define PB_Q 9
/* params end */
# define xB PB_M
# define yB PB_L
# define xD PB_N
# define yD PB_M
# define zD PB_P
# define xE PB_N
# define yE PB_M
# define zE PB_L
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define xG PB_M
# define xH PB_M
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define vI PB_P
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
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

