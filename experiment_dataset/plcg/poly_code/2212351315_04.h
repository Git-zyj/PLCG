#ifndef _2212351315_04_H
#define _2212351315_04_H
/* params start */
# define PB_N 60
# define PB_M 70
# define PB_L 70
# define PB_P 70
# define PB_Q 70
/* params end */
# define xA PB_M
# define yA PB_L
# define xC PB_M
# define yC PB_P
# define zC PB_Q
# define xD PB_M
# define yD PB_L
# define xE PB_L
# define xF PB_N
# define yF PB_N
# define xG PB_M
# define xH PB_M
# define yH PB_M
# define xI PB_N
# define yI PB_M
# define zI PB_M
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

