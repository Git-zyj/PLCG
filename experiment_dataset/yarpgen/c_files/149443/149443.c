/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, ((max((((min(var_6, var_5)))), ((var_11 / (arr_4 [i_2] [i_1] [i_0]))))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_17 = (arr_7 [i_1] [i_1] [i_2]);
                        var_18 = (((arr_4 [i_0] [5] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_2])));
                    }
                    arr_10 [i_2] [i_1] [i_1] = 1;
                    var_19 += max(((-(((arr_6 [i_0] [i_0] [i_2]) ? var_6 : (arr_0 [i_1]))))), ((((var_1 ? (arr_4 [i_1] [i_1] [i_1]) : (arr_7 [i_0] [i_0] [i_0]))))));
                    var_20 = (min(var_20, (min((((var_9 && var_13) << (((((arr_0 [i_0]) ? var_8 : (arr_0 [i_0]))) - 1440587926)))), var_3))));
                }
            }
        }
    }
    var_21 = ((var_8 << ((((8 ? 3 : -140677944)) - 3))));
    #pragma endscop
}
