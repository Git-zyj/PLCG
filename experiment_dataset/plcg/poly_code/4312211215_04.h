#ifndef _4312211215_04_H
#define _4312211215_04_H
/* params start */
# define PB_N 40
# define PB_M 50
# define PB_L 50
# define PB_P 50
# define PB_Q 40
/* params end */
# define xA PB_N
# define yA PB_M
# define xB PB_N
# define yB PB_N
# define zB PB_L
# define xC PB_L
# define yC PB_L
# define zC PB_P
# define xD PB_L
# define yD PB_Q
# define zD PB_Q
# define xE PB_L
# define yE PB_P
# define zE PB_Q
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

