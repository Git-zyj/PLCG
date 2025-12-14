#ifndef _2234351213_09_H
#define _2234351213_09_H
/* params start */
# define PB_N 90
# define PB_M 70
# define PB_L 90
# define PB_P 80
# define PB_Q 60
/* params end */
# define xB PB_M
# define yB PB_L
# define xC PB_N
# define xD PB_M
# define yD PB_L
# define zD PB_Q
# define xE PB_M
# define yE PB_L
# define xF PB_M
# define yF PB_P
# define xG PB_M
# define xH PB_M
# define yH PB_L
# define zH PB_P
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

