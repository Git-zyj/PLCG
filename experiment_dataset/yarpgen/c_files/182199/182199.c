/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (1663751797 <= var_7);
    var_21 = (((((max(1, 2631215501)) ? var_18 : 16))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [11] = (((((arr_0 [i_0] [18]) & (arr_0 [i_0] [i_0]))) & 4083199606));
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);

        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            var_22 += (((arr_0 [4] [i_1]) & (((((arr_1 [9] [i_1]) || -291252697))))));
            var_23 = ((((((arr_5 [i_0] [i_1 + 1]) ? -1 : (arr_5 [i_0] [i_1])))) ? (arr_4 [i_1]) : (arr_1 [i_0] [i_1 + 1])));
            arr_6 [i_0] [i_1] [1] = ((-((2631215499 ? 31308 : 1218210789))));
            arr_7 [8] = ((2684249801 ? -1 : -14742));
            arr_8 [i_0] [i_1] = (~4119475758);
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_12 [4] = 0;

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_24 = (((arr_10 [i_0] [0] [i_0]) ? (arr_5 [i_3] [i_0]) : 16));

                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    arr_19 [i_0] [i_2] [i_3] [i_0] [i_0] = (arr_1 [i_2] [i_3]);
                    arr_20 [i_0] [i_2] [i_0] [i_4] &= (arr_16 [i_0]);
                    arr_21 [i_0] [14] [12] [23] = (((arr_11 [i_4 + 1]) ? 522240 : (arr_18 [i_4 - 1] [i_4 + 1] [i_2] [i_2] [0])));
                    arr_22 [i_4 + 2] [i_0] [i_2] [i_0] [i_0] = ((((((arr_5 [i_0] [16]) ? 1663751828 : 211767682))) || (~2631215487)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_25 [i_5] [0] |= arr_16 [1];
        arr_26 [i_5] = (((arr_14 [i_5] [i_5]) ? 98 : ((~(arr_23 [i_5] [i_5])))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_25 = (~21704);
        arr_30 [i_6] [i_6] = ((253 ? 1 : ((-(arr_13 [i_6])))));
    }
    #pragma endscop
}
