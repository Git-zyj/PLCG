#ifndef _4434332325_00_H
#define _4434332325_00_H
/* params start */
# define PB_N 40
# define PB_M 50
# define PB_L 40
# define PB_P 50
/* params end */
# define xA PB_N
# define xB PB_N
# define yB PB_N
# define zB PB_M
# define xC PB_N
# define yC PB_M
# define xD PB_N
# define yD PB_N
# define zD PB_M
# define xE PB_M
# define xF PB_L
# define xG PB_N
# define yG PB_N
# define zG PB_M
# define xH PB_M
# define yH PB_P
# define xI PB_N
# define yI PB_N
# define xJ PB_N
# define yJ PB_M
# define zJ PB_M
# define vJ PB_L
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

