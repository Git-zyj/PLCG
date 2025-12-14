/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= max(var_15, 1204586702);
    var_18 = (((var_15 ? (((min(var_5, var_10)))) : ((var_0 ? var_4 : 128)))));
    var_19 = (max(var_19, ((min(var_0, var_3)))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_20 |= min((((arr_0 [i_0]) % ((min(1, var_9))))), ((min((arr_1 [i_0 - 1]), var_2))));
        var_21 = var_5;
        var_22 = var_11;
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                {
                    var_23 += (((((arr_3 [i_1 - 1]) ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 + 1]))) == ((min(((-3172150071445713002 ? var_16 : (arr_10 [i_1] [i_1] [i_3] [i_1]))), var_14)))));
                    var_24 = (max(var_24, ((((min(var_9, var_7)))))));
                }
            }
        }
    }
    #pragma endscop
}
