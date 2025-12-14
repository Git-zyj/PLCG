#ifndef _4424252315_07_H
#define _4424252315_07_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 10
# define PB_P 10
# define PB_Q 8
/* params end */
# define xA PB_M
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define xC PB_M
# define xD PB_N
# define yD PB_M
# define zD PB_M
# define xE PB_N
# define xF PB_L
# define xG PB_M
# define yG PB_M
# define zG PB_L
# define xH PB_M
# define yH PB_P
# define zH PB_Q
# define vH PB_Q
# define xI PB_N
# define yI PB_M
# define zI PB_L
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define vJ PB_Q
# define xK PB_L
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

