/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((arr_2 [i_0] [i_0]) * var_9));
        arr_4 [i_0] = 71;
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        var_15 = (((arr_6 [i_1 - 2]) ? 1057657592 : -32));
        arr_8 [i_1] = (((((3237309723 ^ (arr_0 [0])))) ? ((~(((arr_7 [i_1]) ^ -52)))) : ((((2552092147 ^ 2552092145) ^ 58151)))));
        var_16 = ((((((~64942) ? ((1 << (14411340035868450920 - 14411340035868450913))) : (2552092147 < 672464786)))) ? (arr_1 [i_1]) : var_4));
    }
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        var_17 = ((-(((max(var_2, (arr_5 [i_2])))))));
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_18 = 5178161349294156717;
                    var_19 = (12393177595151709280 + 1340166141);
                    var_20 = var_13;
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_21 -= 2552092163;
                                arr_23 [i_2] [i_3] [i_4] [i_5 - 1] [i_3] = (arr_10 [i_5]);
                            }
                        }
                    }
                    arr_24 [i_3] [i_3] = (((((max(-1964789001, (arr_16 [i_4] [i_3] [i_4] [i_4]))))) - (((((arr_19 [i_2] [i_2 - 2] [i_3] [i_4]) ? var_2 : var_11)) + (var_4 ^ var_13)))));
                }
            }
        }
        arr_25 [i_2 + 2] = (((((min(var_12, 503612637613233464))) ? (!var_9) : -0)));
    }
    var_22 = ((((var_8 ? ((4035404037841100683 ? var_3 : -23)) : var_9)) & (((5689 ? 46 : 1161256713)))));
    #pragma endscop
}
