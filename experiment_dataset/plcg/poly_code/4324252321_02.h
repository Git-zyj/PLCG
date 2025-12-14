#ifndef _4324252321_02_H
#define _4324252321_02_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 8
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define zA PB_Q
# define vA PB_Q
# define xB PB_N
# define yB PB_M
# define zB PB_P
# define xC PB_M
# define yC PB_L
# define zC PB_L
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define vD PB_P
# define xE PB_L
# define yE PB_P
# define zE PB_Q
# define vE PB_Q
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define yG PB_M
# define zG PB_L
# define xH PB_N
# define yH PB_M
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

