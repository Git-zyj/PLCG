#ifndef _4432332125_06_H
#define _4432332125_06_H
/* params start */
# define PB_N 9
# define PB_M 9
# define PB_L 9
# define PB_P 8
# define PB_Q 10
/* params end */
# define xA PB_M
# define xB PB_M
# define yB PB_M
# define zB PB_M
# define vB PB_L
# define xD PB_M
# define yD PB_P
# define zD PB_Q
# define xE PB_M
# define xF PB_L
# define yF PB_P
# define xG PB_M
# define xH PB_N
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define vI PB_Q
# define xJ PB_M
# define yJ PB_P
# define zJ PB_Q
# define vJ PB_Q
# define wJ PB_Q
# define xK PB_N
# define yK PB_M
# define zK PB_M
# define vK PB_L
# define xL PB_M
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

