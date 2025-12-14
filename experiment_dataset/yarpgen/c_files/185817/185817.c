/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = ((1 ? var_2 : ((56503 ? 0 : 1))));
        var_18 = ((-4 + 2147483647) << (8569793015430621599 - 1));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_19 = (((arr_6 [i_2 - 4] [i_1 + 1] [i_0]) ? (((arr_4 [i_1]) ? var_15 : var_5)) : (((var_5 ? var_2 : (arr_5 [i_1 + 1] [i_1]))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((-(arr_3 [i_2] [i_2] [i_2])));
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_16 [i_0] [i_1 + 1] [i_1] [i_3] [i_3] [i_5] [i_5] = 1;
                            var_20 = ((~(arr_9 [i_0] [i_1] [i_2 - 3] [i_3])));
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_21 = (arr_10 [i_0] [i_1] [i_2] [i_1] [i_6] [i_2 - 4] [i_1 + 1]);
                            arr_19 [i_0] [i_0] [i_1] [i_0] [i_3] [i_6] [i_6] = (!-8200926871864321249);
                            var_22 &= (arr_15 [i_2 - 2] [i_1 - 1] [i_0]);
                        }
                        var_23 = (((arr_15 [i_2 - 3] [i_2 + 1] [i_1 + 1]) ? ((-(arr_7 [i_1]))) : (arr_5 [i_1 - 1] [i_1])));
                        arr_20 [i_0] [i_1 + 1] [i_1] [i_3] = (!115);
                    }
                }
            }
        }
        arr_21 [i_0] = var_10;
        arr_22 [i_0] |= (1 & 28415);
    }
    var_24 |= ((-(((var_3 <= ((-28421 ? var_14 : -8200926871864321249)))))));
    var_25 = ((((var_8 > ((var_9 ? var_6 : var_10)))) ? ((var_11 ? (~var_16) : 8200926871864321249)) : (((+((1 ? (-32767 - 1) : 32754)))))));
    #pragma endscop
}
