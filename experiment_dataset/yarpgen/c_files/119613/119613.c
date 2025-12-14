/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((16180378665598051399 ? ((var_12 ? 91 : var_8)) : var_1))) ? (255 % 1) : (((max(778706180, 4736)) & (0 != -23557))));
    var_16 = (var_0 == var_3);
    var_17 = (((((max(var_4, 23553)))) ? var_12 : ((8191 ? (var_10 - var_10) : var_13))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_18 += ((-(arr_6 [i_1 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])));
                arr_8 [i_0] [i_2] = (((arr_2 [i_0 - 1] [i_2]) && (arr_2 [i_1] [i_0])));
                var_19 = (max(var_19, 8188));
            }

            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                var_20 = (-(((~(arr_9 [i_3])))));
                var_21 = (min(var_21, (arr_3 [i_0 + 1] [i_1 + 2])));
            }
            var_22 ^= (arr_3 [i_0] [i_1]);
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                var_23 = (((arr_5 [i_0 - 1] [i_0 + 1] [i_0 + 1]) ? (arr_5 [i_0 - 1] [i_0 + 1] [i_0 + 1]) : (arr_5 [i_0 - 1] [i_0 + 1] [i_0 + 1])));
                arr_18 [i_4] = ((0 >> (2236503796 - 2236503765)));
                var_24 ^= var_6;
            }
            var_25 += 64191;
            var_26 = (arr_7 [i_0] [i_0]);
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    {
                        arr_28 [8] [i_6] [i_6] = (~8188);

                        for (int i_9 = 2; i_9 < 8;i_9 += 1)
                        {
                            arr_31 [i_6] [i_6] [i_7] [i_0] [i_6] = 8191;
                            arr_32 [i_0] [i_0] [i_6] [i_0] = var_14;
                        }
                        for (int i_10 = 3; i_10 < 8;i_10 += 1)
                        {
                            arr_35 [i_6] [i_6] [i_7] [i_10] = (-23558 & 65535);
                            arr_36 [i_6] [i_8] [i_7] [i_6] [i_6] = (i_6 % 2 == 0) ? (((var_3 >> (((arr_9 [i_6]) - 203))))) : (((var_3 >> (((((arr_9 [i_6]) - 203)) + 190)))));
                            arr_37 [i_0] [i_6] [i_6] [i_8] [i_6] = (6385 != 4540854475597477948);
                            arr_38 [i_6] = (((arr_7 [i_0 - 1] [i_0]) + (arr_33 [i_0] [i_0 + 1] [i_8] [i_0 + 1] [i_8 + 1] [i_6] [i_8 - 1])));
                        }
                        arr_39 [i_6] [i_6] = ((23557 ? -8198 : 30425));
                    }
                }
            }
            arr_40 [i_6] [i_6] = (arr_33 [i_0 + 1] [i_6] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_6] [i_0 + 1]);
        }
        arr_41 [i_0] [i_0] |= (max(((13905889598112073668 ? (max(35111, 2676860759)) : (arr_24 [i_0] [i_0] [i_0] [i_0]))), 83));
        var_27 += -8188;
        var_28 = (min((((arr_7 [i_0 + 1] [i_0 + 1]) / (min(var_12, -8198)))), var_0));
    }
    for (int i_11 = 0; i_11 < 16;i_11 += 1)
    {
        var_29 = (max(var_29, (((((arr_43 [i_11] [i_11]) ? 14009595115210321857 : (arr_43 [i_11] [i_11])))))));
        var_30 = (max(var_30, 0));
        var_31 = (max(var_31, ((((!1) ? 14027013284305643900 : (!-8202))))));
        arr_44 [i_11] = (arr_42 [i_11] [i_11]);
        arr_45 [i_11] = (((8188 + 0) && ((((((arr_43 [i_11] [i_11]) && var_9)) ? ((2047 ? 13905889598112073668 : 3902820737)) : (3894147850 || -1591855280))))));
    }
    #pragma endscop
}
