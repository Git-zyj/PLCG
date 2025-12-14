#ifndef _4416352123_04_H
#define _4416352123_04_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 8
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_M
# define xC PB_M
# define yC PB_L
# define xD PB_M
# define yD PB_L
# define zD PB_L
# define vD PB_L
# define xE PB_M
# define xF PB_M
# define xG PB_L
# define xH PB_M
# define yH PB_P
# define xI PB_L
# define yI PB_P
# define xJ PB_M
# define yJ PB_L
# define xK PB_N
# define yK PB_M
# define zK PB_L
# define vK PB_P
# define xL PB_M
# define yL PB_M
# define zL PB_L
# define xM PB_M
# define yM PB_L
# define zM PB_P
# define xN PB_N
# define yN PB_L
# define zN PB_P
# define vN PB_Q
# define wN PB_Q
# define xO PB_M
# define yO PB_L
# define zO PB_P
# define vO PB_P
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

