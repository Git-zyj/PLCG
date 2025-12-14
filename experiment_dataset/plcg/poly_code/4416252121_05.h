#ifndef _4416252121_05_H
#define _4416252121_05_H
/* params start */
# define PB_M 8
# define PB_L 8
# define PB_P 9
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_M
# define yB PB_L
# define xC PB_M
# define yC PB_M
# define zC PB_L
# define vC PB_P
# define xD PB_M
# define yD PB_M
# define xE PB_M
# define yE PB_L
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define xG PB_M
# define yG PB_P
# define zG PB_Q
# define xH PB_M
# define yH PB_L
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define vI PB_Q
# define xJ PB_M
# define yJ PB_L
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

