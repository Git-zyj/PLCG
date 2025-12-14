#ifndef _3212252223_01_H
#define _3212252223_01_H
/* params start */
# define PB_N 40
# define PB_M 40
# define PB_L 40
# define PB_P 40
# define PB_Q 30
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_P
# define xB PB_M
# define yB PB_L
# define xC PB_M
# define yC PB_L
# define zC PB_Q
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_N
# define yE PB_M
# define xF PB_M
# define yF PB_L
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

