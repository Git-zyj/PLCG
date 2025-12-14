#ifndef _4414351321_08_H
#define _4414351321_08_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 8
# define PB_P 9
# define PB_Q 10
/* params end */
# define xB PB_M
# define xC PB_N
# define yC PB_N
# define xD PB_L
# define yD PB_P
# define zD PB_Q
# define vD PB_Q
# define xE PB_M
# define xF PB_N
# define xG PB_N
# define yG PB_M
# define xH PB_M
# define xI PB_M
# define yI PB_L
# define zI PB_L
# define xJ PB_N
# define yJ PB_M
# define zJ PB_L
# define xK PB_M
# define yK PB_L
# define zK PB_P
# define vK PB_P
# define xL PB_N
# define yL PB_L
# define zL PB_P
# define vL PB_Q
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

