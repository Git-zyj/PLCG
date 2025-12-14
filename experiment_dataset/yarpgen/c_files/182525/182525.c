/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= ((((((2147418112 % var_4) >> (var_2 + 8111241883802192150)))) - ((var_12 ? var_5 : ((var_6 ? var_0 : var_13))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = (min((var_9 == -1), (((arr_2 [i_1] [i_0 + 2] [i_0 + 3]) ? (arr_2 [i_0] [i_0 + 3] [i_1]) : (arr_2 [i_0] [i_1] [1])))));
                arr_5 [i_0 - 1] [i_1] = (((arr_2 [i_0 + 3] [9] [i_1]) ? (((((2147418112 ? (arr_0 [i_0 + 1] [i_0]) : var_13)) | (arr_0 [i_0 + 3] [3])))) : ((2147418112 ? 2147549194 : 15009930057376502165))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    arr_10 [i_2] [i_1] [i_0] [10] = var_7;
                    arr_11 [3] [i_1] [0] = (((var_2 & var_8) ? 65535 : ((2147549194 ? 28866 : var_10))));
                    var_18 = ((!(var_12 & 566356263)));
                    var_19 = (((arr_3 [i_2 + 2] [i_0 + 1]) ? (arr_1 [i_0 - 1]) : (arr_3 [i_2 + 2] [i_0 - 1])));
                    arr_12 [i_0 + 1] [6] [11] [i_2 - 2] = ((!((((arr_2 [9] [i_2 + 1] [i_2 - 1]) ? (arr_0 [i_1] [11]) : (arr_2 [i_2 - 2] [i_1] [11]))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_20 += (~((84 ? var_4 : 1067603046)));
                            var_21 = (arr_19 [i_4 - 1] [i_5 + 2] [i_4 - 1]);
                        }
                        arr_26 [i_5] = (2147418109 / 58406);
                    }
                    var_22 = ((((((arr_19 [i_3] [i_3] [6]) ? var_11 : var_10))) ? (((((var_0 ? var_13 : 1))) ? (2147418118 % var_7) : (max((arr_21 [12] [7]), var_15)))) : (((((max(var_11, 1))) ? (~var_13) : -var_11)))));
                    var_23 = (min(var_11, ((((arr_15 [i_4 - 1]) == (arr_15 [i_4 - 1]))))));
                }
            }
        }
    }
    var_24 = (((max(-var_12, ((var_12 ? var_4 : var_0)))) % var_0));
    var_25 -= (max(var_2, var_2));
    #pragma endscop
}
