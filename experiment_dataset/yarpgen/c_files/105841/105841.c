/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_12));
    var_19 = 11;
    var_20 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_0] [i_0] = var_10;
                        var_21 = (max(var_21, (((~(((~var_0) ? (arr_10 [i_0] [i_0] [i_0] [12] [i_0]) : var_5)))))));
                        var_22 = (max(var_22, -var_6));
                        var_23 = (arr_7 [8] [8] [i_2 + 1] [i_2 - 1]);
                    }
                    for (int i_4 = 3; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        arr_15 [9] [i_1 - 1] [i_1] [i_4 + 1] [i_1 - 1] [i_1] = (min(((((min(14336, 51199))) || var_15)), (!3)));
                        var_24 = (min(var_24, (((~(arr_9 [13] [i_1 - 1] [i_1 - 1]))))));
                        arr_16 [i_4] [i_1] [i_1] = ((((~1) ? (arr_11 [i_1] [i_1] [i_1] [i_4 - 1] [i_1] [i_1]) : 51200)));
                    }
                    for (int i_5 = 3; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_5] [i_5] [i_1] [i_2] = max((((arr_3 [i_1 - 1] [i_5 - 1]) * (((var_16 > (arr_11 [i_1] [i_0] [i_1 - 1] [i_2 - 1] [i_5 - 2] [i_5])))))), 14337);
                        arr_20 [i_1] [i_0] [4] [i_2] [i_2] [i_5] = ((!(((((min(-34, var_13))) ? 65535 : (arr_18 [i_2 + 1] [i_5 - 1] [1] [i_0]))))));
                        var_25 = 51199;
                        arr_21 [i_0] [i_1] [i_0] [i_5 - 1] |= (((((-(arr_8 [i_5 - 1] [1] [i_2 - 1] [i_5] [i_1 - 1] [i_0])))) ? -var_15 : var_15));
                    }
                    var_26 = var_5;
                }
                var_27 ^= var_3;
            }
        }
    }
    #pragma endscop
}
