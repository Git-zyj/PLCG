#ifndef _3316251215_01_H
#define _3316251215_01_H
/* params start */
# define PB_N 50
# define PB_M 40
# define PB_L 30
# define PB_P 30
# define PB_Q 30
/* params end */
# define xC PB_M
# define yC PB_P
# define zC PB_Q
# define xB PB_M
# define xD PB_N
# define yD PB_M
# define zD PB_P
# define xE PB_N
# define yE PB_N
# define zE PB_M
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define yG PB_L
# define xH PB_N
# define xI PB_M
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

