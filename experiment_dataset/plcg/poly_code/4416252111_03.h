#ifndef _4416252111_03_H
#define _4416252111_03_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 9
# define PB_P 9
# define PB_Q 10
/* params end */
# define xA PB_L
# define xB PB_M
# define yB PB_P
# define zB PB_Q
# define vB PB_Q
# define xC PB_M
# define yC PB_M
# define zC PB_L
# define xD PB_N
# define yD PB_M
# define zD PB_L
# define xE PB_M
# define xF PB_M
# define xG PB_M
# define yG PB_P
# define zG PB_Q
# define vG PB_Q
# define xH PB_L
# define yH PB_P
# define zH PB_Q
# define vH PB_Q
# define xI PB_N
# define yI PB_M
# define zI PB_L
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define xK PB_M
# define yK PB_P
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

