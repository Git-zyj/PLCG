#ifndef _4432351321_06_H
#define _4432351321_06_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 9
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_P
# define vA PB_Q
# define wA PB_Q
# define xB PB_M
# define yB PB_L
# define zB PB_L
# define vB PB_P
# define xC PB_M
# define yC PB_L
# define xD PB_L
# define yD PB_P
# define zD PB_P
# define xE PB_M
# define yE PB_L
# define zE PB_Q
# define vE PB_Q
# define xF PB_M
# define yF PB_P
# define zF PB_Q
# define vF PB_Q
# define xG PB_N
# define yG PB_N
# define zG PB_M
# define xH PB_N
# define yH PB_N
# define zH PB_M
# define vH PB_L
# define xI PB_M
# define yI PB_L
# define xJ PB_L
# define yJ PB_P
# define xK PB_M
# define yK PB_M
# define zK PB_L
# define xL PB_M
# define yL PB_L
# define zL PB_L
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

