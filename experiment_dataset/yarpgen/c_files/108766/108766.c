/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~661463942);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_1] = (min((((18231 < (((arr_6 [10] [i_1] [i_0]) ? (arr_6 [16] [i_1] [i_1]) : var_17))))), ((max(var_7, 1)))));
                var_20 = (max(var_20, var_3));
            }
        }
    }

    for (int i_2 = 4; i_2 < 18;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                var_21 = (((-(((arr_8 [i_2 - 1]) ? 1 : -7861)))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_22 = (((arr_13 [i_5 + 1] [3] [i_3 - 2] [i_3 - 2]) * ((((~-102) ? ((-10970 ? (arr_11 [i_2]) : (arr_15 [i_2] [i_4] [11] [i_5] [i_3 - 1] [i_4]))) : ((((arr_15 [i_2] [i_3] [i_2] [i_2] [i_3] [i_6]) >= 0))))))));
                            var_23 = (max(var_23, ((((arr_12 [i_2 - 1] [i_2] [i_2 - 3] [i_2]) ? var_11 : (arr_12 [1] [i_2 + 1] [i_3 - 1] [i_5 + 1]))))));
                            var_24 = (arr_13 [i_6] [i_5] [i_4] [i_3]);
                            var_25 = (arr_14 [i_2]);
                        }
                    }
                }
            }
            arr_18 [i_2] [i_2 + 2] = (max((min(((((arr_10 [i_2] [i_3 + 2]) ? (arr_12 [i_2] [i_2] [i_2 + 2] [i_2 - 4]) : 33516))), (var_6 - var_3))), (((~((~(arr_16 [i_2] [i_2] [i_2] [i_2] [1]))))))));
        }
        var_26 = (((arr_10 [i_2] [i_2]) != ((~(arr_14 [i_2])))));
        var_27 = (min(var_27, (((((min((min((arr_9 [1] [i_2 - 3]), (arr_14 [18]))), ((((arr_9 [16] [16]) && (arr_12 [14] [14] [i_2] [i_2]))))))) && ((((arr_9 [1] [i_2 + 1]) ? var_7 : (arr_15 [i_2 + 3] [i_2] [i_2] [i_2] [i_2] [i_2])))))))));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_24 [i_7] [7] = (((((arr_23 [i_7]) ? (arr_23 [i_7]) : (arr_23 [i_8]))) != ((max((arr_19 [i_7] [i_8]), 54333)))));
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 19;i_10 += 1)
                {
                    {
                        arr_29 [i_9] [i_10] [i_7] = ((((max((arr_28 [i_9 - 2] [i_9 + 1] [i_10] [1]), var_15))) ? (arr_28 [i_9 - 2] [i_9 + 1] [i_10] [4]) : (((arr_28 [i_9 - 2] [i_9 + 1] [i_10] [i_9]) + (arr_28 [i_9 - 2] [i_9 + 1] [i_10] [12])))));
                        arr_30 [i_7] [i_7] [i_8] [i_7] [i_10] [i_10] = ((((max(-30862, 26358))) > 0));
                        var_28 -= (+(((max((arr_28 [i_10] [i_9] [i_9] [i_7]), var_7)) ? (((arr_20 [i_7]) ? (arr_28 [i_7] [10] [i_9] [1]) : (arr_21 [i_7] [i_9] [i_9]))) : (((min(var_14, var_13)))))));
                    }
                }
            }
            var_29 = (((((~(min((arr_26 [i_8] [i_8] [i_7] [3]), var_6))))) && (arr_23 [i_8])));
        }
        arr_31 [i_7] = ((max(7526314749971906847, 26350)));
        /* LoopNest 2 */
        for (int i_11 = 4; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 20;i_12 += 1)
            {
                {
                    var_30 = (((min((arr_36 [i_12 + 1] [10] [i_11 - 1] [i_12]), ((~(arr_36 [19] [i_7] [i_11] [i_7]))))) == (min(((max((arr_32 [i_7]), (arr_32 [18])))), ((1 ? var_15 : var_8))))));
                    var_31 |= var_15;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                {
                    var_32 = (max(var_32, (((+(((!((max((arr_25 [i_14] [1] [i_7]), (arr_32 [i_14]))))))))))));

                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        arr_43 [i_15] [i_14] [0] [i_15] = (((((max((arr_42 [i_15] [i_14] [i_7]), (arr_23 [i_7]))))) + var_3));
                        arr_44 [i_7] [i_13] [i_7] [i_15] = ((~(arr_36 [i_7] [i_7] [i_14] [i_7])));
                    }
                    var_33 = (min((max(((~(arr_25 [i_7] [i_13] [0]))), -1355083448)), (max((((7858 <= (arr_32 [i_14])))), (((arr_42 [i_14] [i_13] [i_13]) % (arr_40 [i_13] [i_13] [i_13] [16])))))));
                    arr_45 [i_14] [i_13] [i_14] = (arr_37 [i_7]);
                }
            }
        }
    }
    var_34 = (max(((min(var_3, var_9))), ((40479 ? (~var_18) : (((max(var_14, 1))))))));
    #pragma endscop
}
