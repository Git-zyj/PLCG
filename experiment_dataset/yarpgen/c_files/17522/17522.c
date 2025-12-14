/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_8 != var_9) / 9602458181794920765));
    var_14 = ((var_7 ? var_3 : ((((~var_9) ? -7094120896664695374 : (-7094120896664695374 <= 7094120896664695378))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] = var_2;
                            arr_10 [i_3 - 2] [i_3 + 2] [i_2] [i_1] [i_0] [i_0] = ((((2151343374 ? (arr_6 [i_3 - 1] [i_2] [i_1] [i_0]) : (max(var_6, 1)))) << (min(var_12, 1))));
                            var_15 = (max(var_15, ((((arr_3 [i_3 + 2] [i_1]) * (((arr_2 [i_0] [i_0]) / 2459127959685694354)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {

                            for (int i_6 = 1; i_6 < 22;i_6 += 1)
                            {
                                var_16 = (min(var_16, (arr_3 [i_6 - 1] [i_6 + 1])));
                                var_17 = (((arr_0 [i_6 - 1] [i_6 + 1]) || (!16383)));
                            }
                            for (int i_7 = 2; i_7 < 21;i_7 += 1)
                            {
                                var_18 -= (((arr_8 [i_0] [i_7 - 1] [i_5] [i_5] [i_7 - 2]) && (max((arr_8 [i_4] [i_1] [i_7 + 1] [i_7 + 1] [i_7 + 2]), (arr_8 [i_0] [i_1] [i_4] [i_5] [i_7 + 1])))));
                                var_19 = ((-(arr_7 [i_0] [i_0] [i_0])));
                                arr_22 [i_4] = 243;
                            }
                            arr_23 [i_4] [i_5] [i_4] [i_0] = 1;
                            var_20 = 1;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        {
                            var_21 |= ((~((-((var_7 / (arr_6 [i_0] [i_1] [i_9] [i_8])))))));
                            var_22 = (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_23 = (min(var_23, ((((((((arr_28 [i_8]) ? 2111062325329920 : 2111062325329920)) % 8)) | ((((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) << (((arr_25 [i_9] [i_8] [i_1]) ? 1 : (arr_1 [i_1])))))))))));
                            var_24 &= ((min(((((arr_13 [i_1] [i_1] [i_8]) > var_12))), (var_10 + var_4))) >> (((arr_0 [i_0] [i_1]) - 3133)));
                        }
                    }
                }
            }
        }
    }
    var_25 = ((min(7094120896664695374, ((0 ? var_12 : 3044290932)))));
    var_26 = (min(var_26, var_2));
    #pragma endscop
}
