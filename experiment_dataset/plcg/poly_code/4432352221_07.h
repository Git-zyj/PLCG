#ifndef _4432352221_07_H
#define _4432352221_07_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 8
# define PB_P 10
# define PB_Q 8
/* params end */
# define xB PB_L
# define yB PB_P
# define xC PB_M
# define yC PB_L
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_M
# define yE PB_L
# define xF PB_N
# define yF PB_N
# define zF PB_M
# define xG PB_M
# define yG PB_L
# define xH PB_N
# define yH PB_M
# define xI PB_N
# define xJ PB_N
# define yJ PB_N
# define zJ PB_N
# define vJ PB_M
# define xK PB_N
# define yK PB_N
# define zK PB_M
# define vK PB_L
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

