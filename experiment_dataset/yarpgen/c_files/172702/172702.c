/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_13 = (122067498 - 9);
            var_14 = (11 % var_1);
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_15 = (arr_3 [i_0] [i_2 - 1] [i_2 - 1]);
            arr_7 [i_0] [i_0] [i_0] = (13526937858772713438 != 96);
            arr_8 [i_0] [i_2] [i_0] = (((((26751 ? 12 : (arr_4 [i_0])))) ? 9 : (arr_6 [i_2])));
            var_16 = (arr_3 [i_0] [i_2 - 1] [i_0]);
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_17 = (max(var_17, 9223372036854775802));
                    arr_13 [i_0] [i_0] [i_0] [i_4] = (!-5650330485115198447);
                }
            }
        }
        var_18 = (arr_9 [i_0 + 3] [6] [6]);
    }
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        var_19 = (108 ? (13526937858772713459 * 13526937858772713442) : var_8);
        var_20 = ((-78 & ((8763974441053682004 ? ((67 ? 32764 : var_11)) : 65535))));
        var_21 += ((var_4 ? (65524 - -73) : (((arr_15 [i_5] [i_5 + 4]) ? (arr_15 [i_5] [i_5 + 4]) : var_1))));
        arr_16 [i_5] = (!2229384777);
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        arr_19 [i_6] = ((~(max(((var_4 ? (arr_14 [1]) : -5650330485115198448)), var_4))));
        arr_20 [i_6] = -8763974441053682004;
    }
    var_22 = (!-8763974441053682027);
    var_23 -= var_12;
    #pragma endscop
}
