/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] = ((var_2 | (((var_7 ? ((min(var_3, var_14))) : ((var_5 & (arr_6 [i_0 - 2] [i_1] [i_0] [i_0]))))))));
                            arr_13 [2] [5] [i_2] [i_3] [i_3] [i_0] = (arr_6 [i_3] [i_0] [i_0] [i_0]);

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                arr_16 [i_0] [i_0] = ((((((arr_3 [i_0] [i_1]) ? var_10 : var_12))) ? var_8 : (((arr_5 [i_0] [i_1]) ? ((-(arr_1 [i_0]))) : (arr_10 [i_0 - 1] [i_1] [i_2] [i_0 - 2])))));
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_0] = (((var_10 ? ((var_2 ? 33632 : var_3)) : (((arr_5 [i_0] [i_4]) & var_2)))));
                            }
                        }
                    }
                }
                arr_18 [i_0] [i_1] = 33623;
                var_15 = (((((3170200398701909420 ? var_12 : (arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 3] [i_0 - 3])))) ? -var_6 : (~31914)));
                arr_19 [i_0] [i_0] = (arr_8 [i_0 - 1]);
                arr_20 [i_0 + 1] [i_0] = ((max((arr_5 [i_0] [i_1]), 1220774015)));
            }
        }
    }
    var_16 = (2251799813685247 / var_11);
    var_17 = 14456482121907999601;
    var_18 = var_3;
    var_19 = (var_13 || var_4);
    #pragma endscop
}
