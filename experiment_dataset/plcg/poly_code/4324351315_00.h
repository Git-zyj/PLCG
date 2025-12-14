#ifndef _4324351315_00_H
#define _4324351315_00_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 10
# define PB_P 9
# define PB_Q 10
/* params end */
# define xC PB_M
# define yC PB_L
# define zC PB_Q
# define vC PB_Q
# define xB PB_L
# define yB PB_Q
# define xD PB_N
# define yD PB_M
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define vE PB_Q
# define xF PB_N
# define yF PB_M
# define zF PB_M
# define xG PB_M
# define yG PB_L
# define zG PB_L
# define xH PB_M
# define yH PB_L
# define xI PB_M
# define xJ PB_N
# define yJ PB_L
# define zJ PB_Q
# define vJ PB_Q
# define xK PB_N
# define yK PB_M
# define zK PB_L
# define vK PB_P
# define wK PB_Q
# define xL PB_M
# define yL PB_L
# define zL PB_P
# define vL PB_Q
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

