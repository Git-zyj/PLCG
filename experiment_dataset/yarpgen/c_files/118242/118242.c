/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_9 ? 20467 : 2375083983);
    var_17 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = (((arr_3 [i_0] [i_0]) * (((arr_2 [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_0])))));
        arr_4 [i_0] = (((arr_3 [i_0] [i_0]) ? 5 : (arr_3 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_15 [i_3] [i_2] [i_1] [i_0] [i_0] [i_0] = ((~(arr_9 [i_0] [i_1] [i_2 + 1] [i_3])));
                        arr_16 [i_0] [i_2] = (arr_10 [i_1] [i_1] [i_3]);
                        var_19 = ((8191 ? -8186 : -491990510445230845));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        arr_21 [i_4] = (min(((((arr_8 [i_4] [i_4] [i_4]) | (((arr_9 [i_4] [i_4] [i_4] [i_4]) << (((arr_17 [i_4]) - 2124358863))))))), ((~(min(-491990510445230845, (arr_14 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))))));
        var_20 += (max(((((min(29, (arr_11 [i_4] [i_4] [i_4] [i_4])))) ? 11 : 8188)), (((~((~(arr_5 [i_4]))))))));
        var_21 ^= ((-((min(41, 1)))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_22 = (arr_24 [i_5]);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        var_23 |= (arr_2 [i_6]);
                        arr_30 [i_7] [i_6] [i_5] [i_4] = (((arr_12 [i_4] [i_5] [i_4] [i_6] [i_6] [i_7]) ? var_7 : ((((arr_13 [i_7] [i_4] [i_4] [i_4]) <= (arr_19 [i_5] [i_5]))))));
                    }
                }
            }
            arr_31 [i_4] = (!1261466100);
            var_24 = (((arr_27 [i_4] [i_5] [i_5]) ? (arr_27 [i_5] [i_5] [i_4]) : (arr_27 [i_4] [i_5] [i_5])));
        }
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
    {
        var_25 = (arr_32 [i_8] [i_8]);

        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            var_26 = (arr_35 [i_8] [i_8]);
            arr_39 [i_8] [i_8] = ((3160210631 ? 0 : 3584));
            var_27 = ((-((max((min(0, (arr_35 [i_8] [i_9]))), (arr_35 [i_8] [i_9]))))));
        }
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
    {
        arr_44 [i_10] [i_10] = arr_40 [i_10];
        var_28 = ((-((((-(arr_35 [i_10] [i_10]))) % ((~(arr_37 [i_10] [i_10])))))));
    }
    #pragma endscop
}
