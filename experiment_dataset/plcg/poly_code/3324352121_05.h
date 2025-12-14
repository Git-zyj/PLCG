#ifndef _3324352121_05_H
#define _3324352121_05_H
/* params start */
# define PB_N 30
# define PB_M 50
# define PB_L 40
# define PB_P 30
# define PB_Q 50
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_L
# define xB PB_M
# define xC PB_M
# define yC PB_L
# define zC PB_L
# define xD PB_N
# define yD PB_M
# define xE PB_M
# define yE PB_L
# define xF PB_M
# define xG PB_L
# define yG PB_P
# define zG PB_Q
# define xH PB_M
# define yH PB_L
# define zH PB_P
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

