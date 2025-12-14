/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (min((max(994288615, var_14)), (~var_0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 = (min((min(1340499276, -32761)), ((min((arr_1 [i_0]), (arr_1 [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((((max(var_3, (arr_10 [i_3] [i_3 - 2] [i_1] [i_3 + 2])))) ? (((arr_13 [i_3 + 1] [i_3 + 1] [i_2] [2] [i_4] [i_0]) ? (arr_13 [i_3 + 1] [8] [i_2] [i_3] [i_4] [i_3]) : (arr_13 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_1]))) : var_6)))));
                                var_20 = (min(var_20, (((((max((arr_9 [i_3 - 1] [21] [i_2] [20] [21]), 916987548))) ? ((var_5 ? 5276952418923838873 : var_3)) : ((((arr_11 [i_3 + 2] [i_0] [i_0] [i_0]) ? (arr_11 [i_3 - 1] [21] [i_2] [i_3]) : (arr_11 [i_3 - 1] [12] [1] [i_3])))))))));
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_3] [22] [i_4] &= (min((max(916987548, -10)), var_0));
                            }
                        }
                    }
                }
                var_21 = var_6;
            }
        }
    }
    var_22 = var_3;
    #pragma endscop
}
