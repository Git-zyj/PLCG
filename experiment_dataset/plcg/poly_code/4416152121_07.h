#ifndef _4416152121_07_H
#define _4416152121_07_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 10
# define PB_P 9
# define PB_Q 9
/* params end */
# define xB PB_L
# define yB PB_P
# define xC PB_M
# define yC PB_P
# define zC PB_Q
# define vC PB_Q
# define xD PB_M
# define yD PB_M
# define xE PB_L
# define yE PB_P
# define zE PB_Q
# define xF PB_N
# define yF PB_M
# define xG PB_M
# define xH PB_M
# define yH PB_P
# define zH PB_Q
# define vH PB_Q
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

