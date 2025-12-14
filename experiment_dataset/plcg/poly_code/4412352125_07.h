#ifndef _4412352125_07_H
#define _4412352125_07_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 8
# define PB_P 10
# define PB_Q 8
/* params end */
# define xC PB_M
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define vD PB_P
# define xE PB_N
# define xF PB_N
# define xG PB_M
# define yG PB_P
# define zG PB_Q
# define vG PB_Q
# define xH PB_L
# define yH PB_L
# define zH PB_Q
# define vH PB_Q
# define xI PB_M
# define yI PB_L
# define xJ PB_M
# define yJ PB_L
# define xK PB_L
# define yK PB_P
# define zK PB_Q
# define vK PB_Q
# define wK PB_Q
# define xL PB_M
# define yL PB_L
# define zL PB_L
# define vL PB_P
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

