#ifndef _4434351115_05_H
#define _4434351115_05_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 9
# define PB_P 9
/* params end */
# define xD PB_N
# define yD PB_M
# define zD PB_L
# define vD PB_L
# define wD PB_L
# define xC PB_M
# define xE PB_M
# define yE PB_P
# define zE PB_P
# define vE PB_P
# define xF PB_N
# define yF PB_M
# define zF PB_M
# define vF PB_P
# define xG PB_M
# define yG PB_L
# define xH PB_N
# define yH PB_L
# define xI PB_M
# define xJ PB_M
# define yJ PB_L
# define xK PB_N
# define yK PB_N
# define zK PB_M
# define xL PB_M
# define yL PB_L
# define zL PB_P
# define xM PB_N
# define yM PB_N
# define zM PB_L
# define vM PB_P
# define wM PB_P
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

