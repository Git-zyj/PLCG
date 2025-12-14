#ifndef _3322131313_03_H
#define _3322131313_03_H
/* params start */
# define PB_N 50
# define PB_M 40
# define PB_L 30
# define PB_P 40
/* params end */
# define xA PB_M
# define yA PB_P
# define zA PB_P
# define xB PB_M
# define xC PB_N
# define yC PB_L
# define zC PB_P
# define xD PB_N
# define yD PB_M
# define zD PB_L
# define xE PB_L
# define xF PB_M
# define yF PB_P
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

