/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (~var_15);
                    var_17 = ((((max(var_10, (arr_4 [15] [i_0 - 2] [i_0])))) ? (arr_1 [i_0 - 3]) : (((((arr_1 [i_0 - 1]) > (arr_4 [i_0] [i_0 - 2] [i_0])))))));
                    var_18 &= 2485793842;
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        var_19 |= (max((((arr_5 [i_3 + 1]) - -7448566275529998154)), (((max((arr_2 [i_3 + 2]), 2492596526))))));
        arr_10 [i_3] = -0;
        arr_11 [i_3] [i_3] = (((arr_6 [i_3 + 1] [i_3 + 2]) < (arr_4 [14] [i_3 + 2] [i_3])));
        /* LoopNest 3 */
        for (int i_4 = 4; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    {
                        var_20 = (min(var_20, (arr_20 [0] [6] [i_5])));
                        var_21 = ((((-(arr_5 [1])))) ? (arr_4 [i_4 - 1] [i_5] [i_3]) : ((((((max(120, var_3))) > (!var_2))))));
                        var_22 |= (max(-0, -var_3));
                    }
                }
            }
        }
        var_23 = (max((min(1, (arr_1 [i_3 + 3]))), ((((arr_12 [i_3] [i_3 + 2]) ? 1 : 3968543302)))));
    }
    var_24 = var_6;

    /* vectorizable */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_25 |= (~60592);
        var_26 = 14361737842001060455;
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_29 [i_8] [1] |= 4294967295;
            arr_30 [0] [0] [0] = ((-(arr_18 [i_8] [i_8] [i_8] [i_8])));
            var_27 = var_3;
            var_28 -= ((-121 ? 1 : 4085006231708491161));
        }
        for (int i_10 = 1; i_10 < 12;i_10 += 1)
        {
            arr_33 [i_8] [i_8] [i_10] = ((~(arr_21 [i_8])));
            var_29 = ((48 >> (14361737842001060424 - 14361737842001060405)));
        }
        var_30 = (~var_14);
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        arr_38 [i_11] [i_11] = (((-(arr_34 [i_11]))));
        var_31 = ((((((arr_4 [i_11] [i_11] [i_11]) + 2147483647))) & (max((((-(arr_1 [i_11])))), 14361737842001060474))));
    }
    for (int i_12 = 2; i_12 < 24;i_12 += 1)
    {
        var_32 = (((((max((arr_40 [i_12]), var_0)))) - ((-(var_3 / 255)))));

        for (int i_13 = 3; i_13 < 23;i_13 += 1)
        {
            var_33 = (min(((((arr_40 [i_12]) & ((120 % (arr_40 [i_12])))))), ((-(((arr_40 [i_12]) / 4085006231708491141))))));
            var_34 ^= ((((4085006231708491142 || (arr_39 [i_12] [i_12 - 2])))));
            var_35 = 1;
        }
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            var_36 = arr_46 [20] [i_14];
            arr_47 [i_14] [i_12 - 1] &= 6;
            var_37 = (max((((arr_45 [i_12 - 2] [i_12 - 2]) ? (arr_45 [i_12 - 2] [i_12 - 1]) : (arr_45 [i_12 - 1] [i_12 - 2]))), (arr_45 [i_12 + 1] [i_12 + 1])));
        }
        var_38 -= 1;
        var_39 *= ((!((max((arr_44 [i_12] [6]), (arr_41 [i_12 - 1] [1] [i_12 - 1]))))));
        var_40 += ((!((((~var_6) ? (var_11 | 117) : (max((arr_46 [i_12] [i_12 + 1]), (arr_40 [18]))))))));
    }
    /* LoopNest 3 */
    for (int i_15 = 2; i_15 < 19;i_15 += 1)
    {
        for (int i_16 = 3; i_16 < 20;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {
                {

                    for (int i_18 = 0; i_18 < 22;i_18 += 1)
                    {
                        var_41 = (((((((var_6 ? (arr_44 [i_17] [i_16]) : 14361737842001060478)) & ((max(var_15, (arr_41 [1] [i_16] [1]))))))) ? (arr_54 [13] [13] [i_17] [i_18]) : (arr_41 [i_15] [i_16] [i_18])));
                        var_42 = ((!((((var_2 + var_12) / (arr_50 [i_16 - 1]))))));
                    }
                    var_43 = arr_41 [i_15] [i_16] [i_15 + 3];
                }
            }
        }
    }
    #pragma endscop
}
