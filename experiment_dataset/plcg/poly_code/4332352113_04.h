#ifndef _4332352113_04_H
#define _4332352113_04_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 9
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_M
# define zA PB_P
# define vA PB_Q
# define xB PB_N
# define xC PB_L
# define yC PB_Q
# define zC PB_Q
# define vC PB_Q
# define xD PB_M
# define yD PB_L
# define zD PB_Q
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_M
# define yF PB_M
# define zF PB_L
# define vF PB_P
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define vG PB_Q
# define wG PB_Q
# define xH PB_M
# define xI PB_L
# define xJ PB_N
# define xK PB_L
# define yK PB_P
# define zK PB_Q
# define vK PB_Q
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

