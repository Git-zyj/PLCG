/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((8485747371048367350 ? var_10 : var_2));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_21 = ((arr_2 [i_0] [1]) ? ((((65 + (arr_1 [4] [i_0]))) | ((40257 ? 1482002546 : (arr_1 [3] [i_0]))))) : (((!(arr_2 [i_0 - 1] [i_0 + 2])))));
        var_22 = (max((arr_3 [16]), 13006));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_23 = (var_3 > 1482002546);
        var_24 = 0;
        var_25 = ((((((arr_5 [i_1]) > ((var_2 ? var_11 : 1))))) > (max(-950504232, 15473))));
        var_26 -= (((13205 & 1482002546) ? var_6 : (max((~var_2), (87 | -1482002546)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_27 -= (((((arr_8 [1]) ? (arr_5 [i_2]) : (arr_6 [i_2] [i_2]))) + 13211));
        var_28 = ((!(arr_9 [i_2])));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_29 = (!87);
                        var_30 = var_15;
                        var_31 = (168 < 1);
                        var_32 = (arr_14 [i_4] [i_5] [i_6]);
                        var_33 = (((arr_13 [i_3] [i_4]) ? var_1 : var_6));
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_34 = (!var_19);

                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_35 = (0 | 6);
                            var_36 = (111 > 31321978);
                            var_37 = (min(var_37, ((((arr_12 [i_4] [1]) < (arr_8 [i_3]))))));
                        }
                    }
                    var_38 = (((-6 | var_0) ? -7 : (arr_15 [i_5] [i_4] [i_5])));
                    var_39 = (((((3584 ? (arr_25 [12] [i_4] [i_5] [i_4] [11] [i_5] [10]) : var_3))) ? 13 : (arr_21 [i_4])));
                }
            }
        }
        var_40 = (arr_5 [i_3]);
    }
    #pragma endscop
}
