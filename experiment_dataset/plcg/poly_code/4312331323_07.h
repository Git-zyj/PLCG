#ifndef _4312331323_07_H
#define _4312331323_07_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 9
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_M
# define xB PB_L
# define xC PB_M
# define yC PB_L
# define zC PB_Q
# define vC PB_Q
# define xD PB_M
# define xE PB_M
# define xF PB_N
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define vG PB_Q
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define vI PB_Q
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

