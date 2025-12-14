#ifndef _4426332323_00_H
#define _4426332323_00_H
/* params start */
# define PB_N 9
# define PB_M 10
# define PB_L 10
# define PB_P 10
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_M
# define zA PB_M
# define vA PB_L
# define xB PB_L
# define yB PB_L
# define zB PB_P
# define xC PB_N
# define yC PB_M
# define zC PB_M
# define vC PB_L
# define xD PB_N
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define vE PB_Q
# define xF PB_N
# define yF PB_M
# define zF PB_L
# define vF PB_P
# define xG PB_L
# define yG PB_P
# define zG PB_Q
# define xH PB_N
# define yH PB_N
# define xI PB_M
# define yI PB_L
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define vJ PB_Q
# define wJ PB_Q
# define xK PB_M
# define yK PB_P
# define zK PB_Q
# define vK PB_Q
# define xL PB_L
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

