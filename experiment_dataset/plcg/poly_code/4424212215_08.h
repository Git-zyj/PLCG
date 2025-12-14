#ifndef _4424212215_08_H
#define _4424212215_08_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 8
# define PB_P 10
# define PB_Q 8
/* params end */
# define xC PB_L
# define yC PB_Q
# define zC PB_Q
# define xE PB_N
# define yE PB_L
# define zE PB_P
# define xF PB_L
# define yF PB_P
# define zF PB_P
# define vF PB_Q
# define xG PB_M
# define yG PB_P
# define zG PB_Q
# define vG PB_Q
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

