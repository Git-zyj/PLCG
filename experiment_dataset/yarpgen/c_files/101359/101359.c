/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_1 ? -var_7 : ((var_0 ? (max(var_16, 2691)) : (((max(var_5, var_6))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, (((((min(4, (((arr_2 [i_1]) ? var_5 : var_12))))) ? (((((((arr_8 [i_2] [i_1] [i_0]) >> (2587406803 - 2587406756)))) && (~var_16)))) : (arr_6 [0] [i_1 - 2] [i_1 - 1]))))));
                    var_22 = (min(-var_9, (arr_7 [i_2 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 2])));

                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        var_23 = (max(var_23, (max((min((max(8760908396640645839, (arr_3 [i_3] [10] [i_3]))), var_12)), ((((arr_10 [i_3] [i_2 + 4] [i_3 + 3] [i_3]) ? var_11 : var_8)))))));
                        var_24 = ((~((0 ? (((var_6 ? (arr_1 [i_0]) : 6))) : ((var_4 ? 0 : var_15))))));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_25 = var_19;
                        var_26 ^= (min((max((arr_7 [i_1 - 1] [i_1 - 3] [i_1 + 1] [i_1 - 1]), (arr_7 [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_1 - 2]))), (max((arr_7 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 3]), var_12))));
                        var_27 += ((((arr_3 [i_1 - 1] [i_1 - 1] [i_2 + 2]) ? var_16 : (arr_4 [10] [i_1 - 2] [i_0]))));
                        var_28 = var_2;
                        var_29 = (!var_19);
                    }
                    var_30 = (min(var_30, ((((arr_9 [6] [i_1] [i_1]) / ((min((arr_6 [i_1 + 1] [i_1] [i_1 + 1]), (arr_6 [i_0] [i_0] [i_1 - 3])))))))));
                }
            }
        }
    }
    var_31 = var_2;
    #pragma endscop
}
