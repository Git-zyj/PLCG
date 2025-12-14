/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((133 >> (-8 + 23)));
        arr_4 [i_0] [i_0] = ((~(~-25729)));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_18 ^= ((7 << (28053 - 28049)));

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                arr_15 [i_2] [i_2] [i_3] [i_1] = ((((((((arr_2 [i_2] [i_3]) == 9880))) == (((!(arr_7 [i_3])))))) ? ((~(arr_12 [i_1] [i_1] [3] [i_3 + 1]))) : (21998 < -28127)));
                var_19 = (((!3) ? (((((((arr_7 [i_2]) ? (arr_8 [i_3] [i_1]) : (arr_13 [i_3] [i_2])))) || (((arr_9 [i_3] [i_2]) && (arr_2 [i_2] [i_2])))))) : (((((arr_5 [i_2]) || (arr_2 [i_2] [i_2]))) ? (arr_13 [i_2] [i_2]) : (arr_2 [i_2] [i_1])))));

                for (int i_4 = 4; i_4 < 11;i_4 += 1)
                {
                    arr_18 [i_2] [i_1] [10] [i_3] [i_4] = ((-(arr_9 [i_1] [i_2])));
                    arr_19 [i_2] [i_2] [i_2] [i_1] = (max(((!(arr_1 [i_4 - 3]))), (((((~(arr_7 [i_4])))) && ((((arr_8 [i_4 + 1] [i_4]) << (((arr_5 [i_1]) + 7392)))))))));
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 8;i_7 += 1)
                        {
                            var_20 = arr_11 [i_2];
                            var_21 = (min(var_21, (((~(((arr_8 [i_7 - 3] [i_7 - 3]) ^ (arr_12 [i_1] [i_2] [i_5] [i_6]))))))));
                        }
                        arr_28 [i_2] = (((arr_21 [i_6] [i_5] [i_1]) ? (arr_26 [i_6] [i_5] [i_2] [i_1]) : (arr_21 [i_6] [i_2] [i_1])));
                        var_22 = (min(var_22, (((~(((!(((~(arr_0 [i_1] [i_1]))))))))))));
                        arr_29 [11] [i_2] [i_2] [i_1] = arr_20 [i_6] [i_1] [11];
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_8 = 2; i_8 < 11;i_8 += 1)
        {
            var_23 = ((~(arr_26 [i_1] [i_1] [i_8] [i_1])));
            var_24 = (min(var_24, (arr_27 [i_8 - 2] [i_1] [i_8 - 2] [i_1] [i_8 - 2])));
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            arr_34 [i_1] [i_1] [i_9] = ((((!(~-9859))) ? (((!(arr_16 [i_1] [i_1] [i_1])))) : ((-(((!(arr_14 [i_1] [i_1] [i_9]))))))));
            var_25 = (max(((((((arr_22 [i_9] [i_9] [i_9] [i_1]) * (arr_31 [i_1] [i_1] [i_1]))) > ((-(arr_5 [i_1])))))), ((-((~(arr_32 [i_9])))))));
        }
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            var_26 = ((!(arr_1 [i_10])));
            arr_38 [i_1] [i_1] = arr_16 [i_1] [i_1] [3];
        }
    }
    var_27 += (max(((((var_7 << (var_0 - 35))) >= ((min(31, 14))))), (!17954)));
    #pragma endscop
}
