#ifndef _4312332221_08_H
#define _4312332221_08_H
/* params start */
# define PB_N 9
# define PB_M 10
# define PB_L 10
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_M
# define yB PB_L
# define zB PB_Q
# define xC PB_M
# define yC PB_P
# define xD PB_N
# define xE PB_N
# define yE PB_L
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define yG PB_P
# define zG PB_Q
# define vG PB_Q
# define xH PB_N
# define yH PB_L
# define zH PB_P
# define vH PB_Q
# define xI PB_L
# define yI PB_Q
# define zI PB_Q
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

