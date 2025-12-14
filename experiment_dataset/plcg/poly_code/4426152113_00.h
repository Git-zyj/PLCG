#ifndef _4426152113_00_H
#define _4426152113_00_H
/* params start */
# define PB_N 8
# define PB_M 10
# define PB_L 10
# define PB_P 9
# define PB_Q 9
/* params end */
# define xA PB_N
# define yA PB_N
# define zA PB_L
# define xB PB_L
# define yB PB_P
# define xC PB_M
# define yC PB_P
# define zC PB_Q
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define vD PB_Q
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define vE PB_Q
# define xF PB_M
# define yF PB_L
# define xG PB_N
# define xH PB_M
# define yH PB_L
# define zH PB_P
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

