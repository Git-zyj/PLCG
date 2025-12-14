#ifndef _3412331113_06_H
#define _3412331113_06_H
/* params start */
# define PB_N 50
# define PB_M 50
# define PB_L 40
# define PB_P 50
# define PB_Q 40
/* params end */
# define xB PB_M
# define yB PB_P
# define xC PB_M
# define xD PB_M
# define xE PB_N
# define yE PB_M
# define xF PB_M
# define yF PB_L
# define zF PB_Q
# define xG PB_N
# define yG PB_M
# define xH PB_N
# define yH PB_M
# define xI PB_M
# define xJ PB_M
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

