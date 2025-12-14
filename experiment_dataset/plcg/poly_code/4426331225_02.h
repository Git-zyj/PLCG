#ifndef _4426331225_02_H
#define _4426331225_02_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 8
# define PB_P 9
# define PB_Q 9
/* params end */
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xB PB_M
# define xE PB_L
# define yE PB_L
# define zE PB_P
# define vE PB_Q
# define wE PB_Q
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define xH PB_M
# define xI PB_N
# define yI PB_L
# define xJ PB_M
# define yJ PB_L
# define zJ PB_L
# define xK PB_N
# define yK PB_N
# define zK PB_N
# define vK PB_M
# define xL PB_M
# define yL PB_M
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

