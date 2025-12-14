/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((var_6 ? var_2 : (~var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = (~(((((var_9 ? var_12 : (arr_3 [i_0] [i_0] [i_0])))) ? var_4 : (var_13 || var_15))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_3] [i_3] [i_1] = (max((((var_12 & (arr_2 [i_1])))), -var_14));
                            var_19 = (min(var_19, (arr_1 [i_0 + 3] [i_2])));
                            arr_11 [i_0] [i_1] [i_2] [i_1] [i_3] [i_2 + 1] = (((min((arr_6 [i_0 + 2]), (arr_6 [i_0 - 1])))) ? (min((arr_6 [i_0 + 2]), var_13)) : (arr_6 [i_0 + 3]));
                            var_20 = (max(var_20, (((~(((arr_9 [i_2 - 2] [i_2] [17] [i_3]) ? (arr_9 [i_2 + 1] [i_3] [i_3] [i_3]) : (arr_9 [i_2 - 2] [i_3] [i_3] [i_3]))))))));
                        }
                    }
                }
                var_21 = (max(var_21, (((+(min((arr_9 [i_0] [i_1] [i_1] [i_1]), 251)))))));
                arr_12 [i_0] [1] [16] |= 2131104830;
            }
        }
    }
    #pragma endscop
}
