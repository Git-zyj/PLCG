/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((var_4 ? var_9 : ((9 ? 0 : 48287))))));
    var_12 = (min(var_12, var_5));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] &= ((17248 % (max(((var_3 ? (arr_1 [i_0]) : (arr_1 [i_0]))), ((min(48287, 41309)))))));
        var_13 = (arr_1 [i_0]);
        var_14 += var_1;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_15 = (((var_8 ? (arr_4 [i_1] [i_1]) : (arr_5 [i_1] [i_1]))));

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_10 [i_1] [i_1] [i_2] = ((~(arr_6 [i_1] [i_2])));
            var_16 = (arr_7 [i_1]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_17 -= -49152;
                        var_18 = ((((arr_9 [i_1] [i_2]) ? (arr_15 [i_1]) : (arr_8 [i_4]))));
                        var_19 = (min(var_19, (arr_14 [i_2] [i_4])));

                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            var_20 = 2471485731;
                            var_21 = -16699;
                        }
                    }
                }
            }
            var_22 = (min(var_22, ((max((max(var_9, var_4)), 640114646)))));
        }
        var_23 |= (((min((max(493696984182450970, 48283)), ((172 ? 0 : -493696984182450971)))) * ((min((arr_15 [i_1]), var_10)))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        arr_22 [i_6] = (((arr_20 [i_6]) - (arr_20 [i_6])));
        var_24 = var_0;
        var_25 = (arr_15 [i_6]);
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 10;i_9 += 1)
                {
                    {

                        for (int i_10 = 2; i_10 < 10;i_10 += 1)
                        {
                            var_26 = (arr_7 [i_9]);
                            arr_31 [i_6] [i_8] [i_8] [i_9] [i_9] = arr_14 [i_6] [i_6];
                            var_27 = (min(var_27, (((var_9 * (arr_24 [i_10 - 2]))))));
                            var_28 = (min(var_28, var_1));
                        }
                        for (int i_11 = 1; i_11 < 7;i_11 += 1)
                        {
                            arr_35 [i_6] [i_8] [i_7] [i_6] [i_7] [i_6] [i_11] = (arr_2 [i_6] [i_9 + 1]);
                            var_29 -= (var_3 < -7074691308612211452);
                            var_30 -= ((-96 ? (arr_19 [i_8 - 1]) : (arr_34 [i_6] [i_9] [i_9] [i_8 - 1] [i_6])));
                            arr_36 [i_6] [i_6] [i_8] [i_8] [i_11] = var_9;
                        }
                        var_31 += ((var_10 ? (arr_28 [i_9] [i_6] [i_6] [i_6]) : (1300280294 % 1073608811)));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 12;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            {

                for (int i_14 = 1; i_14 < 11;i_14 += 1)
                {
                    var_32 = ((!(((2 ? 1 : 1)))));
                    var_33 ^= var_7;
                }
                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    var_34 &= (max((((max(var_8, 48303)))), (arr_11 [i_12] [i_12] [i_15] [i_15])));
                    var_35 = (max(var_35, (((min(((var_5 - (arr_4 [i_12] [i_13]))), ((min(-24184, 4893)))))))));
                    arr_47 [i_13] [i_13] [i_13] = (arr_4 [i_12] [i_13]);
                    var_36 = (min(var_36, ((min((arr_44 [i_12] [i_12] [i_12]), (((-1272249570915662484 - 14362563061230822433) - (arr_13 [i_12] [i_13] [i_15] [i_15]))))))));
                    var_37 ^= ((+(((((arr_2 [i_12] [i_12]) ? 18446744073709551615 : -84)) & var_7))));
                }
                for (int i_16 = 2; i_16 < 10;i_16 += 1)
                {
                    var_38 = (min(var_38, -var_2));
                    var_39 = (min(var_39, (arr_38 [i_13] [i_13])));
                    arr_51 [i_12] [i_13] = max((((((-10064 | (arr_44 [i_12] [i_13] [i_12]))) & 65522))), -493696984182450968);
                }
                var_40 ^= 380201366;
            }
        }
    }
    #pragma endscop
}
