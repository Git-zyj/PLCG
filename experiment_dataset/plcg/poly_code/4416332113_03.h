#ifndef _4416332113_03_H
#define _4416332113_03_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 10
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_M
# define xB PB_M
# define yB PB_L
# define zB PB_L
# define vB PB_Q
# define xC PB_M
# define yC PB_M
# define zC PB_L
# define xE PB_L
# define xF PB_M
# define yF PB_Q
# define zF PB_Q
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define vG PB_Q
# define xH PB_N
# define yH PB_M
# define zH PB_L
# define vH PB_Q
# define xI PB_N
# define yI PB_N
# define zI PB_M
# define vI PB_P
# define xJ PB_N
# define yJ PB_M
# define xK PB_P
# define yK PB_Q
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

