/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_5, (((((min(var_12, var_10))) || 50)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [13] = ((((min((arr_1 [i_0] [i_0]), (arr_0 [i_0])))) ? ((min(1, 15869))) : (((!(arr_1 [i_0] [i_0]))))));
        var_14 = (min(var_14, 1));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_15 &= ((-(4930 + 16874)));
            var_16 = (max(var_8, -27111));
            arr_7 [i_1] = (((~var_12) ? 30310 : ((1 ? (min(-57, 18446744073709551615)) : 11644999549511762739))));
            arr_8 [i_0] [i_0] = ((((min(1357828140, 30291))) ? (arr_3 [i_0] [4] [i_1]) : 1));
            var_17 = (min(var_17, ((((arr_0 [i_0]) ? (((arr_0 [i_0]) / (arr_0 [i_1]))) : (((!(arr_1 [i_0] [i_1])))))))));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_11 [i_2] [i_2] [i_2] = (arr_10 [i_0]);
            arr_12 [i_2] = ((((((arr_10 [i_0]) ? var_2 : (arr_4 [i_2])))) ? (698163442 % -23852) : ((min(var_11, (arr_0 [i_2]))))));
            arr_13 [i_0] &= 5862;
        }

        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {
            arr_16 [i_3] = (arr_14 [i_3]);
            arr_17 [i_3] [i_3] [1] = ((1809967124645817540 ? 1675120999 : 1));

            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_18 = ((-(arr_19 [i_0] [i_0])));
                var_19 = (min(var_19, ((((arr_5 [i_0] [i_3]) ? 928826411 : (((arr_18 [i_3 - 1] [i_4]) ? (arr_18 [i_0] [i_4]) : (arr_6 [9] [i_4]))))))));
                var_20 = ((~(arr_14 [i_3])));
            }
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_21 = (min(var_21, ((min((((arr_3 [i_6 + 1] [1] [14]) ? (arr_3 [i_6 + 1] [i_6] [11]) : (arr_3 [i_6 + 1] [i_6] [10]))), (((arr_3 [i_6 + 1] [16] [10]) + (arr_3 [i_6 - 1] [i_7] [i_7]))))))));
                            var_22 = ((!(((1181250160512518300 % (arr_4 [i_3 + 1]))))));
                            var_23 *= (!(~32744));
                        }
                    }
                }
                arr_29 [i_3] [2] [1] = (min((arr_9 [i_3 + 2] [i_3 - 1]), (min((arr_9 [i_3 - 3] [i_3 - 1]), (arr_10 [i_3 - 2])))));
                arr_30 [i_0] [i_0] [i_3] [i_0] = ((((arr_19 [i_0] [i_3 + 2]) ? (arr_19 [i_0] [i_3 - 3]) : (arr_19 [i_0] [i_3 + 1]))));
            }
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_24 = (!-12705);
            var_25 = (min(var_25, (((0 ? ((min((min(0, 0)), (max(1, 1))))) : (arr_24 [i_0] [i_8]))))));
            var_26 = (arr_18 [15] [i_8]);
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            var_27 = (min(var_27, (((~(arr_33 [i_0] [i_0]))))));
            var_28 = ((arr_21 [i_0] [i_0] [i_9] [i_9]) * (arr_6 [i_0] [i_9]));
        }
        var_29 = max((((arr_23 [i_0] [i_0]) | (arr_24 [i_0] [i_0]))), ((((((-30317 ? (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [0]) : (arr_10 [i_0])))) ? (arr_1 [15] [9]) : (min(var_4, -1033848848))))));
    }
    #pragma endscop
}
