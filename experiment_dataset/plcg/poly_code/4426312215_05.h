#ifndef _4426312215_05_H
#define _4426312215_05_H
/* params start */
# define PB_N 9
# define PB_M 10
# define PB_L 9
# define PB_P 8
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_P
# define zA PB_P
# define vA PB_Q
# define xC PB_N
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define vD PB_Q
# define xE PB_N
# define xF PB_M
# define yF PB_M
# define zF PB_L
# define vF PB_P
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

