#ifndef _4422131123_00_H
#define _4422131123_00_H
/* params start */
# define PB_M 10
# define PB_L 10
# define PB_P 9
# define PB_Q 9
/* params end */
# define xA PB_M
# define xB PB_M
# define yB PB_P
# define xC PB_M
# define yC PB_L
# define zC PB_L
# define vC PB_P
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define xE PB_M
# define xF PB_L
# define yF PB_P
# define xG PB_M
# define yG PB_M
# define zG PB_L
# define vG PB_P
# define xH PB_M
# define yH PB_P
# define zH PB_Q
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

