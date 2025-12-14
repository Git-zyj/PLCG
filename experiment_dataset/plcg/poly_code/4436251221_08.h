#ifndef _4436251221_08_H
#define _4436251221_08_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 10
# define PB_P 8
# define PB_Q 9
/* params end */
# define xC PB_M
# define yC PB_L
# define xB PB_L
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define vE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define xG PB_L
# define yG PB_P
# define zG PB_Q
# define vG PB_Q
# define xH PB_M
# define xI PB_M
# define xJ PB_N
# define yJ PB_L
# define xK PB_M
# define yK PB_L
# define xL PB_M
# define yL PB_M
# define zL PB_L
# define xM PB_M
# define yM PB_M
# define zM PB_L
# define vM PB_P
# define wM PB_P
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

