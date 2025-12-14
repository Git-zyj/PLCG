#ifndef _4326251123_01_H
#define _4326251123_01_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 10
# define PB_P 9
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_M
# define zA PB_M
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_N
# define yE PB_L
# define zE PB_L
# define vE PB_P
# define xF PB_L
# define yF PB_P
# define zF PB_P
# define xG PB_M
# define yG PB_L
# define zG PB_P
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

