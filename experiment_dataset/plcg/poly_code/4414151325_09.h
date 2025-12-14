#ifndef _4414151325_09_H
#define _4414151325_09_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 8
# define PB_P 8
# define PB_Q 9
/* params end */
# define xC PB_L
# define yC PB_P
# define zC PB_Q
# define vC PB_Q
# define xB PB_N
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_N
# define yE PB_L
# define zE PB_L
# define vE PB_L
# define xF PB_N
# define yF PB_M
# define xG PB_M
# define xH PB_N
# define yH PB_M
# define zH PB_M
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

