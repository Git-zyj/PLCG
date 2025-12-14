#ifndef _4432351321_09_H
#define _4432351321_09_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 9
# define PB_P 9
# define PB_Q 9
/* params end */
# define xA PB_N
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define vB PB_Q
# define xC PB_L
# define yC PB_P
# define zC PB_Q
# define vC PB_Q
# define xD PB_L
# define xE PB_L
# define xF PB_N
# define xG PB_M
# define xH PB_M
# define yH PB_M
# define zH PB_M
# define xI PB_M
# define yI PB_L
# define zI PB_Q
# define vI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define vJ PB_Q
# define xK PB_M
# define yK PB_M
# define zK PB_L
# define vK PB_P
# define wK PB_Q
# define xL PB_M
# define yL PB_L
# define zL PB_P
# define xM PB_N
# define yM PB_M
# define zM PB_L
# define xN PB_M
# define yN PB_L
# define zN PB_P
# define vN PB_P
# define xO PB_M
# define yO PB_L
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

