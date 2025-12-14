#ifndef _4416351323_08_H
#define _4416351323_08_H
/* params start */
# define PB_N 8
# define PB_M 9
# define PB_L 8
# define PB_P 8
# define PB_Q 9
/* params end */
# define xA PB_N
# define yA PB_M
# define xB PB_M
# define yB PB_P
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define vC PB_Q
# define xD PB_M
# define xE PB_M
# define yE PB_L
# define zE PB_P
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_Q
# define xG PB_N
# define yG PB_M
# define zG PB_M
# define xH PB_M
# define yH PB_L
# define xI PB_N
# define yI PB_N
# define xJ PB_M
# define xK PB_M
# define yK PB_L
# define xL PB_M
# define yL PB_L
# define zL PB_P
# define vL PB_Q
# define wL PB_Q
# define xM PB_M
# define yM PB_L
# define zM PB_L
# define vM PB_P
# define wM PB_Q
# define xN PB_N
# define yN PB_M
# define zN PB_M
# define xO PB_L
# define xP PB_M
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

