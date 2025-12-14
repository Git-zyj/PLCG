#ifndef _3426132121_03_H
#define _3426132121_03_H
/* params start */
# define PB_N 60
# define PB_M 60
# define PB_L 70
# define PB_P 100
# define PB_Q 80
/* params end */
# define xB PB_N
# define yB PB_M
# define xC PB_L
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_L
# define yE PB_P
# define xF PB_L
# define xG PB_M
# define yG PB_P
# define zG PB_Q
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

