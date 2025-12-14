/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_3 [0] |= 118718108;
        var_18 += max(158, ((max(1, 1))));
        var_19 = 1;
        var_20 = (((-(arr_1 [i_0 - 1]))));
        arr_4 [i_0] = (1 - 1);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_8 [i_1] = (max(var_11, (-2147483647 - 1)));
        var_21 ^= ((!(((((arr_5 [i_1]) && (arr_0 [i_1])))))));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_22 = (-2147483647 - 1);

            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                var_23 = ((!((max((arr_6 [i_3 - 1] [i_1]), (arr_7 [12] [i_3 + 1]))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_24 = 2147483647;
                            var_25 ^= ((((min(var_11, 0)))) ? 1 : (arr_11 [1]));
                            arr_17 [i_1] [i_2] [i_1] = (((~((min(102, (arr_14 [i_1] [i_2])))))));
                            var_26 = var_16;
                            arr_18 [5] [i_4] [i_3 + 1] [i_1] [i_5] [i_1] = (((~0) ^ (max((arr_13 [i_5] [i_5] [i_5] [i_5 - 1] [i_5 - 1] [i_3 - 1]), (arr_15 [i_5] [i_5] [i_5 + 1] [i_3 + 1])))));
                        }
                    }
                }
            }
            arr_19 [i_2] [i_1] [i_1] = (((((1 ? (arr_0 [i_1]) : 2147483647))) ? (~1) : (((min(1, 1))))));
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            arr_22 [i_1] [i_1] [i_1] = var_13;
            var_27 = (min(-1, ((min(-38, 1)))));
        }
    }
    var_28 = var_12;
    #pragma endscop
}
