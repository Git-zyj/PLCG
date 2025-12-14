#ifndef _4432352125_00_H
#define _4432352125_00_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 9
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_M
# define xB PB_M
# define yB PB_L
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define vD PB_Q
# define xE PB_L
# define yE PB_L
# define xF PB_M
# define xG PB_M
# define xH PB_M
# define yH PB_L
# define xI PB_M
# define yI PB_L
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define xK PB_N
# define yK PB_N
# define zK PB_M
# define vK PB_L
# define wK PB_P
# define xL PB_L
# define yL PB_P
# define zL PB_Q
# define vL PB_Q
# define xM PB_M
# define yM PB_P
# define zM PB_Q
# define vM PB_Q
# define xN PB_N
# define yN PB_M
# define zN PB_L
# define vN PB_L
# define xO PB_M
# define yO PB_L
# define zO PB_P
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

