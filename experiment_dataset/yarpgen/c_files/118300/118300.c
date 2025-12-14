/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_13 ^= (((arr_0 [i_0 + 3]) ? (arr_0 [i_0 - 3]) : (arr_0 [i_0 + 3])));
        var_14 = (((arr_0 [i_0 + 2]) ? 32767 : var_11));
        arr_2 [i_0] = (((arr_1 [i_0] [i_0 - 2]) ? (arr_1 [i_0] [i_0 + 2]) : var_8));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        var_15 = (max(var_15, ((((arr_0 [i_1 + 3]) ? var_1 : var_6)))));
        var_16 = (min(var_16, ((((arr_3 [i_1 + 1] [i_1]) ? (arr_3 [i_1 - 2] [i_1]) : var_7)))));
    }

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_17 = (((arr_8 [i_2 - 1]) ? ((((18446744073709551615 ? 2147483647 : 10028)))) : (((arr_8 [i_2 - 1]) ? (((arr_8 [i_2]) ? -50 : (arr_6 [i_2] [i_2]))) : (var_1 + var_8)))));
        var_18 = (max((var_12 >> 0), var_0));
        arr_9 [i_2] = ((((max((arr_7 [i_2]), var_3))) ? (((~65523) ? -1 : -98)) : (((-((max(1, -78))))))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_20 [i_3] [i_5] [i_3] = ((((max(-var_9, ((((arr_13 [i_3]) ? (arr_8 [i_3]) : (arr_19 [i_5]))))))) ? (arr_0 [i_6]) : (((((314931650359520317 ? var_2 : 2147483647)))))));
                        var_19 ^= ((1213448366 ? ((((!((((var_3 + 2147483647) >> (var_5 - 14273)))))))) : 0));
                        arr_21 [i_3] [i_3] [i_3] [i_3] = arr_1 [i_3] [i_3];
                        arr_22 [i_3] [i_4] [i_5] [i_3] = 3028616584;
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            arr_25 [i_3] = -25;
            var_20 = ((var_0 + (((arr_23 [i_3] [i_3] [i_3]) ? var_2 : (arr_5 [i_3])))));

            for (int i_8 = 3; i_8 < 9;i_8 += 1)
            {
                arr_30 [i_3] [i_3] [i_3] = ((~(((((arr_12 [i_3]) ? (arr_6 [i_3] [i_3]) : 827521469))))));
                arr_31 [10] [i_7] &= (min((((((~(arr_4 [i_3])))) ? 6648802459393708066 : 3)), 1));
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                var_21 = ((71 ? (~1) : 1290158586));
                var_22 &= (((arr_24 [i_9]) ? -6862734892331326868 : 255));
            }
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_38 [i_3] [4] &= ((((max(((var_7 ? (arr_15 [i_3]) : -47)), -1))) ? ((((!(arr_8 [i_3]))))) : 638174510));
            arr_39 [i_3] [i_10] = (((min(3501503879, 1)) / (((max((arr_23 [i_3] [i_10] [i_3]), (arr_23 [i_3] [1] [i_10])))))));
            var_23 ^= 6;
        }
        arr_40 [i_3] = (((arr_33 [i_3] [i_3] [i_3] [i_3]) ? (min(223585241, (((!(arr_29 [i_3] [i_3] [i_3])))))) : (((max(var_12, (arr_13 [i_3]))) & ((-(arr_6 [i_3] [i_3])))))));
    }
    var_24 = var_5;
    #pragma endscop
}
