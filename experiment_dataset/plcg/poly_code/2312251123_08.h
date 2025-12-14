#ifndef _2312251123_08_H
#define _2312251123_08_H
/* params start */
# define PB_N 60
# define PB_M 90
# define PB_L 60
# define PB_P 70
/* params end */
# define xA PB_L
# define yA PB_P
# define xB PB_N
# define xC PB_M
# define xD PB_M
# define yD PB_L
# define xE PB_N
# define yE PB_M
# define xF PB_M
# define xG PB_N
# define xH PB_M
# define yH PB_L
# define zH PB_L
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

