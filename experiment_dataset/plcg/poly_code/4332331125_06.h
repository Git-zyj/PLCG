#ifndef _4332331125_06_H
#define _4332331125_06_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 9
# define PB_P 9
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_M
# define zA PB_M
# define vA PB_L
# define xB PB_M
# define xC PB_L
# define yC PB_Q
# define zC PB_Q
# define xD PB_L
# define yD PB_P
# define zD PB_Q
# define xE PB_N
# define yE PB_L
# define zE PB_Q
# define vE PB_Q
# define xF PB_L
# define xG PB_M
# define yG PB_P
# define zG PB_P
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

