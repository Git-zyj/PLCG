/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = (((arr_1 [i_0]) ? ((-(arr_5 [i_0] [i_1] [i_1] [i_2]))) : ((-(!524287)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_3] = arr_9 [i_3] [i_1] [i_2];
                        arr_12 [i_3] = var_12;
                        var_16 = (((((arr_4 [i_1]) ? var_3 : var_11)) | (arr_6 [i_0] [i_0] [i_0] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_15 [i_4] [i_2] [i_1] [i_0] = -583188108;
                        arr_16 [i_1] [i_1] = (((arr_6 [i_0] [i_1] [i_2] [i_0]) ? (arr_0 [i_0]) : var_9));
                        arr_17 [i_0] [i_0] [i_0] [i_2] [i_4] = (~524287);
                        arr_18 [i_4] [i_2] [i_1] [i_0] = var_3;
                    }
                    var_17 = ((arr_1 [i_1]) | (arr_5 [i_0] [i_0] [i_1] [i_2]));
                    arr_19 [i_0] [i_0] [i_1] [i_2] = (arr_6 [i_0] [i_1] [i_1] [i_0]);
                }
            }
        }
        arr_20 [i_0] [i_0] = (~var_11);
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_18 = (min(var_18, ((((arr_21 [i_5] [i_5]) | 1)))));
        arr_23 [i_5] = (min(((((arr_14 [i_5] [i_5]) ? (arr_5 [i_5] [i_5] [i_5] [i_5]) : (max((arr_14 [i_5] [i_5]), 1))))), ((1 ? (arr_14 [i_5] [i_5]) : (min(-189361540718071389, var_11))))));
        arr_24 [i_5] = (min((((((~(arr_4 [i_5])))) | 8837582799333320897)), (((((((arr_4 [i_5]) ? var_3 : var_10))) ? (((arr_21 [i_5] [i_5]) | -524293)) : var_10)))));
    }
    var_19 = (max((min(46399, ((var_0 ? var_6 : var_12)))), (((var_8 ? (~var_2) : (var_0 | var_6))))));
    var_20 = ((var_0 ? ((((max((-2147483647 - 1), var_11))) ? -var_2 : (var_4 | var_2))) : var_14));
    #pragma endscop
}
