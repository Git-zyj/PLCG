/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (((((((-9223372036854775807 - 1) % var_2)) | var_3)) * ((max((max(var_11, var_4)), var_3)))));
    var_15 = var_12;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_16 = ((-(arr_2 [i_0] [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_9 [i_3] [i_0] [i_1] [i_0] = ((((max((((var_1 ? var_0 : var_9))), var_5))) > (arr_5 [5] [i_2])));
                        var_17 = (max(147, (arr_4 [i_0] [i_1] [i_0] [i_3])));
                    }
                }
            }
            var_18 = (min((~var_2), 147));
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_19 &= max(102, ((-((min((arr_8 [i_4]), (arr_11 [i_4])))))));

            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                var_20 = (min(var_20, (((((min((((!(arr_6 [1] [i_0] [i_0])))), ((-(arr_4 [i_0] [18] [18] [i_5 - 1])))))) ? (((!(((2 ? 18446744073709551614 : var_0)))))) : 2147483647)))));
                arr_17 [i_0] [i_4] = min(33, ((max((arr_8 [i_5 + 4]), (arr_8 [i_5 - 1])))));
                arr_18 [1] [i_5] [i_4] [i_0] = (min(((((min((arr_1 [i_5]), var_10))) < ((var_1 ? 3 : 18446744073709551615)))), (((arr_15 [i_5] [i_4] [i_0]) != (arr_11 [i_5 - 1])))));
            }
        }

        for (int i_6 = 3; i_6 < 18;i_6 += 1)
        {
            var_21 = (min(((((0 ? (arr_13 [i_6]) : 255)) >> (((arr_11 [i_6 - 2]) + 10929)))), (arr_16 [i_6 - 1] [18] [i_0])));
            arr_22 [i_6 + 2] [i_0] = ((((((max(18446744073709551614, (arr_13 [1]))) | (max((arr_5 [i_0] [i_6 - 3]), 14))))) ? (arr_8 [i_6 + 1]) : (arr_19 [i_6 - 2])));

            /* vectorizable */
            for (int i_7 = 1; i_7 < 19;i_7 += 1)
            {
                var_22 = (((arr_5 [i_0] [i_7]) ^ (arr_5 [i_7 - 1] [i_6 - 1])));
                var_23 -= (((arr_19 [i_7 + 1]) ? (arr_6 [i_0] [i_0] [i_0]) : (arr_6 [12] [i_6] [i_7])));
            }

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                arr_28 [i_0] [i_0] = ((max(var_1, (arr_12 [i_6 - 2] [i_6 - 2] [i_6 - 3]))) | ((((!(arr_12 [i_6 - 2] [i_6 + 2] [i_6 - 3]))))));
                var_24 = (max(var_24, (((((min((arr_24 [10] [i_6 - 2] [i_8] [17]), var_13))) >> 3)))));
            }
        }
        arr_29 [i_0] [i_0] = (max(var_13, (min((arr_10 [13] [13] [i_0]), 65535))));
        arr_30 [i_0] |= (arr_27 [i_0] [i_0]);
        arr_31 [i_0] &= (min(2, 0));
    }
    for (int i_9 = 2; i_9 < 21;i_9 += 1)
    {
        var_25 = ((((max((arr_33 [i_9 - 1] [i_9 - 1]), (arr_33 [9] [i_9 + 1])))) ? (min((arr_33 [i_9 - 1] [i_9]), (arr_33 [i_9 + 1] [i_9 + 1]))) : (((arr_33 [i_9 + 1] [i_9]) ? (arr_33 [i_9 - 2] [i_9 - 1]) : (arr_33 [i_9] [i_9 - 2])))));
        arr_34 [i_9] = ((-((((((arr_33 [i_9] [i_9]) ? var_5 : (arr_32 [i_9 - 1] [i_9])))) ? ((10 ? -2147483641 : 126976)) : (((arr_32 [i_9] [i_9]) ? 105 : (arr_32 [i_9] [i_9])))))));
    }
    var_26 -= (var_10 % var_1);
    var_27 = ((((-49 + ((18446744073709551593 ? var_4 : -2147483647)))) - 255));
    #pragma endscop
}
