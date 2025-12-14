#ifndef _4436232213_02_H
#define _4436232213_02_H
/* params start */
# define PB_M 9
# define PB_L 9
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_M
# define zA PB_L
# define vA PB_P
# define xB PB_M
# define yB PB_L
# define zB PB_L
# define vB PB_L
# define xC PB_M
# define yC PB_P
# define zC PB_Q
# define xE PB_M
# define yE PB_P
# define zE PB_P
# define vE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define xG PB_P
# define yG PB_Q
# define zG PB_Q
# define vG PB_Q
# define xH PB_M
# define yH PB_M
# define zH PB_L
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

