#ifndef _4334232325_00_H
#define _4334232325_00_H
/* params start */
# define PB_N 30
# define PB_M 50
# define PB_L 40
# define PB_P 50
# define PB_Q 50
/* params end */
# define xA PB_N
# define yA PB_M
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define xD PB_N
# define xE PB_N
# define xF PB_M
# define yF PB_P
# define xG PB_N
# define yG PB_M
# define xH PB_M
# define yH PB_L
# define zH PB_L
# define xI PB_M
# define yI PB_P
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

