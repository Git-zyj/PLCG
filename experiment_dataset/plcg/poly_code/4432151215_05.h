#ifndef _4432151215_05_H
#define _4432151215_05_H
/* params start */
# define PB_M 9
# define PB_L 9
# define PB_P 9
/* params end */
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define xC PB_L
# define yC PB_P
# define xD PB_M
# define xE PB_M
# define yE PB_M
# define zE PB_P
# define vE PB_P
# define xF PB_L
# define xG PB_M
# define yG PB_M
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

