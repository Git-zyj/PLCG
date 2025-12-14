/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_8, 992509221));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (min(((var_11 ? var_4 : (arr_1 [i_0]))), (min((arr_0 [i_0]), (arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_16 = (arr_0 [i_0]);
            arr_6 [i_0] = ((((((!((min(var_0, (arr_0 [i_0])))))))) + ((((((var_5 + 2147483647) << (((arr_3 [i_0] [i_1]) - 945769008))))) ? (min(3442861299818563089, 15003882773890988526)) : ((((arr_5 [i_0] [i_1] [i_0]) & (arr_4 [i_0]))))))));
            var_17 &= ((((max(63949, 7066932340188966899)) * 15003882773890988527)));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_18 = (max(var_18, ((min(((((((arr_5 [i_0] [i_0] [i_2]) ? 0 : var_8))) % (min(var_13, var_10)))), (max(((940194244 ? 0 : 15003882773890988519)), ((var_8 ? 15003882773890988508 : 240)))))))));
            arr_9 [i_2] [i_2] |= (((arr_0 [i_2]) ? ((((1 | 46928) << (-60 + 73)))) : (max((var_3 <= var_2), (max(var_7, (arr_3 [i_0] [i_0])))))));
        }
        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {
            arr_12 [i_0] = ((((min((((arr_10 [i_0]) ? (arr_5 [i_3 - 2] [i_3 - 2] [i_0]) : var_7)), ((((arr_0 [i_0]) ? var_9 : var_8)))))) ? 1 : (~var_8)));
            arr_13 [i_0] [i_0] = (max((min((arr_10 [i_0]), ((var_2 ? 2894723039 : (arr_0 [i_0]))))), (max(((min(var_9, 16))), 4294967295))));
        }
        var_19 = -49;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {
                    arr_22 [i_4] = ((arr_5 [i_4] [i_4] [i_4]) ? var_2 : var_9);
                    var_20 = var_6;
                    arr_23 [i_4] [i_5] [i_6] = 1;
                    arr_24 [4] [i_5] [4] [i_5] = ((!(arr_3 [i_5] [i_6])));
                    arr_25 [i_4] [i_4] [i_4] [i_4] &= 58112;
                }
            }
        }

        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
        {
            var_21 = -4995;
            arr_29 [i_4] [i_7] |= (1 + var_12);
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 15;i_10 += 1)
                {
                    {
                        arr_37 [i_4] [2] [i_10] [i_4] = (arr_28 [i_4] [11] [i_9]);
                        var_22 = (~18446744073709551604);
                        var_23 = -240;
                        arr_38 [i_10] [i_8] = ((var_2 ? var_5 : (arr_17 [i_4] [i_4])));
                    }
                }
            }
            var_24 = (arr_28 [i_4] [i_4] [1]);
            /* LoopNest 3 */
            for (int i_11 = 2; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            var_25 = arr_20 [i_8] [i_11 - 2] [i_12] [i_13];
                            arr_47 [i_4] [i_8] [i_11 + 3] [i_8] [i_13] [i_8] = (arr_30 [i_4] [i_4] [i_12]);
                        }
                    }
                }
            }
        }
    }
    for (int i_14 = 2; i_14 < 18;i_14 += 1)
    {
        arr_50 [i_14] [i_14] = var_6;
        var_26 = var_0;
        var_27 = (min(var_27, 27759));
        arr_51 [i_14 + 3] [8] &= (var_14 ? (arr_49 [i_14]) : ((min((arr_48 [6]), (arr_48 [1])))));
    }
    for (int i_15 = 2; i_15 < 11;i_15 += 1)
    {
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 12;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                {
                    var_28 = ((var_1 >> ((min((arr_33 [i_15 + 1] [i_15 + 1] [i_15 - 2]), var_1)))));
                    arr_61 [i_15] [i_16] [i_17] [i_16] = (arr_46 [i_15] [i_16] [i_16] [i_17] [i_17]);
                    arr_62 [i_17] = (min(((min((arr_3 [i_15 - 1] [i_15 - 1]), (max(675259261, 2085953213))))), (max(3442861299818563102, (arr_40 [i_15] [i_15 + 1] [i_15 - 2] [i_15 + 1])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_18 = 4; i_18 < 11;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 12;i_19 += 1)
            {
                {
                    var_29 = var_7;
                    arr_67 [i_15] [i_18 - 4] [i_18] = ((max((arr_41 [i_15 - 1] [i_15 - 2] [i_18 + 1] [i_18 - 2]), 1919092962131754377)));
                    var_30 = (min((min((min(var_3, (arr_34 [i_15 + 1] [i_18 - 4]))), ((min((arr_49 [i_15 - 2]), 0))))), -675259257));
                    var_31 |= (arr_44 [i_15] [i_15 + 1] [i_18 - 1] [i_18 - 1]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_20 = 4; i_20 < 11;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 12;i_21 += 1)
            {
                {
                    var_32 = (min(var_32, ((((max((max((arr_44 [i_21] [i_20 - 4] [i_15] [i_15]), (arr_63 [i_21]))), ((min(var_0, var_9))))) != ((((arr_48 [i_15]) ^ 2085953204))))))));
                    arr_73 [i_15 - 1] [i_15 + 1] [i_15 + 1] [i_15] = (((((var_1 ? (arr_72 [i_21] [i_15]) : var_2))) ? ((((var_5 ? (arr_17 [i_15 - 2] [i_20 - 1]) : 1643874364)))) : (min((arr_3 [i_20 - 1] [i_15 + 1]), (arr_3 [i_20 + 1] [i_15 + 1])))));
                }
            }
        }
        var_33 -= (min((min((min(67108863, (arr_34 [i_15] [i_15]))), ((((arr_56 [i_15] [7]) ? (arr_65 [i_15] [i_15] [i_15]) : (arr_42 [i_15])))))), (((-(((arr_21 [i_15] [i_15]) ? (arr_18 [i_15]) : (arr_34 [i_15] [i_15 - 1]))))))));
    }
    #pragma endscop
}
