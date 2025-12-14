/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_18, (((1 - var_13) << (var_17 - 51208)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (((((1 || (arr_7 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 1]))) ? (((min((arr_4 [i_1 - 2] [i_1 - 1] [i_1 + 1]), (arr_6 [i_1 + 1] [i_1 - 1] [i_1 - 2]))))) : (((arr_2 [0]) * (var_5 * 1))))))));

                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        var_21 = (max(var_21, 1));
                        arr_11 [i_3] [i_2] [i_2] [i_1 - 1] [i_0] = ((((((arr_7 [i_3 + 1] [i_1 - 2] [15] [i_1 - 2]) ? ((((arr_0 [i_0]) < 1))) : ((max(64591, 14)))))) / (((arr_10 [i_3 - 3] [i_0] [i_2] [i_3 + 2] [i_1 - 1]) ? (((((arr_2 [i_1]) || (arr_0 [i_2]))))) : (min((arr_0 [i_2]), 237))))));
                        var_22 = (max((arr_4 [i_3 - 3] [i_1 - 1] [i_1 - 2]), (4019980656 == 1)));
                        var_23 = (min(((min((arr_7 [i_1 - 2] [15] [i_3 + 2] [i_3 - 3]), (((var_17 && (arr_7 [i_0] [i_1] [i_2] [i_3]))))))), (((arr_7 [12] [i_3 - 1] [i_2] [i_2]) % (arr_7 [i_0] [i_3 + 1] [i_2] [7])))));
                    }
                    arr_12 [i_1] [20] = (max((arr_9 [i_2] [i_1 - 1] [i_1] [i_1 - 2] [i_0] [i_0]), ((-(max((arr_10 [i_0] [i_0] [5] [19] [i_0]), 1))))));
                    var_24 = ((!(~-23911)));
                }
            }
        }
    }
    var_25 = -var_16;
    #pragma endscop
}
