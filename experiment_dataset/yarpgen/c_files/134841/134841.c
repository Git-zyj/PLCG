/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 = (arr_1 [i_0] [i_0]);
                                arr_12 [i_0] [i_4] = ((1 % ((145 ? var_13 : var_4))));
                                var_17 = (max(var_17, ((min(var_0, (((~(arr_4 [i_1 + 2] [i_2 + 1])))))))));
                                var_18 = (min(var_18, var_1));
                            }
                        }
                    }
                }
                var_19 = var_5;
                var_20 = var_9;
            }
        }
    }
    var_21 = var_14;
    var_22 = ((!(!var_7)));
    var_23 = (min(var_23, 214));
    #pragma endscop
}
