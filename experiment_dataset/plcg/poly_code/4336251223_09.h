#ifndef _4336251223_09_H
#define _4336251223_09_H
/* params start */
# define PB_N 50
# define PB_M 40
# define PB_L 50
# define PB_P 40
# define PB_Q 40
/* params end */
# define xA PB_M
# define yA PB_M
# define zA PB_L
# define xB PB_M
# define yB PB_L
# define xC PB_L
# define yC PB_P
# define zC PB_Q
# define vC PB_Q
# define xD PB_L
# define yD PB_P
# define xE PB_M
# define xF PB_N
# define yF PB_M
# define xG PB_L
# define yG PB_Q
# define zG PB_Q
# define xH PB_L
# define yH PB_L
# define zH PB_Q
# define vH PB_Q
# define xI PB_L
# define yI PB_P
# define zI PB_Q
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

