#ifndef _4312332223_00_H
#define _4312332223_00_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 9
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_M
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define vB PB_Q
# define xD PB_M
# define xE PB_M
# define xF PB_L
# define xG PB_N
# define yG PB_N
# define zG PB_M
# define vG PB_L
# define xH PB_N
# define yH PB_M
# define zH PB_L
# define vH PB_P
# define xI PB_N
# define yI PB_N
# define zI PB_M
# define vI PB_L
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
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

