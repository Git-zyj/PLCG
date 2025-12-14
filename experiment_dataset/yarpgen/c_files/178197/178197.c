/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_11 = (((((var_7 && (arr_2 [i_0 - 2])))) < var_7));
        var_12 |= ((var_9 ? var_7 : ((((max(255, (arr_0 [i_0])))) - (((!(arr_0 [i_0]))))))));
        var_13 = (((((var_4 ? (arr_1 [20] [i_0 - 1]) : (arr_1 [i_0 - 2] [i_0 + 1])))) ? ((((arr_1 [i_0 + 1] [i_0 - 2]) ? (var_6 > 70368609959936) : -36))) : (((arr_1 [i_0 - 2] [i_0 - 2]) ? (arr_0 [i_0 - 1]) : -2474183305279748649))));
        var_14 = var_2;
        var_15 = var_5;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_16 = (!var_0);
        var_17 = (103 - 13);
        var_18 = (arr_0 [i_1 - 2]);
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    {
                        var_19 = (arr_10 [i_2 + 1] [i_2] [i_3]);
                        var_20 = (arr_5 [i_2 + 2] [i_2 + 2]);
                        var_21 = (arr_0 [i_1]);
                        var_22 *= arr_6 [i_3];
                    }
                }
            }
        }
        var_23 = (((arr_5 [20] [i_1 - 1]) || (~var_1)));
    }
    var_24 = (min(var_6, ((70368609959936 ? (var_8 & var_5) : (~var_5)))));
    var_25 = (max((max(var_4, (min(var_2, 288230376151711488)))), ((((var_9 ? var_9 : var_4)) % var_1))));
    var_26 = (min(32, -70368609959936));
    #pragma endscop
}
