#ifndef _4236352111_05_H
#define _4236352111_05_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 10
# define PB_P 9
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_P
# define zA PB_Q
# define vA PB_Q
# define xB PB_N
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define vC PB_P
# define xD PB_N
# define yD PB_M
# define zD PB_L
# define vD PB_P
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define vE PB_Q
# define xF PB_L
# define xG PB_P
# define xH PB_M
# define yH PB_M
# define xI PB_M
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

