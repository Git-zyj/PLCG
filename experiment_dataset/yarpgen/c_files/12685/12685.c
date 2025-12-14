/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_1 * (var_1 >> var_4));

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 8;i_3 += 1)
                {
                    {
                        var_15 = ((arr_3 [i_1] [i_1] [i_1]) ? (((arr_3 [i_0 + 3] [i_1] [i_1]) ? (arr_3 [i_0] [3] [i_1]) : (arr_3 [i_0 - 4] [9] [i_1]))) : -807862000);
                        arr_9 [i_1] [i_1] [i_2] [i_3] = arr_7 [i_1] [i_1] [i_2] [i_3];
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_5] [i_6] |= var_13;
                        var_16 = 3043965911;
                        var_17 = 4;
                    }
                    var_18 = var_7;
                    arr_18 [6] [i_5] [i_5] = ((((((arr_0 [i_5]) ? var_0 : 1))) >> (((!((min(49152, 3043965900))))))));
                }
            }
        }
        var_19 = var_3;
        var_20 = ((+(max((32760 | 2032), (arr_12 [i_0 - 2] [i_0 - 4])))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        var_21 = var_9;
        arr_23 [i_7] = ((7 ? 5181 : 4294967295));
        var_22 = ((~((((arr_21 [i_7] [i_7]) > var_12)))));
        arr_24 [i_7] |= (~-2075842854);
        var_23 = ((((var_8 ? var_2 : 7)) % var_7));
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        var_24 = (((!1) && (var_2 || 52480)));

        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {

            for (int i_10 = 2; i_10 < 19;i_10 += 1)
            {
                var_25 = (arr_27 [i_8]);
                arr_32 [i_8] [i_8] [i_8] [i_10 - 2] = ((((((-(arr_22 [i_10 - 2] [i_8]))) + 2147483647)) >> var_8));
            }
            var_26 = (((60 && 1) ? (max(2075842859, -7)) : 3));
            var_27 = ((!((max(var_12, (arr_22 [i_8] [i_9]))))));
        }
        var_28 = ((var_12 ^ (max((arr_22 [i_8] [i_8]), (arr_22 [i_8] [i_8])))));
    }
    var_29 = ((max(9353464805539449651, (var_12 || 27639))));
    var_30 = 1;
    #pragma endscop
}
