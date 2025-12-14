#ifndef _4424351215_01_H
#define _4424351215_01_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 9
# define PB_P 8
# define PB_Q 8
/* params end */
# define xD PB_M
# define yD PB_L
# define xB PB_M
# define yB PB_L
# define zB PB_Q
# define vB PB_Q
# define xC PB_M
# define yC PB_L
# define zC PB_L
# define vC PB_P
# define xE PB_L
# define yE PB_P
# define xF PB_N
# define yF PB_M
# define xG PB_M
# define yG PB_L
# define zG PB_Q
# define vG PB_Q
# define xH PB_N
# define yH PB_N
# define zH PB_M
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define vI PB_Q
# define xJ PB_N
# define yJ PB_M
# define zJ PB_P
# define vJ PB_Q
# define wJ PB_Q
# define xK PB_M
# define yK PB_L
# define zK PB_L
# define vK PB_Q
# define xL PB_M
# define xM PB_M
# define yM PB_L
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

