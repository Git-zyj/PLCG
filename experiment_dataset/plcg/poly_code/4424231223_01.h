#ifndef _4424231223_01_H
#define _4424231223_01_H
/* params start */
# define PB_M 9
# define PB_L 9
# define PB_P 9
# define PB_Q 10
/* params end */
# define xA PB_L
# define yA PB_P
# define zA PB_Q
# define vA PB_Q
# define xB PB_M
# define yB PB_L
# define zB PB_P
# define vB PB_Q
# define xD PB_M
# define xE PB_M
# define yE PB_P
# define zE PB_Q
# define vE PB_Q
# define wE PB_Q
# define xF PB_M
# define yF PB_L
# define zF PB_P
# define vF PB_Q
# define xG PB_L
# define yG PB_L
# define zG PB_P
# define xH PB_M
# define yH PB_L
# define zH PB_L
# define vH PB_P
# define xI PB_L
# define yI PB_P
# define zI PB_Q
# define xJ PB_M
# define xK PB_M
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

