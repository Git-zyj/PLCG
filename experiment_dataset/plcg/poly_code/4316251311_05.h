#ifndef _4316251311_05_H
#define _4316251311_05_H
/* params start */
# define PB_M 40
# define PB_L 40
# define PB_P 40
# define PB_Q 40
/* params end */
# define xB PB_M
# define xC PB_P
# define yC PB_Q
# define zC PB_Q
# define xD PB_M
# define xE PB_M
# define xF PB_M
# define yF PB_P
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define yH PB_M
# define zH PB_L
# define xI PB_M
# define yI PB_L
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

