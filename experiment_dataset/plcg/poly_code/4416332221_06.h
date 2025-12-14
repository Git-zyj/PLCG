#ifndef _4416332221_06_H
#define _4416332221_06_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 8
# define PB_P 9
# define PB_Q 10
/* params end */
# define xA PB_L
# define yA PB_P
# define xB PB_M
# define yB PB_P
# define zB PB_Q
# define vB PB_Q
# define xC PB_M
# define yC PB_P
# define xD PB_N
# define yD PB_N
# define zD PB_M
# define xE PB_M
# define xF PB_L
# define yF PB_L
# define zF PB_Q
# define vF PB_Q
# define xG PB_L
# define yG PB_P
# define zG PB_Q
# define xH PB_L
# define yH PB_P
# define zH PB_Q
# define vH PB_Q
# define xI PB_L
# define yI PB_L
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
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

