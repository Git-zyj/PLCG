#ifndef _4236352211_07_H
#define _4236352211_07_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 8
# define PB_P 8
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_M
# define zA PB_M
# define vA PB_L
# define xB PB_M
# define xC PB_M
# define yC PB_M
# define zC PB_L
# define vC PB_L
# define xD PB_N
# define yD PB_M
# define zD PB_P
# define vD PB_Q
# define xE PB_M
# define xF PB_N
# define xG PB_M
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

