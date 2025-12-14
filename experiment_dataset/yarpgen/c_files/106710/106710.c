/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = ((7053 / (-32767 - 1)));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1 - 1] [i_1 - 1] [i_3 + 1] [i_0] = ((((((arr_2 [i_1]) ? (-32767 - 1) : 23)) / (arr_7 [i_0]))));
                        var_20 = (arr_0 [i_0]);
                        var_21 = ((min(-706580258736231449, -23)));

                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            var_22 = var_18;
                            var_23 = (((-32767 - 1) - ((-(arr_0 [i_0])))));
                        }
                        arr_14 [i_3] [13] [i_0] [i_0] [i_0] [i_0] = (((((((((arr_12 [i_0] [i_1] [i_0] [i_3]) ? (arr_12 [0] [i_1] [i_1 + 3] [i_1]) : (arr_10 [11] [i_0] [i_0] [i_0] [i_3])))) ? (((min(22, (arr_7 [i_1]))))) : ((var_8 ? (arr_2 [7]) : (-32767 - 1)))))) ? var_19 : (!32761)));
                    }
                }
            }
        }
        arr_15 [i_0] [i_0] = ((min(-18446744073709551615, 781394014679478334)));
        arr_16 [i_0] = max(var_11, (((-((max(32760, -32761)))))));
    }
    var_24 = ((~((((max(var_8, var_18))) ? 18446744073709551615 : (((min(var_18, 46))))))));
    var_25 = ((~((((-32759 ? 12468275886414062517 : 0))))));
    var_26 = 10;
    #pragma endscop
}
