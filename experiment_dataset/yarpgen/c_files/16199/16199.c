/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 1225764565;
        arr_4 [i_0] [i_0] &= (var_10 ? (((~var_10) ? (~var_11) : 3069202749)) : (((max(1, 23577)))));
        arr_5 [i_0] = ((-((var_9 ? -1160827423 : (arr_0 [i_0])))));
    }

    /* vectorizable */
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_17 = (arr_6 [i_1 + 1]);
            arr_10 [i_2] [i_1] [i_2] = ((arr_9 [i_2] [i_1] [i_1]) ? (arr_7 [i_1]) : ((var_5 ? -1888521439 : 28505)));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            arr_14 [i_3] = ((~(((arr_7 [i_1]) ? var_9 : var_15))));
            arr_15 [i_1] [i_3] = ((~(arr_7 [i_1])));
            arr_16 [i_1 - 1] = (!1);
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_20 [i_4] = (+-3069202749);
            var_18 = ((18698 ? var_16 : 5946168658482549552));
            arr_21 [i_4] [i_4] = (((arr_0 [i_4]) ? (arr_6 [i_4]) : -1160827423));
            var_19 = (min(var_19, -var_14));
            arr_22 [i_1] [i_4] = (arr_11 [i_1 - 2] [i_1 - 2]);
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_25 [i_5] = ((-(arr_2 [i_1 - 2])));
            arr_26 [i_1] = (!-4803985803439149230);
        }
        arr_27 [i_1] [i_1] = 78267044;
        arr_28 [i_1] = ((-(-28051 - var_1)));
        arr_29 [i_1] = ((0 ? -112 : 25357));
        arr_30 [i_1] = var_13;
    }

    for (int i_6 = 1; i_6 < 11;i_6 += 1)
    {
        var_20 *= (arr_31 [i_6]);
        arr_33 [i_6] [i_6] = (max((~var_1), var_15));
    }
    var_21 = ((-((var_6 ? 1 : (-23245 != 3069202730)))));
    #pragma endscop
}
