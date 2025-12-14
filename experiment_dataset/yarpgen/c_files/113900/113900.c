/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_16 = var_14;
        arr_2 [14] [14] &= ((((((min(1, 5582))) ? 1 : var_6)) >= 32759));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_1] = 1;
            arr_6 [11] [i_1] [i_0] = (max((min(1, 16412)), (arr_1 [i_0 + 2])));
            var_17 = (max(1, ((min((!var_1), var_9)))));
            var_18 = (max((var_12 | 15), var_12));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_19 = 135;
            var_20 *= ((-(arr_0 [i_0 + 2])));

            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_21 = var_14;
                    var_22 ^= ((((((((arr_14 [i_4] [0] [i_2] [i_4]) > var_11)) ? (arr_7 [i_4]) : var_7))) ? (arr_9 [i_3 + 2] [i_3] [i_3 + 2]) : (max((~-32759), ((65535 ? var_6 : (arr_14 [i_0] [i_0] [i_0] [i_4])))))));
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_23 = 32747;
                    arr_18 [i_5] [12] [i_2] [12] [i_0 - 1] |= (((arr_0 [i_0 + 1]) ? var_6 : (arr_12 [i_3 + 1] [i_3 - 1] [i_3 - 1] [12])));
                    var_24 = (max(var_2, (((arr_4 [i_5]) ? 32755 : 32760))));
                }
                var_25 = (min(var_25, (((65533 <= ((min(1, (21283 && var_7)))))))));
            }
            var_26 -= (min(((((min(var_6, var_1))) - (min(var_2, var_12)))), 65526));
        }
    }
    for (int i_6 = 1; i_6 < 11;i_6 += 1)
    {
        var_27 = (min(var_27, (((!(((max(762518524, var_2)))))))));
        arr_21 [i_6] [3] = 1;
        arr_22 [i_6 - 1] = ((12895 ? ((((arr_9 [i_6 - 1] [i_6 + 1] [i_6 - 1]) <= 0))) : (((15872 ? -20138 : (arr_3 [5] [5] [5]))))));
        var_28 = (min(var_28, ((max(var_11, (min((!64), 0)))))));
    }
    for (int i_7 = 4; i_7 < 18;i_7 += 1)
    {
        arr_26 [i_7 - 3] &= ((-2441080160747850420 ? 12897 : 762518508));
        arr_27 [16] = ((((max((~var_13), (22 >= 2)))) ? (!-1722639164) : var_0));
        var_29 -= ((max(var_8, 127)));
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        var_30 = var_0;
        arr_31 [i_8] = var_10;
        arr_32 [i_8] = (max((65533 >= 10), (((7 && var_2) ? ((-762518525 ? 762518546 : var_5)) : (-7965737683948631719 >= 32512)))));
    }
    #pragma endscop
}
