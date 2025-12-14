#ifndef _4416351325_05_H
#define _4416351325_05_H
/* params start */
# define PB_N 9
# define PB_M 8
# define PB_L 8
# define PB_P 9
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_M
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define vC PB_P
# define xD PB_L
# define yD PB_P
# define zD PB_Q
# define xE PB_M
# define yE PB_L
# define xF PB_L
# define yF PB_P
# define xG PB_M
# define yG PB_M
# define xH PB_M
# define xI PB_M
# define yI PB_L
# define zI PB_Q
# define xJ PB_M
# define yJ PB_P
# define zJ PB_Q
# define vJ PB_Q
# define xK PB_M
# define yK PB_M
# define zK PB_M
# define xL PB_M
# define yL PB_L
# define zL PB_Q
# define vL PB_Q
# define xM PB_M
# define yM PB_L
# define zM PB_Q
# define vM PB_Q
# define xN PB_M
# define yN PB_M
# define zN PB_P
# define vN PB_P
# define wN PB_Q
# define xO PB_N
# define yO PB_N
# define zO PB_L
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

