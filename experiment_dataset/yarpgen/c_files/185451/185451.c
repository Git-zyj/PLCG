/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((((((((max(var_3, var_4))) ? var_11 : ((var_10 ? 445020411 : var_0))))) ? ((106 ? -1913925444 : 68719476720)) : (var_12 ^ 0))))));
    var_14 = (max(var_14, ((((((var_4 && var_0) / (0 + var_0)))) ? (((((0 ? 68719476720 : 1029715699947039887))) ? (68719476720 | var_4) : (32184 / var_11))) : (((var_5 ? var_8 : (var_11 && var_4))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((0 * ((((-58 ? 33351 : 0)) << (33351 - 33349)))));
                arr_6 [i_0] [i_0] [i_0] = var_10;
                arr_7 [i_0] [i_0] = (((arr_4 [i_1 - 1] [i_1 + 2]) ? var_3 : ((86 ? 33351 : var_11))));
                var_15 ^= (min((((arr_1 [i_0] [i_0]) ? (((0 - (arr_0 [i_0])))) : (((arr_1 [i_0] [i_0]) ? var_7 : (arr_1 [i_0] [i_0]))))), (((1 ? ((255 ? var_12 : 0)) : (0 & 99))))));
                var_16 = (min(var_16, ((max((((arr_2 [i_0]) + var_8)), (((-2147483647 - 1) | 1)))))));
            }
        }
    }
    var_17 = (((((((1 ? 86 : 664067790)) << ((((var_7 ? var_8 : 65535)) - 35941))))) - ((1 ? ((36261 ? 13703767311374523075 : 3630899506)) : 0))));
    #pragma endscop
}
