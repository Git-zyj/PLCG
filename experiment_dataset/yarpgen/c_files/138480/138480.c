/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 106;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        var_13 += ((var_10 ? (arr_4 [i_0] [i_2] [i_2]) : (arr_10 [i_3 + 1] [i_3 - 2] [i_3 + 2])));
                        var_14 = (((arr_12 [i_3] [13] [i_3] [i_3 + 2] [13]) ? 106 : (52693 * var_3)));
                    }
                    for (int i_4 = 3; i_4 < 20;i_4 += 1)
                    {
                        var_15 = ((!(((-(((arr_10 [i_4] [i_0] [i_0]) % (arr_0 [i_0]))))))));
                        var_16 = ((((129 | (-1716973585 ^ 1))) & (((((arr_7 [i_1] [i_1] [i_4 - 3]) ? (arr_2 [i_0]) : var_9))))));
                        var_17 = (211 % -68);
                        var_18 = (!3232500112);
                        var_19 = ((((((arr_14 [i_1]) ? 5637726844507870420 : (arr_14 [i_0])))) ? ((max((arr_14 [i_1]), (arr_14 [i_4 + 3])))) : ((((arr_14 [i_2]) >= (arr_14 [i_0]))))));
                    }
                    var_20 = ((((min(117, (((arr_14 [i_2]) ? var_6 : (arr_11 [i_2])))))) ? (((arr_0 [i_0]) ? (106 * 124) : ((var_8 % (arr_9 [i_0]))))) : (((65176 > ((9223372036854775807 | (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    var_21 += (((var_11 | var_6) ? ((var_11 ? (((-9223372036854775807 - 1) ? var_2 : (arr_3 [i_1] [10]))) : (arr_11 [i_0]))) : (arr_0 [i_1])));
                    var_22 = ((0 - (arr_0 [i_0])));
                    arr_19 [i_0] [i_5] = 9064397785954812170;
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_23 = 1;
                    arr_22 [i_0] [i_0] [i_0] = ((var_7 ? ((((arr_0 [i_0]) >= (arr_17 [i_0] [i_1] [i_6])))) : (161 | var_8)));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    var_24 = (i_0 % 2 == 0) ? ((((var_6 + 2147483647) << (((arr_0 [i_0]) - 33290))))) : ((((var_6 + 2147483647) << (((((((arr_0 [i_0]) - 33290)) + 23501)) - 23)))));
                    arr_26 [i_0] [i_0] = (arr_13 [i_0] [i_1] [i_7] [i_7]);
                    var_25 |= (((arr_15 [i_0] [i_1] [i_7] [i_1] [16]) || ((((arr_21 [i_0] [i_0] [1] [i_7]) / (arr_20 [i_0]))))));
                    var_26 = ((-(arr_18 [i_0] [i_0] [i_1] [i_7])));
                    var_27 = ((var_1 ? (~var_10) : (arr_21 [i_0] [i_0] [i_1] [i_1])));
                }
                arr_27 [i_0] [i_0] [i_1] = (((((-31 ? 0 : -5897511183882910660))) ? 8144369405273961036 : var_9));
                var_28 = ((200 ? (arr_14 [i_0]) : ((((1 / var_1) != -7015117614994969257)))));
            }
        }
    }
    #pragma endscop
}
