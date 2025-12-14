/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_16 = arr_3 [i_0] [i_1 + 1] [i_0];
            arr_6 [i_0] = arr_1 [i_0];

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_17 = arr_9 [i_0] [i_0] [i_0] [i_2];

                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_18 += (arr_8 [i_0] [i_0] [i_3]);
                    var_19 = (arr_9 [i_0] [i_0] [i_2] [i_3]);
                    arr_12 [i_0] [i_1 + 1] [i_1 + 1] [i_0] = (((max((arr_1 [i_2]), ((((arr_0 [i_0]) && (arr_11 [i_0] [i_1 + 1] [i_0] [i_0] [i_0])))))) * (min(((4004124325 ? 6513 : -6514)), ((~(arr_3 [i_0] [i_1] [i_0])))))));
                    arr_13 [i_0] [i_0] [i_0] [i_3] = (~(((arr_2 [i_1]) ? (((arr_1 [i_3]) ? (arr_11 [i_0] [i_0] [i_0] [i_2] [i_3]) : (arr_5 [i_0]))) : (arr_11 [i_0] [i_1] [i_0] [i_3] [i_2]))));
                    var_20 = (((arr_10 [i_3] [i_1 + 1] [i_2] [i_2] [i_1 + 1]) ^ (((((((arr_10 [i_3] [i_3] [i_2] [i_1] [i_0]) ? (arr_5 [i_0]) : (arr_8 [i_0] [i_1] [i_0])))) ? (arr_1 [i_1]) : (arr_8 [i_0] [i_1] [i_0]))))));
                }
                var_21 += (((((-6513 | -6484) + 2147483647)) >> ((max((arr_8 [i_1 + 1] [i_1 + 1] [i_2]), (arr_8 [i_1 + 1] [i_1 + 1] [i_2]))))));
            }

            /* vectorizable */
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    arr_20 [i_5] [i_5] [i_4] [i_5] &= (arr_8 [i_1 + 1] [i_1 + 1] [i_5]);

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_23 [i_0] [i_0] [i_4] [i_5] [i_6] = (arr_8 [i_1 + 1] [i_5] [i_0]);
                        var_22 = (min(var_22, ((((((arr_21 [i_0] [i_4] [i_5]) + 2147483647)) << (((((arr_21 [i_1] [i_5] [i_6]) + 29080)) - 4)))))));
                        var_23 = (((((arr_2 [i_0]) & (arr_0 [i_0])))) + (((arr_0 [i_0]) ? (arr_15 [i_0] [i_1]) : (arr_1 [i_4]))));
                        var_24 = arr_4 [i_0];
                        arr_24 [i_0] [i_1] [i_5] [12] [i_6] [i_0] = (arr_19 [i_6] [i_5] [i_4] [i_0]);
                    }
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    var_25 ^= arr_3 [i_1] [i_1] [i_4];
                    arr_28 [i_7] [i_7] [i_4] [i_7] [i_4] |= (((((~(arr_19 [i_0] [i_1] [i_1] [i_7])))) ? (arr_25 [i_7] [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (6 | 32760)));
                    var_26 *= (((arr_5 [i_4]) ? (arr_2 [i_1 + 1]) : (arr_19 [i_0] [i_1] [i_1 + 1] [i_1 + 1])));
                }
                var_27 = arr_9 [i_4] [i_0] [i_0] [i_0];
            }
        }
        for (int i_8 = 2; i_8 < 13;i_8 += 1)
        {
            arr_31 [i_0] [i_8] [i_8] = min((arr_11 [i_8] [i_0] [i_0] [i_0] [i_0]), ((~(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))));
            var_28 = ((((min((arr_15 [i_0] [i_8 - 1]), (arr_27 [i_8 + 1] [i_8 + 1] [i_8] [i_8 - 2])))) ? (((!((!(arr_8 [i_0] [i_8 + 1] [i_0])))))) : (((!(((arr_8 [i_0] [i_0] [i_0]) || (arr_30 [i_0] [i_0]))))))));
            var_29 = (arr_11 [i_0] [i_0] [i_0] [i_8 + 1] [i_8]);
            var_30 = (min(var_30, (arr_9 [i_8 - 1] [i_8] [i_8] [i_8])));
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            arr_35 [i_0] [i_9] [i_0] = (min((((arr_5 [i_0]) ? (arr_5 [i_0]) : (arr_5 [i_0]))), (arr_5 [i_0])));
            var_31 ^= ((!(arr_29 [i_0] [i_9] [i_0])));
            var_32 ^= (max(((min((arr_25 [i_9] [0] [i_9] [i_9]), (max((arr_1 [i_0]), (arr_7 [i_9] [i_9] [i_9] [i_0])))))), (max(((max(-6515, (-32767 - 1)))), ((1 ? -16392 : 13))))));
            arr_36 [i_0] [i_9] |= (((max((arr_32 [i_9] [i_0]), (arr_32 [i_0] [i_0]))) ? (((arr_32 [i_0] [i_9]) ^ (arr_32 [i_0] [i_0]))) : ((min((arr_33 [i_9]), (arr_33 [i_9]))))));
            var_33 = (min(var_33, ((max(((max((arr_21 [i_0] [i_9] [i_9]), ((max((arr_32 [i_9] [4]), (arr_8 [i_0] [i_0] [i_9]))))))), (((((arr_30 [i_0] [i_0]) + 2147483647)) >> (((arr_30 [i_0] [i_9]) + 30602)))))))));
        }
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            var_34 |= (arr_4 [i_10]);
            arr_41 [i_0] [i_0] [i_10] |= max((max((arr_34 [i_0] [i_10]), (arr_5 [i_10]))), (((!(arr_8 [i_0] [i_10] [i_10])))));
        }
        var_35 = (min(var_35, (((+((min((-32767 - 1), 32757))))))));
    }
    var_36 += var_6;
    #pragma endscop
}
