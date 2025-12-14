/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((-255 ? var_17 : (max(var_1, ((var_3 ? var_7 : var_16)))))))));
    var_19 = (((((var_2 % ((var_7 << (var_17 - 2588)))))) ? var_6 : ((10916843199357659273 + (((max(var_1, 1))))))));
    var_20 ^= (((((-597656901 ^ var_8) <= var_2)) ? (((~1) ? var_1 : ((var_17 << (var_6 - 167))))) : var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    arr_8 [1] [i_1] [i_0] [i_0] = (((max((((arr_7 [i_1] [i_2]) <= (arr_6 [i_0] [i_0] [16]))), (!var_0))) ? (((!(arr_3 [i_0])))) : ((-((((arr_2 [1] [13] [1]) < (arr_7 [i_0] [i_1]))))))));
                    arr_9 [i_0] [i_1] [i_2] = (((~var_3) ? (((arr_7 [i_2 + 3] [i_1]) & (arr_6 [i_2 - 1] [i_0] [i_2 + 3]))) : ((((!(arr_5 [i_0] [i_1] [i_1])))))));
                    var_21 &= (min(var_17, (((arr_2 [i_2 + 4] [i_2 + 4] [i_2 + 2]) ? (arr_2 [i_2 + 3] [i_2 + 2] [i_2 - 1]) : (arr_6 [i_2 + 1] [i_2 + 4] [i_2 + 2])))));
                }
                /* vectorizable */
                for (int i_3 = 4; i_3 < 16;i_3 += 1)
                {
                    var_22 ^= (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])));
                    arr_12 [i_3 - 4] [i_1] [i_0] = (~31);
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_20 [i_0] [i_5] [16] [i_4] [i_5] [i_5] = (((((+(((arr_16 [i_1] [i_1]) ? (arr_5 [i_5] [i_1] [i_5]) : (arr_5 [i_4] [i_4] [i_4])))))) == (((((-(arr_17 [i_5] [i_1] [i_4] [i_5])))) ? (arr_14 [i_0] [i_1] [i_4]) : (((arr_17 [i_0] [i_1] [17] [i_5]) ? var_3 : (arr_4 [i_5] [i_4])))))));
                        arr_21 [6] [i_1] [i_1] [i_1] |= (max((((arr_1 [i_0] [i_1]) ? ((((arr_15 [i_5] [i_4] [i_1] [12]) << (1002823766 - 1002823761)))) : (arr_16 [i_1] [i_5]))), ((((((arr_18 [1] [1]) ? (arr_13 [i_0] [i_5]) : (arr_1 [i_0] [i_0])))) ? (((arr_11 [1] [i_4] [i_4]) & (arr_19 [i_0] [i_0] [i_4] [i_5]))) : ((max((arr_17 [i_0] [i_4] [i_0] [6]), var_6)))))));
                    }
                    var_23 = ((((((arr_13 [i_4] [i_1]) ? ((((arr_10 [i_0] [i_0]) == (arr_7 [i_4] [i_1])))) : (((arr_16 [i_1] [i_4]) ? (arr_15 [i_1] [i_1] [i_4] [9]) : (arr_6 [i_0] [i_0] [i_0])))))) ? ((((((-9 + 2147483647) << (((arr_14 [i_0] [i_1] [i_4]) - 1940618576))))) ? var_16 : (arr_2 [1] [1] [8]))) : (arr_14 [i_4] [i_1] [i_0])));
                }
                var_24 = ((((!(arr_13 [i_0] [i_1])))) > (((arr_4 [1] [i_1]) ? (arr_1 [i_0] [i_0]) : 171)));
            }
        }
    }

    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_25 = (arr_4 [i_6] [i_6]);
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    var_26 ^= ((-1 != (((((!(arr_11 [i_6] [i_7 - 1] [12])))) >> (((arr_3 [i_6]) - 243))))));
                    arr_29 [i_6] [i_6] = (arr_27 [i_6] [i_8] [i_7 + 1]);
                }
            }
        }
        arr_30 [i_6] = (min(((~((var_9 ? (arr_7 [i_6] [i_6]) : (arr_1 [15] [i_6]))))), ((((arr_28 [13]) ? (arr_17 [16] [i_6] [i_6] [16]) : (arr_17 [2] [i_6] [i_6] [2]))))));
    }
    #pragma endscop
}
