#ifndef _4414331321_04_H
#define _4414331321_04_H
/* params start */
# define PB_M 9
# define PB_L 9
# define PB_P 10
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_P
# define zA PB_P
# define vA PB_Q
# define xB PB_M
# define yB PB_L
# define zB PB_Q
# define vB PB_Q
# define wB PB_Q
# define xC PB_L
# define yC PB_Q
# define zC PB_Q
# define xD PB_L
# define yD PB_P
# define zD PB_Q
# define xE PB_L
# define yE PB_P
# define zE PB_Q
# define vE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_P
# define wF PB_Q
# define xG PB_M
# define yG PB_P
# define zG PB_Q
# define vG PB_Q
# define xH PB_M
# define yH PB_L
# define zH PB_L
# define vH PB_P
# define xI PB_M
# define yI PB_M
# define xJ PB_L
# define yJ PB_L
# define zJ PB_Q
# define xK PB_M
# define yK PB_P
# define xL PB_M
# define yL PB_L
# define zL PB_P
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

