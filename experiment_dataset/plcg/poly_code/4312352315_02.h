#ifndef _4312352315_02_H
#define _4312352315_02_H
/* params start */
# define PB_N 50
# define PB_M 40
# define PB_L 30
# define PB_P 50
# define PB_Q 40
/* params end */
# define xA PB_M
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define xC PB_M
# define xD PB_L
# define yD PB_L
# define xE PB_M
# define xF PB_L
# define yF PB_P
# define xG PB_N
# define yG PB_L
# define zG PB_P
# define xH PB_L
# define yH PB_Q
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define xJ PB_L
# define yJ PB_P
# define zJ PB_Q
# define xK PB_M
# define xL PB_M
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

