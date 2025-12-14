#ifndef _4436251215_08_H
#define _4436251215_08_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 10
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_M
# define xC PB_N
# define yC PB_M
# define zC PB_L
# define vC PB_P
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_M
# define xF PB_M
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define vG PB_Q
# define xH PB_L
# define yH PB_Q
# define zH PB_Q
# define vH PB_Q
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define xK PB_M
# define yK PB_L
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

