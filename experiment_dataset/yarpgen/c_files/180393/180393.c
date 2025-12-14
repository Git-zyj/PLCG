/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_1] = (min((arr_4 [i_2]), (((arr_2 [i_0]) ? (arr_3 [i_1]) : ((max(var_2, var_3)))))));
                    var_14 = var_13;
                    var_15 = (max(var_15, (((!((((arr_3 [8]) ? (arr_3 [12]) : var_11))))))));

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_16 = var_11;
                        var_17 = min(((min(-6866, 58262))), ((~(arr_7 [i_3 + 1] [i_1] [i_1]))));
                        arr_13 [i_0] [i_3 - 1] [i_1] [i_3 + 1] = ((!(!var_3)));
                        var_18 = ((1095308759 ? 4294967295 : 3020582024));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_19 = (min(var_19, (arr_8 [i_4] [i_0 - 1])));
                        var_20 = (~var_11);
                        arr_17 [i_1] = ((((var_2 ? (arr_1 [i_1] [i_1]) : (arr_0 [i_0] [11])))) ? (arr_10 [i_0 - 1] [i_1] [i_2] [i_0 - 1]) : var_10);
                        var_21 = ((~(arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                        arr_18 [4] |= var_8;
                    }
                }
            }
        }
    }
    var_22 = var_4;
    var_23 *= var_3;
    var_24 = var_11;
    #pragma endscop
}
