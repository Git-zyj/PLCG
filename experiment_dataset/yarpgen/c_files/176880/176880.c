/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_7 [i_1] [3] [i_1] = var_9;
            var_17 = (2024534497 ? (((var_6 ? var_12 : var_14))) : 192207817);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_18 = (arr_6 [i_0]);
            arr_10 [i_2] = 4102759465;
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            arr_13 [i_3] &= var_6;
            var_19 |= (arr_11 [i_0] [i_3]);
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    {
                        var_20 = (arr_17 [i_6 - 1]);
                        arr_22 [i_4] &= (arr_19 [i_0] [i_4] [i_0]);
                        var_21 ^= (!879032542);

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            arr_25 [i_0] [0] [i_4] [i_0] [i_6] [5] [i_5] = (arr_12 [i_0] [4] [i_5]);
                            var_22 = (max(var_22, (((((((arr_18 [i_4] [i_5] [i_5] [i_6]) ? var_3 : (arr_6 [i_0])))) ? (arr_17 [i_6 - 1]) : ((2532060606 ? -56 : (arr_6 [i_0]))))))));
                            var_23 = (min(var_23, 120));
                            var_24 = 4102759499;
                            arr_26 [i_5] = var_12;
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
    {
        arr_29 [i_8] = 4294967295;
        var_25 ^= (max((arr_11 [i_8] [i_8]), (((var_0 ? ((min(var_9, (arr_16 [i_8] [i_8] [i_8] [i_8])))) : 2115076515)))));
        var_26 = ((~(((~var_6) ? (arr_3 [i_8]) : (arr_23 [8] [i_8] [0] [i_8])))));
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                {
                    var_27 = (max(var_27, var_1));
                    var_28 |= ((~(((arr_30 [i_9]) ? var_5 : ((var_3 ? (arr_19 [i_11] [i_10] [i_11]) : var_4))))));
                    arr_39 [i_10] [i_10] [0] [i_9] = var_8;
                    arr_40 [i_9] [i_10] [i_11] [i_9] |= var_4;
                    var_29 = -241512671;
                }
            }
        }
        var_30 = (max(var_30, ((((((((max(var_1, (arr_19 [i_9] [i_9] [i_9])))) ? (((arr_1 [i_9]) ? var_5 : (arr_17 [i_9]))) : var_11))) ? (~120) : 67961352)))));
        var_31 = var_8;
        arr_41 [i_9] [i_9] = (((arr_20 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) ? (arr_17 [i_9]) : (((((max((arr_3 [i_9]), (arr_15 [i_9])))) ? ((~(arr_36 [i_9] [i_9] [i_9] [i_9]))) : ((max((arr_24 [0] [i_9] [i_9] [i_9] [i_9]), var_5))))))));
        arr_42 [3] |= var_1;
    }
    var_32 |= var_3;
    var_33 ^= var_14;
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        for (int i_13 = 3; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 23;i_14 += 1)
            {
                {
                    var_34 |= ((((min(4102759465, 517219345))) ? var_11 : var_13));
                    var_35 &= (min(((((!(arr_43 [20]))) ? var_16 : (~var_16))), -67961353));
                    arr_50 [i_12] [i_12] [i_14] [i_12] = (~var_11);
                    var_36 &= ((((((((var_5 ? (arr_44 [6]) : 3372322128))) ? (arr_44 [22]) : (!var_3)))) ? var_0 : (arr_49 [i_12] [i_14])));
                }
            }
        }
    }
    var_37 = (max(var_37, var_4));
    #pragma endscop
}
