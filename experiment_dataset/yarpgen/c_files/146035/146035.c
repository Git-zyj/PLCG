/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    var_15 = (max((var_13 != 14680064), (max(var_5, (~var_4)))));
    var_16 &= (min(536870912, (((var_2 + var_7) ? var_1 : var_6))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_17 = (arr_2 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = ((+(((arr_4 [i_3]) + (arr_4 [i_1 - 2])))));
                                var_19 = (((((+(((arr_6 [i_0]) << (var_8 - 761191013)))))) * (min(var_5, (arr_3 [i_4])))));
                            }
                        }
                    }
                    var_20 = (arr_7 [i_0] [1] [i_2]);
                    var_21 = ((~((-(arr_12 [i_2] [i_2] [i_2] [i_2] [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_22 = ((-(max((min((arr_0 [i_0]), (arr_7 [13] [13] [4]))), (arr_0 [i_0])))));
                                var_23 = (~var_8);
                                var_24 = (max(var_24, ((max((((arr_12 [i_2] [i_5] [i_2] [i_1] [i_2]) ? var_13 : var_1)), ((max(14680065, 1))))))));
                            }
                        }
                    }
                }
            }
        }
        arr_20 [10] = (((min((arr_12 [4] [i_0] [i_0] [i_0] [i_0]), var_8))));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
    {
        var_25 = (arr_2 [i_7]);
        arr_23 [1] = (arr_8 [i_7] [i_7] [i_7] [i_7] [15] [8]);
    }
    var_26 = ((-(((((min(var_8, var_3))) || var_5)))));
    #pragma endscop
}
