#ifndef _2436331321_00_H
#define _2436331321_00_H
/* params start */
# define PB_N 90
# define PB_M 80
# define PB_L 60
# define PB_P 70
# define PB_Q 90
/* params end */
# define xA PB_N
# define xB PB_M
# define yB PB_L
# define xC PB_L
# define xD PB_M
# define yD PB_L
# define xE PB_N
# define xF PB_N
# define xG PB_L
# define yG PB_Q
# define xH PB_N
# define yH PB_M
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define xJ PB_L
# define yJ PB_Q
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

