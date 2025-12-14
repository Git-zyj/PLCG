/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = (max((min(var_14, ((max(3397405531, 3))))), ((max(((((arr_5 [i_1]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])))), (arr_4 [i_0] [i_0 + 2]))))));
                arr_6 [i_0] = ((((max(var_13, var_14))) ? ((var_11 ? (arr_2 [i_1 - 1] [i_0 + 2]) : var_10)) : (arr_2 [i_1 - 1] [i_0 - 2])));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_16 [i_4 + 3] [i_0] [i_2] [i_0] [i_0] = min((((var_8 ? (arr_9 [i_0] [i_2] [i_2]) : (arr_12 [i_0] [i_0] [i_0 + 2] [i_0 - 2] [i_0] [i_0])))), (max(((max((arr_13 [i_4] [i_4] [i_4 - 1] [i_4 + 3] [i_4 + 3] [i_4]), (arr_0 [i_3])))), ((3692065042 ? 13043916372417311500 : var_4)))));
                                var_16 = (~var_5);
                                var_17 = (((min((min(var_4, (arr_13 [i_4 - 1] [i_0] [i_1] [i_0] [i_1] [i_0]))), ((min(var_8, 897561765)))))) ? (((!var_4) << (((arr_5 [i_0 + 3]) + 174187612617057836)))) : (((((arr_13 [i_1] [i_3] [i_2] [i_3] [i_4] [i_3]) ? (arr_11 [i_2 + 1] [i_0] [i_0]) : (arr_0 [i_1]))))));
                            }
                        }
                    }
                }
                arr_17 [i_0] [i_0] [i_1] = ((-116 && (arr_3 [i_0])));
                var_18 = ((var_10 ? var_14 : (((~(arr_0 [i_0]))))));
            }
        }
    }
    var_19 = (min(var_19, var_14));
    #pragma endscop
}
