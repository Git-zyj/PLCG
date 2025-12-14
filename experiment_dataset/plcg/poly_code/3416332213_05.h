#ifndef _3416332213_05_H
#define _3416332213_05_H
/* params start */
# define PB_M 40
# define PB_L 50
# define PB_P 30
# define PB_Q 40
/* params end */
# define xC PB_M
# define xB PB_L
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_L
# define xF PB_L
# define xG PB_M
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define xI PB_L
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

