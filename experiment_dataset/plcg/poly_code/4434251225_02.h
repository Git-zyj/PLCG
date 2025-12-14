#ifndef _4434251225_02_H
#define _4434251225_02_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 10
# define PB_P 9
# define PB_Q 10
/* params end */
# define xB PB_M
# define yB PB_L
# define zB PB_Q
# define xD PB_N
# define yD PB_M
# define zD PB_P
# define xE PB_N
# define yE PB_M
# define zE PB_L
# define vE PB_L
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define xG PB_N
# define yG PB_M
# define zG PB_L
# define vG PB_P
# define xH PB_N
# define yH PB_M
# define zH PB_L
# define xI PB_M
# define yI PB_L
# define xJ PB_M
# define xK PB_N
# define yK PB_M
# define xL PB_N
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

