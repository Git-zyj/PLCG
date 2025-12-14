/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 16082998403154324240;
    var_21 ^= (~var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_22 = ((~((((((arr_5 [9]) ^ 106))) ? 246 : ((~(arr_1 [i_1 - 1])))))));
                var_23 ^= (arr_3 [i_1 + 3] [i_1 + 3]);
                arr_6 [i_0] [i_0] = (min((min((arr_3 [i_1 + 3] [i_1 + 1]), (arr_3 [i_1 - 2] [i_1 - 1]))), ((((arr_3 [i_1 + 1] [i_1 + 3]) >= (arr_3 [i_1 - 2] [i_1 + 1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_24 -= arr_11 [i_2] [i_3 + 3] [i_4];
                    var_25 = 25;
                    var_26 = (arr_13 [i_3] [i_3 + 1]);

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        var_27 = (min(var_27, (arr_15 [i_2] [i_3 - 1] [i_2] [i_4] [i_5] [i_3 + 3])));
                        var_28 = (~(((var_10 >= (arr_10 [7])))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        var_29 = (((arr_14 [i_2] [i_3 + 2]) ? -1266880437 : 8388607));
                        arr_20 [i_2] [i_3] [i_2] [i_4] [i_3] = (arr_17 [i_4] [i_4] [i_6] [i_3]);
                        var_30 = 16082998403154324247;
                    }
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_31 = min((arr_9 [i_2] [i_3 - 3] [1]), (max((arr_16 [i_2] [4] [i_3] [9] [i_2]), -1907174664)));
                    var_32 = ((((((arr_17 [i_2] [i_2] [10] [i_7]) ? (((arr_12 [i_2] [i_3] [i_3] [i_7]) ? var_4 : (arr_16 [i_2] [i_2] [i_2] [i_2] [6]))) : (((-1 ? (arr_17 [i_3] [i_3] [i_3] [i_7]) : (arr_18 [i_2] [i_2] [i_3 + 3] [i_7] [i_7]))))))) ? (min((arr_7 [i_2]), var_13)) : 2363745670555227382));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_33 ^= (arr_24 [i_8] [i_7] [i_3 + 1] [i_2]);
                        var_34 = (arr_11 [i_2] [5] [i_8]);
                        var_35 ^= (-1907174664 | 511);
                        var_36 -= ((arr_25 [i_3] [i_3] [i_3] [i_3]) / ((((arr_8 [i_7]) ? var_6 : var_2))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        var_37 |= -1907174667;
                        var_38 = (min(var_38, (((-1312323888 ? -1907174667 : (140 >= var_6))))));
                        var_39 = (min(var_39, (((131068 ? (arr_13 [i_2] [i_9]) : (arr_13 [i_7] [i_7]))))));
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                    {
                        var_40 = var_1;
                        arr_33 [i_2] [i_3] [i_3] [i_7] [i_10] [i_10] = ((~((~(arr_21 [i_3] [i_3 + 3] [i_3 + 1])))));
                        var_41 = ((((((arr_11 [i_2] [i_3 - 1] [i_7]) ? (arr_18 [i_2] [i_3] [i_3] [i_10] [i_3]) : (max(var_14, (arr_8 [i_2])))))) != (((-(arr_14 [i_2] [i_2]))))));
                        var_42 = (((((min(4294966780, (arr_24 [i_2] [i_2] [i_7] [i_10])))) ? (((arr_9 [i_7] [i_3] [12]) ? (arr_23 [i_2] [i_10] [i_7] [i_3]) : var_18)) : (arr_28 [i_3] [i_3 + 3] [1] [i_7] [i_7] [i_3]))));
                    }
                }
                for (int i_11 = 1; i_11 < 14;i_11 += 1)
                {
                    var_43 = ((-(arr_23 [i_2] [i_2] [i_2] [i_3])));
                    var_44 = (max(var_44, ((((arr_24 [i_3 - 1] [i_11] [i_11] [i_11 - 1]) ? (((var_7 / (arr_22 [i_2] [i_2] [i_2])))) : ((((arr_25 [i_2] [i_2] [i_3 + 2] [i_3 + 3]) ? (arr_25 [i_3] [i_3] [i_3 + 2] [i_11]) : (arr_25 [i_3 + 2] [i_3 - 2] [i_3 + 4] [i_3])))))))));
                }
                var_45 = 2444700847;
            }
        }
    }
    #pragma endscop
}
