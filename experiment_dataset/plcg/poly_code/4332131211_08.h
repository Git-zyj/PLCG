#ifndef _4332131211_08_H
#define _4332131211_08_H
/* params start */
# define PB_M 40
# define PB_L 50
# define PB_P 30
# define PB_Q 30
/* params end */
# define xA PB_L
# define yA PB_P
# define zA PB_Q
# define xB PB_M
# define xD PB_M
# define yD PB_L
# define zD PB_L
# define xE PB_L
# define yE PB_P
# define xF PB_M
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

