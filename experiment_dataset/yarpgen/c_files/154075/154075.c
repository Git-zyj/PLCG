/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (arr_0 [i_0]);

                /* vectorizable */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    var_20 = (arr_1 [i_0]);

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_11 [i_3] [1] [i_1] [i_1] = var_12;
                        arr_12 [i_3] [i_3] = 52;
                        var_21 = (((arr_4 [i_2 + 1] [i_2 - 1] [i_2 - 1]) / (arr_8 [i_3] [i_1] [i_0] [i_2 - 2])));
                    }
                    arr_13 [i_0] [i_0] [i_0] [i_0] = (((arr_5 [i_1]) ? (!82502687) : (!var_2)));
                    var_22 = (max(var_22, (((19478 ? -22 : -31108)))));
                }
                /* vectorizable */
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    arr_17 [i_1] [i_1] [i_1] [i_1] = (arr_15 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 - 1]);
                    arr_18 [i_0] [i_0] [10] = (((arr_1 [i_4 - 1]) / (arr_1 [i_4 + 1])));
                }
                var_23 = (min(((((arr_4 [i_1] [i_1] [i_1]) < var_17))), 107160));
            }
        }
    }
    var_24 = (((0 ^ 39881286) ? (max((!var_4), var_10)) : (((var_16 & (((min(var_7, var_11)))))))));
    #pragma endscop
}
