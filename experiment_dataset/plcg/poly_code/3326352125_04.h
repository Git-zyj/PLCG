#ifndef _3326352125_04_H
#define _3326352125_04_H
/* params start */
# define PB_N 30
# define PB_M 40
# define PB_L 30
# define PB_P 40
# define PB_Q 50
/* params end */
# define xA PB_L
# define yA PB_L
# define zA PB_Q
# define xB PB_L
# define xD PB_N
# define yD PB_M
# define xE PB_M
# define yE PB_L
# define xF PB_M
# define xG PB_M
# define xH PB_M
# define xI PB_L
# define yI PB_P
# define zI PB_Q
# define xJ PB_L
# define yJ PB_P
# define zJ PB_Q
# define xK PB_M
# define yK PB_L
# define xL PB_L
# define yL PB_P
# define zL PB_Q
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

