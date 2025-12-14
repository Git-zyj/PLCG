#ifndef _4426351211_00_H
#define _4426351211_00_H
/* params start */
# define PB_N 9
# define PB_M 10
# define PB_L 10
# define PB_P 9
# define PB_Q 9
/* params end */
# define xA PB_M
# define xB PB_L
# define yB PB_P
# define xC PB_M
# define yC PB_L
# define zC PB_P
# define vC PB_Q
# define xE PB_N
# define xF PB_N
# define xG PB_M
# define xH PB_M
# define yH PB_M
# define xI PB_M
# define yI PB_L
# define xJ PB_M
# define yJ PB_L
# define xK PB_L
# define yK PB_P
# define zK PB_Q
# define vK PB_Q
# define xL PB_M
# define yL PB_L
# define zL PB_P
# define xM PB_M
# define yM PB_L
# define zM PB_P
# define vM PB_Q
# define xN PB_M
# define yN PB_P
# define zN PB_P
# define xO PB_M
# define yO PB_L
# define zO PB_P
# define vO PB_Q
# define xP PB_N
# define yP PB_M
# define zP PB_P
# define vP PB_Q
# define wP PB_Q
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

