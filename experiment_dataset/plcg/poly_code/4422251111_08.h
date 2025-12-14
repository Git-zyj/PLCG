#ifndef _4422251111_08_H
#define _4422251111_08_H
/* params start */
# define PB_N 8
# define PB_M 8
# define PB_L 8
# define PB_P 9
# define PB_Q 8
/* params end */
# define xD PB_L
# define yD PB_P
# define xB PB_M
# define xC PB_N
# define yC PB_L
# define zC PB_P
# define vC PB_Q
# define xE PB_L
# define yE PB_P
# define zE PB_P
# define xF PB_M
# define yF PB_P
# define zF PB_Q
# define xG PB_M
# define yG PB_L
# define xH PB_M
# define xI PB_L
# define xJ PB_M
# define yJ PB_M
# define zJ PB_M
# define vJ PB_L
# define xK PB_N
# define yK PB_M
# define zK PB_L
# define vK PB_Q
# define xL PB_L
# define yL PB_P
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

