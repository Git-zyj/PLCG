#ifndef _4422252111_02_H
#define _4422252111_02_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 10
# define PB_P 8
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_M
# define zA PB_L
# define vA PB_P
# define xB PB_M
# define yB PB_L
# define zB PB_Q
# define xC PB_N
# define yC PB_M
# define zC PB_L
# define vC PB_L
# define xD PB_M
# define yD PB_P
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define xG PB_M
# define yG PB_M
# define zG PB_L
# define vG PB_L
# define wG PB_P
# define xH PB_N
# define yH PB_M
# define zH PB_L
# define vH PB_P
# define xI PB_M
# define yI PB_M
# define zI PB_L
# define vI PB_L
# define xJ PB_M
# define xK PB_M
# define yK PB_L
# define xL PB_M
# define yL PB_Q
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

