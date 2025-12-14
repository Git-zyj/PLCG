/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = ((-39 ? (max(var_11, (arr_3 [i_1 - 3] [i_1 - 1]))) : ((((arr_2 [i_1]) + 21)))));
                var_16 = (max(var_16, (((~((((max((arr_3 [i_0] [i_1]), var_11))) ? (arr_3 [i_0 + 2] [12]) : (arr_0 [i_0]))))))));
                var_17 = (arr_0 [i_0]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        arr_15 [i_2] [19] [i_4] [i_4] [i_2] [i_4] = (max(-127, 0));
                        var_18 = (max((arr_11 [i_4]), (arr_11 [i_4])));
                        var_19 &= ((((arr_10 [i_3 + 2] [i_3 + 2]) ? (arr_10 [i_3 + 1] [i_3 + 1]) : (arr_6 [i_3 + 3] [i_3 - 1]))));
                    }
                }
            }
        }
        arr_16 [i_2] = ((((var_7 ? (arr_8 [i_2]) : (arr_11 [18])))));
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    arr_21 [i_2] = (min((min((arr_9 [i_6 - 2]), (arr_13 [24] [i_6 + 1]))), (arr_6 [i_6 - 3] [i_6 - 3])));
                    var_20 = (max(var_20, ((min((max((arr_6 [i_6 - 3] [i_6 - 1]), (arr_14 [i_6 - 2] [i_6 + 1] [i_6 + 1]))), (((!((((arr_19 [i_2] [i_6 + 1]) / (arr_14 [i_2] [i_6 - 1] [i_7]))))))))))));
                    var_21 -= 127;
                    arr_22 [i_7] [i_6 + 1] [i_2] = (max((((max(var_3, (arr_8 [i_2]))))), (arr_13 [4] [4])));
                }
            }
        }
        var_22 -= ((-((9223372036854775807 ? 3263762756 : 4318299948392595857))));
    }
    #pragma endscop
}
