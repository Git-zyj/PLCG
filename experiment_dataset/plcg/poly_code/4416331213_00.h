#ifndef _4416331213_00_H
#define _4416331213_00_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 8
# define PB_P 9
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_L
# define vA PB_Q
# define xB PB_M
# define yB PB_L
# define zB PB_L
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define vC PB_Q
# define xD PB_M
# define yD PB_P
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define vE PB_P
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define vF PB_Q
# define xG PB_M
# define yG PB_P
# define zG PB_Q
# define xH PB_M
# define yH PB_M
# define zH PB_M
# define xI PB_M
# define yI PB_M
# define zI PB_L
# define vI PB_P
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define vJ PB_Q
# define wJ PB_Q
# define xK PB_N
# define xL PB_M
# define yL PB_P
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

