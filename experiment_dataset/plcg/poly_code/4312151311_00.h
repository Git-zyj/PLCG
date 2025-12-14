#ifndef _4312151311_00_H
#define _4312151311_00_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 10
# define PB_P 8
# define PB_Q 10
/* params end */
# define xA PB_N
# define yA PB_M
# define zA PB_L
# define vA PB_P
# define xB PB_M
# define yB PB_L
# define zB PB_Q
# define vB PB_Q
# define xC PB_M
# define yC PB_L
# define zC PB_L
# define xD PB_M
# define yD PB_L
# define zD PB_L
# define vD PB_P
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_L
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

