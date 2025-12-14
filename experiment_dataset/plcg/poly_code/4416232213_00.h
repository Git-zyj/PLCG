#ifndef _4416232213_00_H
#define _4416232213_00_H
/* params start */
# define PB_M 10
# define PB_L 10
# define PB_P 10
# define PB_Q 9
/* params end */
# define xD PB_M
# define yD PB_M
# define zD PB_L
# define xB PB_L
# define xC PB_M
# define yC PB_M
# define zC PB_L
# define vC PB_P
# define xE PB_M
# define yE PB_M
# define zE PB_L
# define vE PB_P
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_Q
# define xG PB_M
# define yG PB_P
# define zG PB_Q
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define xI PB_M
# define yI PB_L
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

