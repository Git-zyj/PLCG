/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 0;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_11 = (((arr_1 [i_0 - 1]) ? (((arr_1 [i_0 + 1]) * (arr_1 [i_0 - 1]))) : (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])))));
        var_12 = ((max((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1]))) < ((3672155711 ? (arr_0 [i_0]) : (arr_1 [i_0 - 1]))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_13 = (min((--2), (min(-622811584, var_7))));

        /* vectorizable */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_14 = 12276111755356920880;

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_15 = (min(var_15, 27));

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_16 = (min(var_16, ((((~7727687874103432460) / (arr_5 [i_3] [i_1 - 1] [i_3]))))));
                    arr_13 [i_1] [i_2] = (((((237 ? 3892778752 : (arr_4 [i_4] [i_2])))) + var_8));
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {

                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        var_17 = -1393750389391795416;
                        var_18 = 107;
                        var_19 ^= arr_16 [i_1] [i_2] [i_3] [i_5];
                    }
                    var_20 ^= -18105611665916181788;
                }
            }

            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                var_21 = (min(var_21, (~var_2)));
                var_22 = (min(var_22, (((~(arr_2 [i_1 - 1]))))));
                var_23 = (min(var_23, var_3));
            }
            for (int i_8 = 2; i_8 < 13;i_8 += 1)
            {
                arr_27 [i_2] [i_2 - 2] [i_1] [i_2] = (arr_12 [i_2 - 2] [i_2] [i_2] [i_8] [i_2]);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_24 = (min(var_24, (arr_6 [i_1 - 1] [i_1 - 1] [i_1])));
                            var_25 = (max(var_25, (((-91 ? 98 : var_9)))));
                        }
                    }
                }
                var_26 = (((((arr_15 [i_8 - 1] [i_2 - 2] [i_1 - 1] [i_1 - 1]) + 9223372036854775807)) << (((((arr_32 [i_1] [i_1] [0] [i_1 - 1] [i_2 - 2] [i_8 + 1]) + 2391613435074402618)) - 48))));
            }
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                var_27 = (max(var_27, (((-5 == (arr_26 [i_1 - 1] [1] [2] [i_2]))))));
                arr_36 [8] [i_2] = (((arr_0 [i_2]) ? (arr_0 [i_2]) : (arr_22 [i_1] [i_2 - 2] [8])));
                var_28 ^= (((arr_4 [i_1 - 1] [i_2 + 1]) && 32));
                var_29 = (arr_14 [2] [i_2] [i_2 - 1] [i_11]);
            }
            var_30 = 6794528773055766728;
        }
    }
    for (int i_12 = 0; i_12 < 13;i_12 += 1)
    {
        arr_39 [i_12] = (((max((arr_33 [i_12] [i_12] [i_12] [i_12]), (arr_33 [i_12] [i_12] [i_12] [i_12]))) / ((-(arr_33 [i_12] [i_12] [i_12] [i_12])))));
        var_31 = (max(var_31, ((max((min(var_7, 229)), (((11579054241045444528 / 83) | -var_1)))))));
    }
    #pragma endscop
}
