#ifndef _4324351325_05_H
#define _4324351325_05_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 8
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_N
# define yA PB_M
# define zA PB_P
# define xB PB_L
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_L
# define yE PB_P
# define xF PB_N
# define yF PB_M
# define zF PB_L
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define xH PB_M
# define xI PB_M
# define xJ PB_M
# define yJ PB_P
# define zJ PB_Q
# define vJ PB_Q
# define xK PB_M
# define yK PB_L
# define zK PB_P
# define vK PB_Q
# define wK PB_Q
# define xL PB_N
# define yL PB_L
# define zL PB_P
# define vL PB_P
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

