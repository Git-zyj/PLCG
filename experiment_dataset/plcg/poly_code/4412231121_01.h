#ifndef _4412231121_01_H
#define _4412231121_01_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 8
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_N
# define yA PB_N
# define zA PB_N
# define xB PB_M
# define yB PB_L
# define zB PB_Q
# define vB PB_Q
# define xC PB_M
# define xD PB_L
# define yD PB_P
# define zD PB_Q
# define vD PB_Q
# define xE PB_L
# define yE PB_P
# define zE PB_Q
# define xF PB_L
# define yF PB_L
# define zF PB_Q
# define xG PB_L
# define yG PB_P
# define zG PB_Q
# define vG PB_Q
# define xH PB_N
# define yH PB_N
# define zH PB_N
# define vH PB_L
# define xI PB_L
# define yI PB_Q
# define xJ PB_N
# define yJ PB_M
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

