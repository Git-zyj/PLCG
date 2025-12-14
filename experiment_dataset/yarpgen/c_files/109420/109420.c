/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((16777215 && var_7) > (min(var_12, var_7)))) ? ((-1672356443 - ((var_0 ? var_6 : var_4)))) : (((1 & var_5) + (var_13 || 4294967291)))));
    var_17 = (min(var_17, var_14));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = (1 && 767850270586869530);
        var_19 ^= (1643 - 9213767355335287993);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_20 = 1;
        var_21 = 18446744073709551615;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 6;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 6;i_3 += 1)
            {
                {
                    arr_8 [i_3] [i_1] [i_3] = var_2;
                    var_22 = (-(min((arr_3 [i_2]), 2170507949)));
                }
            }
        }
    }
    var_23 = (((((~var_8) > (~4177920))) && ((var_3 > (~2146792697)))));
    #pragma endscop
}
