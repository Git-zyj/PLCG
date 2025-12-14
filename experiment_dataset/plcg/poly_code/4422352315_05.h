#ifndef _4422352315_05_H
#define _4422352315_05_H
/* params start */
# define PB_N 10
# define PB_M 10
# define PB_L 8
# define PB_P 10
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_L
# define yB PB_P
# define zB PB_Q
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define xD PB_M
# define yD PB_L
# define zD PB_P
# define vD PB_Q
# define xE PB_M
# define yE PB_P
# define xF PB_M
# define yF PB_L
# define xG PB_N
# define yG PB_N
# define xH PB_M
# define xI PB_M
# define yI PB_L
# define zI PB_P
# define xJ PB_M
# define yJ PB_P
# define zJ PB_Q
# define xK PB_M
# define yK PB_L
# define zK PB_P
# define xL PB_M
# define yL PB_L
# define zL PB_P
# define vL PB_Q
# define xM PB_M
# define yM PB_P
# define zM PB_Q
# define vM PB_Q
# define wM PB_Q
# define xN PB_M
# define yN PB_L
# define zN PB_P
# define vN PB_Q
# define xO PB_M
# define yO PB_L
# define zO PB_P
# define vO PB_Q
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

