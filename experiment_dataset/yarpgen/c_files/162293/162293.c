/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = ((~(arr_1 [i_0])));
                var_20 = ((!(((~(arr_4 [i_0] [i_0] [i_0]))))));
                var_21 = (((((min(var_17, var_13) < (((min(var_0, (arr_1 [i_0]))))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] [i_3] [5] [i_3] = ((((((-1854734724 ? 4294967295 : var_9)) | 0)) / ((((((6 + (arr_1 [i_2]))) >= (((var_4 % (arr_10 [i_1]))))))))));
                                var_22 = (!4);
                                var_23 = 4294967295;
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (min((min(0, 4294967295)), 0));
    var_25 = (((((max(var_14, var_18)))) & var_15));
    var_26 = var_6;
    #pragma endscop
}
