#ifndef _4436352123_07_H
#define _4436352123_07_H
/* params start */
# define PB_N 10
# define PB_M 9
# define PB_L 9
# define PB_P 10
# define PB_Q 8
/* params end */
# define xA PB_M
# define xC PB_L
# define yC PB_P
# define xD PB_M
# define yD PB_P
# define zD PB_Q
# define vD PB_Q
# define xE PB_L
# define yE PB_P
# define xF PB_M
# define xG PB_M
# define xH PB_M
# define xI PB_M
# define yI PB_L
# define zI PB_L
# define vI PB_L
# define wI PB_L
# define xJ PB_M
# define yJ PB_L
# define zJ PB_P
# define xK PB_M
# define yK PB_P
# define zK PB_Q
# define vK PB_Q
# define xL PB_N
# define yL PB_L
# define zL PB_P
# define xM PB_M
# define yM PB_L
# define zM PB_P
# define xN PB_M
# define yN PB_M
# define xO PB_M
# define yO PB_L
# define zO PB_P
# define vO PB_Q
# define xP PB_L
# define yP PB_P
# define zP PB_Q
# define vP PB_Q
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

