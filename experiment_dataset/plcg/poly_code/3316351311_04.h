#ifndef _3316351311_04_H
#define _3316351311_04_H
/* params start */
# define PB_N 40
# define PB_M 30
# define PB_L 40
# define PB_P 50
# define PB_Q 50
/* params end */
# define xA PB_L
# define yA PB_P
# define xB PB_M
# define yB PB_L
# define zB PB_L
# define xC PB_L
# define yC PB_P
# define xD PB_N
# define xE PB_N
# define yE PB_M
# define xF PB_N
# define yF PB_M
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define yH PB_P
# define zH PB_Q
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define xJ PB_M
# define yJ PB_L
# define zJ PB_L
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

