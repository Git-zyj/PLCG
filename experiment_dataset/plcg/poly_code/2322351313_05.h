#ifndef _2322351313_05_H
#define _2322351313_05_H
/* params start */
# define PB_N 100
# define PB_M 80
# define PB_L 100
# define PB_P 100
# define PB_Q 90
/* params end */
# define xB PB_L
# define xC PB_M
# define yC PB_P
# define xD PB_M
# define xE PB_N
# define xF PB_N
# define xG PB_L
# define yG PB_P
# define xH PB_M
# define yH PB_L
# define xI PB_L
# define yI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define xK PB_M
# define yK PB_L
# define zK PB_P
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

