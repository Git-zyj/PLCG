/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (max((arr_1 [1]), (((-((1 ? var_4 : 5)))))));
        var_12 = (max(var_12, ((((arr_1 [i_0]) && (arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_13 = (((arr_2 [i_1]) ? (arr_2 [i_1]) : (11 || -7644957057539652691)));
        var_14 = ((1 ? ((-(arr_2 [i_1]))) : (arr_4 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    {
                        var_15 = var_9;

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_16 = var_6;
                            var_17 = (239 ? 22 : (!var_8));
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_18 = var_1;
                            var_19 = (min(var_19, (arr_11 [i_4 - 2])));
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_20 = ((!((max((arr_18 [i_7]), 22)))));
        var_21 = (~var_8);
        arr_21 [i_7] [i_7] &= (((min(var_9, (arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [17] [i_7]))) <= 1));
        var_22 = ((((((arr_18 [i_7]) ? (arr_18 [i_7]) : (arr_18 [i_7])))) ? ((-(arr_18 [i_7]))) : 33));
    }
    var_23 = (32 < var_9);
    var_24 = (min(var_24, ((((11 ? (min(-7644957057539652676, 2147483647) : (59738 && -1378879823607319000))))))));
    #pragma endscop
}
