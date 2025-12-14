#ifndef _4312231315_09_H
#define _4312231315_09_H
/* params start */
# define PB_M 8
# define PB_L 9
# define PB_P 8
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_L
# define yB PB_L
# define zB PB_L
# define xC PB_M
# define xD PB_L
# define yD PB_L
# define xE PB_M
# define yE PB_P
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_P
# define xG PB_L
# define yG PB_P
# define zG PB_Q
# define xH PB_M
# define xI PB_M
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

