#ifndef _4426351115_09_H
#define _4426351115_09_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 10
# define PB_P 9
# define PB_Q 9
/* params end */
# define xD PB_N
# define yD PB_N
# define zD PB_M
# define vD PB_M
# define xB PB_N
# define yB PB_M
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define vE PB_Q
# define xF PB_N
# define yF PB_N
# define zF PB_M
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define vG PB_Q
# define xH PB_M
# define yH PB_P
# define zH PB_P
# define xI PB_M
# define yI PB_L
# define xJ PB_M
# define yJ PB_L
# define xK PB_M
# define yK PB_L
# define xL PB_M
# define xM PB_M
# define xN PB_L
# define yN PB_L
# define zN PB_P
# define vN PB_Q
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

