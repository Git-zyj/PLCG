/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = ((var_3 % ((var_7 ? (arr_1 [i_0] [i_0]) : var_0))));
        var_13 = (min(var_13, 0));
        var_14 -= ((((var_6 * (arr_1 [i_0] [i_0]))) | (max(-25761, (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] = (((0 >= -6927) == ((-19 ? var_2 : 7409421649277467233))));
        var_15 = (!1);

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_9 [i_1] [i_1] = (((((var_7 ? var_11 : var_5))) ? (((var_7 ? var_10 : var_10))) : var_0));
            var_16 = ((((((arr_7 [i_1] [5]) <= var_2))) * (!3020457936579227310)));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_17 = (var_0 || 7409421649277467241);

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_15 [i_4] [i_4] [i_4] [i_4] = -4294967295;
                var_18 = (max(var_18, (((((var_4 ? var_2 : var_4)) > var_6)))));

                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        arr_20 [i_3] = ((1 | (((arr_6 [i_5 - 1] [i_3] [i_4]) | 5653182385896805346))));
                        arr_21 [i_1] [i_3] [i_4] [i_5 - 1] [i_5 - 1] [i_3] [i_3] &= ((15 && (arr_14 [i_5 + 1] [i_5 + 1] [i_3] [i_3])));
                        arr_22 [12] [i_3] [i_4] [i_3] = -7409421649277467241;
                        arr_23 [i_1] [12] [i_1] [i_3] [i_1] = (!1);
                    }
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        var_19 = (arr_24 [i_5 + 1] [i_7] [i_5 + 1] [i_5 + 1] [i_7 + 2] [i_5 + 1] [i_7]);
                        var_20 -= (-67 + 5);
                    }

                    for (int i_8 = 4; i_8 < 12;i_8 += 1)
                    {
                        var_21 += (arr_14 [8] [i_3] [4] [i_1]);
                        var_22 = ((((((arr_12 [i_8] [i_5]) | 6915))) ? (((((arr_16 [0] [0] [i_4] [0] [i_8] [i_4]) <= 57937)))) : 2955459945));
                        arr_32 [i_1] [i_1] [1] [i_4] [7] [7] [i_8 + 1] = (var_0 <= var_2);
                    }
                    arr_33 [i_1] [i_1] [i_1] [i_1] = (((((var_11 + 2147483647) >> (((arr_1 [i_3] [i_3]) - 9414)))) << (((!(arr_19 [i_1] [i_1] [i_4] [i_1] [i_3] [i_5 + 1] [i_1]))))));
                    var_23 -= ((var_4 * (arr_14 [i_5 - 1] [12] [12] [i_5 + 1])));
                }
                for (int i_9 = 3; i_9 < 11;i_9 += 1)
                {

                    for (int i_10 = 2; i_10 < 11;i_10 += 1)
                    {
                        var_24 = (min(var_24, ((((arr_10 [i_4]) ? var_0 : 7409421649277467259)))));
                        arr_40 [i_1] [i_9] = ((-(arr_10 [i_1])));
                    }
                    for (int i_11 = 2; i_11 < 12;i_11 += 1)
                    {
                        var_25 = (min(var_25, (((-2277 <= ((var_7 ? var_5 : var_5)))))));
                        var_26 = (min(var_26, (arr_16 [i_1] [i_3] [i_1] [i_3] [i_11] [i_11])));
                    }
                    var_27 = (min(var_27, var_5));
                }
            }
            for (int i_12 = 3; i_12 < 12;i_12 += 1)
            {
                var_28 = (~4088085081);
                var_29 = (var_6 ^ var_7);
            }
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                var_30 = var_9;
                var_31 *= var_5;
                arr_49 [i_1] [i_1] [i_1] [i_13] = (1 != (arr_16 [i_1] [i_1] [i_1] [9] [i_13] [i_13]));
                arr_50 [i_13] [i_13] [i_3] [i_1] = ((52184 == (var_2 < var_2)));
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 12;i_14 += 1)
    {
        arr_55 [i_14] = (arr_39 [i_14 + 1] [i_14] [i_14 - 1] [i_14 + 1] [i_14]);
        arr_56 [i_14] = var_1;
        /* LoopNest 3 */
        for (int i_15 = 3; i_15 < 12;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                for (int i_17 = 3; i_17 < 10;i_17 += 1)
                {
                    {
                        var_32 = (((((var_11 ? var_1 : (arr_12 [i_14] [i_14])))) ? 1339507351 : ((((arr_51 [i_14]) ? var_6 : var_5)))));
                        var_33 += ((-(arr_18 [i_14] [i_14 + 1] [i_14] [i_17 + 3] [i_15])));
                    }
                }
            }
        }
        var_34 = ((((((arr_51 [i_14]) ^ 2429186348057681204))) ? (~206882214) : (var_6 ^ var_4)));
    }
    var_35 = var_4;
    var_36 *= (max(((max(((1008 ? var_11 : 54416)), ((var_8 ? var_8 : -17982))))), (52184 <= var_3)));
    #pragma endscop
}
