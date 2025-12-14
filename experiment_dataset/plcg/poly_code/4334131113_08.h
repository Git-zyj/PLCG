#ifndef _4334131113_08_H
#define _4334131113_08_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 8
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_M
# define xB PB_L
# define yB PB_P
# define xC PB_N
# define yC PB_L
# define zC PB_P
# define vC PB_Q
# define xD PB_M
# define xE PB_L
# define yE PB_P
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_Q
# define xG PB_L
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

