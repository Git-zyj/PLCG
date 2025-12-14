#ifndef _4416331223_04_H
#define _4416331223_04_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 10
# define PB_P 10
# define PB_Q 8
/* params end */
# define xB PB_N
# define yB PB_M
# define xD PB_M
# define yD PB_M
# define zD PB_L
# define vD PB_P
# define xE PB_L
# define yE PB_P
# define xF PB_M
# define yF PB_P
# define xG PB_M
# define xH PB_M
# define yH PB_L
# define xI PB_M
# define yI PB_M
# define zI PB_L
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define xK PB_M
# define yK PB_L
# define zK PB_P
# define xL PB_L
# define yL PB_P
# define zL PB_Q
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

