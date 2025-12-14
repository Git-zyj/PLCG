#ifndef _2434352113_07_H
#define _2434352113_07_H
/* params start */
# define PB_M 90
# define PB_L 80
# define PB_Q 80
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_M
# define xD PB_L
# define xE PB_L
# define yE PB_Q
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define xH PB_M
# define xI PB_M
# define yI PB_M
# define xJ PB_M
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

