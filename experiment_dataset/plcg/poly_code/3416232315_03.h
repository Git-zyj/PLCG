#ifndef _3416232315_03_H
#define _3416232315_03_H
/* params start */
# define PB_M 30
# define PB_L 50
# define PB_P 30
# define PB_Q 50
/* params end */
# define xA PB_M
# define xB PB_M
# define yB PB_M
# define zB PB_L
# define vB PB_Q
# define xE PB_L
# define xF PB_L
# define xG PB_L
# define yG PB_P
# define xH PB_M
# define yH PB_L
# define xI PB_M
# define yI PB_M
# define zI PB_L
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

