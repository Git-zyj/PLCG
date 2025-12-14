#ifndef _4424351315_05_H
#define _4424351315_05_H
/* params start */
# define PB_M 10
# define PB_L 8
# define PB_P 8
# define PB_Q 10
/* params end */
# define xA PB_M
# define yA PB_L
# define xD PB_M
# define yD PB_L
# define xC PB_M
# define yC PB_L
# define xE PB_M
# define yE PB_L
# define xF PB_L
# define yF PB_P
# define xG PB_L
# define yG PB_P
# define xH PB_M
# define xI PB_L
# define yI PB_P
# define zI PB_P
# define vI PB_Q
# define wI PB_Q
# define xJ PB_M
# define yJ PB_L
# define zJ PB_L
# define vJ PB_P
# define xK PB_M
# define yK PB_L
# define zK PB_P
# define vK PB_Q
# define xL PB_L
# define yL PB_L
# define zL PB_P
# define vL PB_Q
# define wL PB_Q
# define xM PB_L
# define yM PB_P
# define zM PB_P
# define xN PB_M
# define xO PB_M
# define yO PB_L
# define zO PB_L
# define vO PB_P
# define xP PB_L
# define yP PB_P
# define zP PB_Q
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

