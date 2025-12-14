/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 = ((var_6 == (((max(var_7, var_14)) ^ (-32767 - 1)))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_21 |= -32767;
                    var_22 -= var_7;
                    arr_8 [i_0] [9] [i_2] [i_2] = var_7;

                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        var_23 = ((17261 ? (((arr_2 [i_0]) ? -102044810 : (arr_5 [1] [i_1] [i_2]))) : var_2));
                        var_24 = (((arr_9 [i_3 - 1] [i_1] [i_1] [i_1] [i_2]) ? var_1 : 12194));

                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            var_25 |= ((-((38922 ? 26180 : 179))));
                            var_26 *= var_9;
                            var_27 = (min(var_27, (arr_10 [i_1])));
                            var_28 = ((-(arr_4 [i_0])));
                            arr_14 [i_0] [i_1] [i_3] [i_4 - 1] [i_4] = ((var_15 ? var_8 : var_7));
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_29 = ((-(arr_15 [i_0] [i_1] [i_2] [i_3 - 3] [i_1])));
                            var_30 = (min(var_30, (~var_2)));
                            var_31 = 32767;
                            arr_17 [i_3] [i_3] = (((((-(arr_10 [i_0])))) ? ((var_10 ? var_4 : var_5)) : var_17));
                            var_32 = (((arr_7 [i_0] [i_2] [i_2] [i_3 - 3]) ? (arr_7 [i_2] [i_1] [9] [i_3 - 3]) : (arr_7 [i_1] [i_3 - 3] [i_0] [i_3 + 1])));
                        }
                        var_33 = (var_18 >= (arr_7 [i_1] [i_3 + 2] [i_1] [i_3 + 2]));
                        var_34 = ((var_16 ? var_11 : (6770441813213713714 ^ 223)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
