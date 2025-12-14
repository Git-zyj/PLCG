#ifndef _4414212221_03_H
#define _4414212221_03_H
/* params start */
# define PB_N 9
# define PB_M 10
# define PB_L 8
# define PB_P 8
# define PB_Q 10
/* params end */
# define xA PB_L
# define yA PB_P
# define zA PB_P
# define xB PB_L
# define yB PB_P
# define xD PB_N
# define yD PB_M
# define zD PB_L
# define vD PB_P
# define xE PB_L
# define yE PB_Q
# define xF PB_M
# define yF PB_M
# define zF PB_L
# define xG PB_M
# define yG PB_P
# define zG PB_Q
# define vG PB_Q
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

