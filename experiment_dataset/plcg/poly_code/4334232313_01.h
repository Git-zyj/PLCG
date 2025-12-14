#ifndef _4334232313_01_H
#define _4334232313_01_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 8
# define PB_P 10
/* params end */
# define xA PB_M
# define yA PB_M
# define zA PB_M
# define xB PB_M
# define yB PB_L
# define zB PB_L
# define vB PB_P
# define xC PB_M
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_N
# define yE PB_M
# define zE PB_L
# define xF PB_N
# define yF PB_M
# define zF PB_M
# define vF PB_L
# define xG PB_M
# define xH PB_M
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

