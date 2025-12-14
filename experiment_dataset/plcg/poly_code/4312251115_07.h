#ifndef _4312251115_07_H
#define _4312251115_07_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 8
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_N
# define yA PB_M
# define zA PB_L
# define vA PB_P
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define vC PB_Q
# define xD PB_M
# define yD PB_L
# define zD PB_Q
# define vD PB_Q
# define xE PB_L
# define yE PB_L
# define zE PB_Q
# define vE PB_Q
# define xF PB_L
# define yF PB_P
# define zF PB_Q
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

