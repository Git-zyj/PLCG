/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2 + 2] = var_3;
                    var_15 = ((+((var_3 ? (arr_4 [i_2 + 2] [i_2] [i_2]) : (((-37 ? 12288 : 63)))))));

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_16 = (~4294967295);
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_3] = ((((!(((~(arr_9 [i_0] [13] [i_2] [i_3])))))) ? (((var_12 ? var_2 : 774349742))) : (arr_9 [i_2] [i_2 - 3] [i_2 - 3] [i_2])));
                        arr_11 [i_3] [i_1] [i_2] [i_3] = ((-(~var_4)));
                        var_17 = 0;
                        var_18 *= (max((min(var_10, ((-1 ? (-2147483647 - 1) : 35)))), 264241152));
                    }
                    arr_12 [i_0] [i_0] [i_0] = (((~((max(-1, 36828))))));
                }
            }
        }
    }
    var_19 *= ((var_12 ? ((((min(16, (-127 - 1))) != (((var_2 ? 4294967294 : var_6)))))) : (((!var_5) * var_0))));
    var_20 *= var_13;
    var_21 -= 1;
    #pragma endscop
}
