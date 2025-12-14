#ifndef _4434332123_00_H
#define _4434332123_00_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 9
# define PB_P 8
# define PB_Q 10
/* params end */
# define xA PB_N
# define xB PB_M
# define yB PB_P
# define xC PB_M
# define xE PB_L
# define yE PB_L
# define xF PB_L
# define yF PB_P
# define zF PB_Q
# define xG PB_L
# define yG PB_P
# define zG PB_Q
# define xH PB_M
# define yH PB_L
# define xI PB_N
# define yI PB_M
# define xJ PB_N
# define yJ PB_M
# define zJ PB_M
# define vJ PB_L
# define xK PB_L
# define yK PB_Q
# define zK PB_Q
# define vK PB_Q
# define xL PB_M
# define yL PB_L
# define zL PB_L
# define vL PB_P
# define wL PB_Q
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

