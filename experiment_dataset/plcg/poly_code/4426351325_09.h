#ifndef _4426351325_09_H
#define _4426351325_09_H
/* params start */
# define PB_M 9
# define PB_L 8
# define PB_P 8
# define PB_Q 8
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_P
# define xB PB_M
# define yB PB_L
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_L
# define yE PB_L
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define yG PB_L
# define zG PB_Q
# define xH PB_M
# define yH PB_L
# define xI PB_M
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define vJ PB_Q
# define xK PB_M
# define yK PB_L
# define zK PB_P
# define xL PB_M
# define yL PB_M
# define zL PB_L
# define vL PB_L
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

