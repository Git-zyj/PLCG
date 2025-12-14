/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_15 ? -8 : 22556));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 |= (max(((var_16 / (((1 ? (arr_2 [1] [i_1] [i_1]) : (arr_0 [13] [i_2])))))), (((((var_1 ? (arr_0 [9] [i_2]) : 5200213857965324602)) < (arr_5 [i_0] [i_1] [i_2]))))));
                    var_22 = ((((max((arr_2 [i_1] [i_1] [i_2]), (arr_2 [i_1] [i_2] [i_2])))) / ((max((arr_2 [i_1] [i_1] [i_2]), (arr_2 [i_1] [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_23 = (((((arr_11 [i_2] [7] [i_2] [i_4 - 1] [i_3]) << (var_4 - 20389))) % (arr_11 [1] [1] [1] [i_4 + 2] [1])));
                                var_24 = -1767097728;
                                var_25 &= (max(var_13, (((-((var_9 ? (arr_3 [i_0] [i_3]) : var_3)))))));
                                var_26 = (arr_12 [i_2] [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 - 1] [i_4 - 1]);
                                arr_13 [12] |= min(var_8, (((1 + var_5) % var_2)));
                            }
                        }
                    }
                    var_27 = var_13;
                }
            }
        }
    }
    var_28 = (max(var_28, (((-2030686347 ? (!var_15) : ((var_4 ? ((min(var_17, var_8))) : -var_7)))))));
    #pragma endscop
}
