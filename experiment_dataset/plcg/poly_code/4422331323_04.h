#ifndef _4422331323_04_H
#define _4422331323_04_H
/* params start */
# define PB_N 30
# define PB_M 50
# define PB_L 40
# define PB_P 30
# define PB_Q 50
/* params end */
# define xA PB_L
# define yA PB_Q
# define xB PB_L
# define yB PB_P
# define zB PB_Q
# define xC PB_M
# define xD PB_L
# define yD PB_Q
# define zD PB_Q
# define xE PB_M
# define yE PB_L
# define xF PB_L
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define yH PB_L
# define zH PB_P
# define xI PB_N
# define yI PB_L
# define zI PB_L
# define xJ PB_M
# define yJ PB_M
# define zJ PB_L
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

