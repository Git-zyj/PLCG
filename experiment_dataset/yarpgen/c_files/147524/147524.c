/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (max((min((((var_16 ? 47 : 1))), (-717675039574099896 ^ 2121693013363684468))), var_12));
    var_19 *= var_16;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (((~4066152600897409635) / (((1 ? (arr_0 [i_0]) : var_3)))))));
        var_21 = min((min(var_16, (arr_1 [i_0] [i_0]))), var_1);
        arr_2 [i_0] = var_12;
        var_22 *= var_9;
    }

    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_23 = (288230376151187456 <= 4066152600897409622);

        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            arr_9 [i_1] [15] [i_2 - 1] = (arr_8 [i_1 + 1] [i_1 + 3] [i_2 + 2]);
            var_24 += (arr_4 [i_1 - 1]);
            var_25 ^= (((arr_4 [0]) < (arr_4 [i_1 + 3])));
            var_26 = 16384;
        }
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_27 = arr_0 [14];
        var_28 -= ((min(32759, ((max(-113, 112))))));
        var_29 = (min(var_29, ((min(var_12, (((((arr_10 [i_3]) >= (arr_7 [i_3]))))))))));

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_30 = var_12;
            arr_14 [i_4] [i_3] = (arr_12 [i_3] [i_4] [i_4]);
            var_31 = ((((min(113, (arr_7 [i_3])))) ? ((min((arr_11 [i_3] [i_4]), (arr_7 [i_3])))) : (~91)));
            arr_15 [i_3] = (arr_0 [5]);
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_32 = (((((~(arr_0 [i_5 - 3])))) >= (max(var_11, var_13))));

                        for (int i_7 = 2; i_7 < 20;i_7 += 1)
                        {
                            arr_24 [i_3] [i_4] [i_4] [i_5] [i_7] = var_6;
                            arr_25 [i_5] = var_13;
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_33 += -16385;
                            var_34 += var_8;
                        }
                        var_35 = (max(var_35, ((max(19869, ((6144 / (arr_19 [i_5] [i_5] [i_5 - 3] [i_5 - 3]))))))));
                    }
                }
            }
        }
        var_36 = (arr_11 [i_3] [1]);
    }
    var_37 += (max((~150), var_14));
    #pragma endscop
}
