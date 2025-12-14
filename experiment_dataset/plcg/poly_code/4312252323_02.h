#ifndef _4312252323_02_H
#define _4312252323_02_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 8
# define PB_P 8
# define PB_Q 8
/* params end */
# define xA PB_L
# define yA PB_Q
# define zA PB_Q
# define xB PB_M
# define yB PB_L
# define zB PB_Q
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define vC PB_Q
# define xD PB_N
# define yD PB_M
# define zD PB_L
# define xE PB_M
# define yE PB_P
# define zE PB_Q
# define xF PB_L
# define yF PB_Q
# define zF PB_Q
# define vF PB_Q
# define xG PB_M
# define yG PB_M
# define zG PB_L
# define vG PB_P
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

