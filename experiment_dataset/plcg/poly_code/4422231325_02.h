#ifndef _4422231325_02_H
#define _4422231325_02_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 10
# define PB_P 9
# define PB_Q 10
/* params end */
# define xD PB_M
# define xB PB_M
# define yB PB_M
# define xC PB_N
# define yC PB_M
# define zC PB_L
# define xE PB_M
# define yE PB_M
# define xF PB_M
# define yF PB_P
# define xG PB_L
# define yG PB_Q
# define zG PB_Q
# define xH PB_L
# define yH PB_P
# define zH PB_Q
# define vH PB_Q
# define xI PB_M
# define yI PB_P
# define zI PB_Q
# define vI PB_Q
# define xJ PB_M
# define yJ PB_P
# define zJ PB_P
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

