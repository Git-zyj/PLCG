#ifndef _4312352115_05_H
#define _4312352115_05_H
/* params start */
# define PB_N 30
# define PB_M 40
# define PB_L 30
# define PB_P 30
# define PB_Q 30
/* params end */
# define xA PB_N
# define yA PB_M
# define xB PB_M
# define xC PB_N
# define yC PB_M
# define zC PB_L
# define xD PB_M
# define xE PB_M
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define yG PB_P
# define zG PB_P
# define xH PB_L
# define yH PB_Q
# define zH PB_Q
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

