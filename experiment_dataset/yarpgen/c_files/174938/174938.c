/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_1] [i_0] = ((((min((arr_8 [i_0 + 2] [i_1] [i_2] [i_1]), var_16))) && (((64 ? (min((arr_8 [i_0] [i_1] [i_1] [i_2]), (arr_7 [i_1] [1]))) : -1)))));
                    var_20 = (arr_5 [i_2]);
                    var_21 ^= ((((!(~11245865848434881709)))));
                    var_22 = (i_1 % 2 == 0) ? (((((((((((arr_3 [i_1]) + 2147483647)) << (-1 + 1)))) || ((((arr_1 [i_0 + 2] [i_0 + 2]) ? -7 : -69))))) ? var_16 : ((((47199 <= 2014311959371141824) * (var_3 > 77))))))) : (((((((((((((arr_3 [i_1]) - 2147483647)) + 2147483647)) << (-1 + 1)))) || ((((arr_1 [i_0 + 2] [i_0 + 2]) ? -7 : -69))))) ? var_16 : ((((47199 <= 2014311959371141824) * (var_3 > 77)))))));
                }
            }
        }
    }
    var_23 -= (min((((!9223372036854775807) ? var_16 : var_6)), -288883564));
    var_24 = var_1;

    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        var_25 = ((var_3 ? (((min((min((arr_12 [i_3 + 1]), 38455)), (!var_17))))) : ((((((arr_12 [i_3]) ? var_16 : (arr_12 [i_3])))) ? -288883564 : var_18))));
        var_26 = (-202088406 >= var_5);
    }
    #pragma endscop
}
