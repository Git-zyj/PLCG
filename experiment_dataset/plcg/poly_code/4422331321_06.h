#ifndef _4422331321_06_H
#define _4422331321_06_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 10
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_L
# define xB PB_M
# define yB PB_P
# define zB PB_Q
# define vB PB_Q
# define xD PB_M
# define yD PB_L
# define xE PB_M
# define xF PB_M
# define yF PB_P
# define xG PB_N
# define yG PB_M
# define zG PB_L
# define vG PB_Q
# define wG PB_Q
# define xH PB_M
# define yH PB_L
# define zH PB_L
# define vH PB_Q
# define xI PB_N
# define yI PB_L
# define zI PB_L
# define vI PB_P
# define xJ PB_M
# define yJ PB_P
# define zJ PB_Q
# define vJ PB_Q
# define xK PB_M
# define yK PB_L
# define xL PB_M
# define yL PB_M
# define zL PB_L
# define xM PB_N
# define yM PB_M
# define zM PB_L
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

