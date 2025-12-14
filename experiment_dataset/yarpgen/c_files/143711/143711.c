/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_7 [i_1] [3] = ((((3072 ? (arr_3 [i_0]) : (arr_4 [i_1] [i_0]))) / 68));
            var_11 = -3061;
            var_12 = (min(var_12, ((((arr_5 [i_0]) && -1777373399)))));
            var_13 *= ((!(((3086 + (arr_1 [i_0]))))));
        }
        var_14 = (-3049 * 3);
        arr_8 [i_0] [i_0] = 1777373391;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_12 [i_2] = (((arr_9 [i_2]) ? var_2 : (arr_9 [i_2])));
        var_15 = (((arr_10 [i_2] [i_2]) / var_8));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            arr_19 [24] [i_4] [i_4] = ((-(((arr_13 [17]) | (arr_9 [i_3])))));
            var_16 = var_1;
            arr_20 [i_4] = (arr_14 [i_3]);
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {

            for (int i_6 = 2; i_6 < 24;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_17 = 25846;
                            arr_30 [i_3] [i_5] [i_6] [8] = ((+(((arr_25 [i_3] [12] [i_3]) ? var_1 : -3068))));
                            var_18 = (((arr_11 [i_5] [16]) / ((-1777373408 ^ (arr_15 [i_3] [i_5])))));
                        }
                    }
                }
                var_19 = (max(var_19, (((~(arr_25 [i_6 - 1] [i_5] [i_3]))))));
            }
            for (int i_9 = 1; i_9 < 24;i_9 += 1)
            {
                var_20 = (arr_18 [i_5] [i_9 + 1]);
                var_21 |= (arr_16 [i_9 - 1] [i_9 + 1] [0]);

                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    arr_37 [5] [i_5] = ((-3065 % (arr_27 [1] [i_9 - 1] [0] [i_9 - 1] [i_10] [i_9 - 1])));

                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        var_22 = ((~(arr_39 [1] [i_9 - 1] [i_9] [14])));
                        arr_40 [i_3] [i_3] [i_3] [i_3] [12] = (((arr_9 [i_9 + 1]) ? (arr_9 [i_11]) : 1));
                    }
                    for (int i_12 = 2; i_12 < 23;i_12 += 1)
                    {
                        var_23 = ((var_7 >= (arr_42 [i_9 + 1] [1] [i_12 - 2] [i_12 - 1] [19] [i_12 - 1])));
                        var_24 = ((1 <= ((0 ? (arr_14 [i_12]) : (arr_22 [i_3] [i_3])))));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_25 = 4294967295;
                        var_26 = (arr_27 [i_9 + 1] [i_9] [8] [12] [i_10] [i_9 + 1]);
                        arr_46 [i_3] [i_5] [i_3] [14] [i_9] [i_5] [18] = (((((1 ? -1143743513211924228 : 8))) - (2 % var_10)));
                    }
                    var_27 = (arr_13 [21]);
                }
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    var_28 = (~-3069);
                    var_29 = 164;
                }
                arr_51 [i_3] [i_5] [i_5] [i_9] = (arr_15 [i_9] [i_9 - 1]);
            }
            var_30 = var_1;
            var_31 = (arr_50 [i_3] [i_5] [i_3] [17] [i_3] [i_5]);
            var_32 = ((3074 ? 3072 : (arr_32 [i_5] [i_3] [i_3])));
        }
        var_33 = -4294967267;
    }
    var_34 &= var_0;
    var_35 = var_5;
    var_36 = (max(var_4, (2 ^ 3101)));
    #pragma endscop
}
