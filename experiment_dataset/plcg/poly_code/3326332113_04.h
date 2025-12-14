#ifndef _3326332113_04_H
#define _3326332113_04_H
/* params start */
# define PB_N 50
# define PB_M 50
# define PB_L 50
# define PB_P 50
# define PB_Q 50
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_L
# define xC PB_L
# define yC PB_P
# define zC PB_Q
# define xD PB_M
# define yD PB_P
# define zD PB_P
# define xE PB_M
# define yE PB_M
# define zE PB_L
# define xF PB_N
# define yF PB_M
# define xG PB_N
# define yG PB_N
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

