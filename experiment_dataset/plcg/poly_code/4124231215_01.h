#ifndef _4124231215_01_H
#define _4124231215_01_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_P 9
# define PB_Q 9
/* params end */
# define xA PB_N
# define yA PB_M
# define zA PB_P
# define vA PB_P
# define xB PB_M
# define yB PB_P
# define zB PB_Q
# define xC PB_N
# define yC PB_M
# define zC PB_P
# define vC PB_Q
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

