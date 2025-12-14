#ifndef _4412351111_04_H
#define _4412351111_04_H
/* params start */
# define PB_N 30
# define PB_M 30
# define PB_L 40
# define PB_P 30
# define PB_Q 40
/* params end */
# define xA PB_N
# define yA PB_L
# define xB PB_M
# define xC PB_M
# define yC PB_L
# define zC PB_L
# define xD PB_M
# define yD PB_P
# define xE PB_M
# define xF PB_M
# define xG PB_M
# define xH PB_L
# define yH PB_P
# define xI PB_N
# define yI PB_N
# define xJ PB_N
# define yJ PB_M
# define zJ PB_L
# define xK PB_M
# define yK PB_L
# define xL PB_L
# define yL PB_P
# define zL PB_Q
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

