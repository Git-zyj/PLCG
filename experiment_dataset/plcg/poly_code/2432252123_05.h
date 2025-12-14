#ifndef _2432252123_05_H
#define _2432252123_05_H
/* params start */
# define PB_N 100
# define PB_M 90
# define PB_L 70
# define PB_P 100
# define PB_Q 60
/* params end */
# define xC PB_N
# define xB PB_M
# define yB PB_P
# define xE PB_L
# define yE PB_P
# define xF PB_L
# define yF PB_L
# define xG PB_M
# define yG PB_L
# define zG PB_Q
# define xH PB_M
# define xI PB_M
# define yI PB_L
# define zI PB_P
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

