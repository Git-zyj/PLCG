#ifndef _2412352125_08_H
#define _2412352125_08_H
/* params start */
# define PB_N 100
# define PB_M 80
# define PB_L 70
# define PB_P 70
/* params end */
# define xB PB_M
# define yB PB_M
# define xC PB_N
# define xE PB_N
# define yE PB_M
# define xF PB_N
# define yF PB_M
# define xG PB_M
# define yG PB_M
# define xH PB_M
# define xI PB_M
# define xJ PB_L
# define yJ PB_P
# define zJ PB_P
# define xK PB_L
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

