#ifndef _4226251313_09_H
#define _4226251313_09_H
/* params start */
# define PB_N 50
# define PB_M 40
# define PB_L 30
# define PB_P 40
# define PB_Q 40
/* params end */
# define xA PB_M
# define xB PB_M
# define yB PB_L
# define xC PB_N
# define xD PB_M
# define xE PB_N
# define yE PB_M
# define zE PB_P
# define xF PB_M
# define yF PB_M
# define xG PB_M
# define yG PB_L
# define zG PB_P
# define xH PB_L
# define yH PB_P
# define zH PB_Q
# define vH PB_Q
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

