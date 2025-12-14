/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = var_6;
        var_12 = var_7;
        var_13 = var_8;
        arr_2 [8] |= (((min((-2147483647 - 1), -var_8))) ? (var_7 | var_0) : 21578);
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_13 [i_4] [i_4] = (!var_4);
                        var_14 = ((((min(-5, -5))) ? ((((var_1 ? 233 : -2011142586)))) : var_1));
                        var_15 = 10;
                    }
                }
            }
        }
        var_16 ^= ((~((6 ? 2335 : var_7))));
        var_17 *= (min((((((min(var_7, var_2))) || (((var_1 ? var_9 : var_2)))))), -var_1));
        var_18 = var_7;
    }
    var_19 -= var_10;
    var_20 = 2147483647;
    #pragma endscop
}
