#ifndef _4426351313_04_H
#define _4426351313_04_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 10
# define PB_P 10
# define PB_Q 8
/* params end */
# define xD PB_N
# define xB PB_L
# define yB PB_L
# define zB PB_P
# define vB PB_Q
# define xC PB_L
# define yC PB_P
# define xE PB_L
# define xF PB_L
# define xG PB_M
# define yG PB_L
# define zG PB_L
# define vG PB_Q
# define xH PB_L
# define yH PB_P
# define zH PB_Q
# define vH PB_Q
# define xI PB_N
# define yI PB_M
# define xJ PB_L
# define yJ PB_P
# define xK PB_M
# define yK PB_L
# define xL PB_N
# define yL PB_M
# define zL PB_L
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

