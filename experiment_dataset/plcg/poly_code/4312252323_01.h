#ifndef _4312252323_01_H
#define _4312252323_01_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 10
# define PB_P 9
# define PB_Q 9
/* params end */
# define xC PB_N
# define yC PB_N
# define zC PB_M
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_N
# define yE PB_M
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define xG PB_M
# define yG PB_P
# define zG PB_Q
# define vG PB_Q
# define xH PB_L
# define yH PB_P
# define zH PB_P
# define vH PB_P
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

