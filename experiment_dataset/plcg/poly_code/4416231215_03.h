#ifndef _4416231215_03_H
#define _4416231215_03_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 10
# define PB_P 8
# define PB_Q 8
/* params end */
# define xA PB_M
# define xD PB_M
# define yD PB_L
# define zD PB_L
# define vD PB_P
# define xE PB_N
# define xF PB_N
# define yF PB_M
# define zF PB_L
# define xG PB_N
# define yG PB_M
# define zG PB_M
# define vG PB_P
# define xH PB_M
# define yH PB_P
# define xI PB_M
# define yI PB_M
# define xJ PB_N
# define yJ PB_M
# define zJ PB_M
# define xK PB_M
# define yK PB_P
# define zK PB_Q
# define vK PB_Q
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

