/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(((((min(var_0, var_8))) ? var_0 : (min(var_2, var_11)))))));
    var_14 = (min(var_12, (((1 + 1) || var_10))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [i_3] [i_4] = ((((min(((var_4 ? var_8 : var_12)), var_0))) ? (((-(~var_8)))) : var_6));
                                var_15 -= (((((arr_2 [i_3 - 4] [i_3] [i_2 - 2]) ? var_9 : (arr_2 [i_3 - 3] [i_2 + 1] [i_2 + 1]))) + (((((var_7 ^ var_12) != (min((arr_6 [i_0] [i_0] [i_0] [i_4]), var_10))))))));
                                var_16 *= ((2131650164 ? 1 : 1));
                            }
                        }
                    }
                    arr_13 [9] [9] [9] = (arr_7 [i_0] [i_0] [i_0]);
                    arr_14 [i_1] [i_1] [i_1] [i_0] = (max((((((arr_8 [i_0] [i_0] [i_0] [i_0]) ? var_5 : (arr_9 [i_0] [i_0] [8] [i_1] [i_1]))))), ((((min(var_7, var_4))) ? -var_7 : (((arr_4 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1 - 2]) ? var_12 : var_9))))));
                }
            }
        }
    }
    var_17 = var_0;
    #pragma endscop
}
