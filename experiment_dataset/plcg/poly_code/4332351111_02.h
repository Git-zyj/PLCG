#ifndef _4332351111_02_H
#define _4332351111_02_H
/* params start */
# define PB_N 9
# define PB_M 10
# define PB_L 10
# define PB_P 10
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_N
# define yB PB_N
# define zB PB_M
# define xC PB_N
# define yC PB_N
# define zC PB_M
# define vC PB_L
# define xD PB_N
# define yD PB_M
# define xE PB_L
# define yE PB_P
# define zE PB_Q
# define xF PB_N
# define yF PB_M
# define zF PB_P
# define xG PB_N
# define yG PB_N
# define zG PB_M
# define xH PB_M
# define yH PB_L
# define zH PB_L
# define vH PB_L
# define xI PB_M
# define yI PB_L
# define zI PB_Q
# define vI PB_Q
# define xJ PB_L
# define yJ PB_P
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

