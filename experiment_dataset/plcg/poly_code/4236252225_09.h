#ifndef _4236252225_09_H
#define _4236252225_09_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 9
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_L
# define yA PB_P
# define zA PB_Q
# define vA PB_Q
# define xC PB_N
# define yC PB_M
# define zC PB_P
# define vC PB_Q
# define xD PB_N
# define yD PB_N
# define zD PB_N
# define vD PB_L
# define xE PB_L
# define yE PB_P
# define zE PB_Q
# define xF PB_L
# define yF PB_P
# define zF PB_Q
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

