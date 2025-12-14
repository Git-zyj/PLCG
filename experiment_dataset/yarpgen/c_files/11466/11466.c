/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (-var_5 > (max(6659395233207811501, (var_9 > var_1))));
    var_18 = (min(var_18, ((((6659395233207811501 << (var_15 - 153)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] = var_7;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_19 *= 195;
                                var_20 = (((min((arr_14 [10] [i_1 - 2] [i_1 - 2] [i_2] [i_3] [i_4 + 2] [i_4]), (arr_13 [7] [i_1 + 1] [7] [0] [i_4] [i_4 + 2])))) % (((arr_13 [i_1] [i_1 - 1] [i_3] [7] [i_3] [i_4 + 3]) ? (arr_14 [i_0] [i_1 - 3] [i_2] [i_3] [i_4] [i_4 - 1] [i_4]) : 14107225674789179457)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_3;
    var_22 = var_15;
    #pragma endscop
}
