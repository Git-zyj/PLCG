#ifndef _4432351321_02_H
#define _4432351321_02_H
/* params start */
# define PB_N 10
# define PB_M 8
# define PB_L 10
# define PB_P 9
# define PB_Q 9
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_M
# define xC PB_L
# define yC PB_P
# define zC PB_Q
# define xD PB_M
# define yD PB_M
# define zD PB_M
# define vD PB_P
# define xE PB_M
# define yE PB_L
# define xF PB_M
# define yF PB_L
# define xG PB_M
# define xH PB_M
# define xI PB_N
# define yI PB_M
# define zI PB_L
# define vI PB_Q
# define xJ PB_M
# define yJ PB_P
# define zJ PB_P
# define vJ PB_Q
# define xK PB_M
# define yK PB_P
# define zK PB_Q
# define vK PB_Q
# define wK PB_Q
# define xL PB_N
# define yL PB_M
# define zL PB_M
# define vL PB_P
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

