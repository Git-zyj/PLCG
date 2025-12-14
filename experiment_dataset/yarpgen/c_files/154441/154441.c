/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_6);
    var_13 = var_9;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_14 = (min((min(var_1, 6199739002722352228)), (arr_0 [i_0] [i_0 + 1])));

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_15 = arr_2 [i_1] [6] [i_0 + 1];

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                arr_6 [i_0] [i_0] [1] [i_1 + 1] = var_3;

                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_16 = (((((min((arr_8 [i_0 + 1] [i_1] [i_2] [i_0 + 1]), var_11))) ? 6199739002722352222 : (0 == 0))));
                    var_17 = ((max((arr_7 [i_1 + 1]), (arr_7 [i_1 + 1]))));
                }
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] [i_2] [i_4] = ((~((min(((min(var_11, 126))), (arr_0 [i_0] [i_4]))))));

                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        var_18 = (min(var_18, (~1)));
                        var_19 = (arr_13 [i_0] [i_0] [i_0] [i_0] [i_5 + 1]);
                        arr_16 [1] [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] = 126;
                    }
                }
            }
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                var_20 = (max(12247005070987199407, (arr_14 [i_0] [i_1] [i_6])));
                var_21 += (max(((((arr_3 [i_0 + 1] [i_1 + 1]) || (arr_0 [i_0] [i_0])))), (19 * 0)));
            }
            var_22 = ((+((((max((arr_18 [i_1] [i_0]), 159))) ? (arr_5 [i_1] [i_1] [i_0]) : var_10))));
            var_23 = 12247005070987199408;
        }
        var_24 *= ((~(arr_4 [i_0 + 1])));
        var_25 = (((((0 & (var_2 * var_10)))) ? -4294967295 : (((~var_8) / 4294967295))));
        var_26 = ((~((((arr_4 [i_0 + 1]) || (arr_9 [16] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1]))))));
    }
    var_27 = (max(var_27, var_1));
    var_28 = (((var_1 % var_8) / var_5));
    #pragma endscop
}
