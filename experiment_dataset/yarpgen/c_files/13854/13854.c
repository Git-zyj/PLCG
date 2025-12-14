/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_11 * -var_3);
    var_21 = var_1;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (min(((+(((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [1] [i_0]))))), (arr_0 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_5 [1] [i_1] = (arr_3 [i_0]);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_13 [18] [4] [i_1] [i_2] [i_3] [20] [i_1] |= (((!(arr_0 [18] [i_1]))));
                            var_22 *= (((((!(arr_10 [i_4 + 2] [i_3 - 2] [i_3 - 2] [i_3] [i_3] [i_1])))) * (((!((min((arr_3 [i_2]), (arr_3 [i_0])))))))));
                            arr_14 [i_4] [i_4] [i_4] [i_3] [i_4 - 1] = (((arr_1 [i_0] [i_1]) && ((max(3492379568432315155, 1)))));
                        }
                    }
                }
            }
            var_23 |= (1 < 710388008);
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_24 = (((((((arr_0 [i_5] [i_0]) || (arr_6 [4]))) || (((arr_7 [10] [i_5]) || (arr_10 [22] [22] [i_0] [22] [i_5] [i_5]))))) && ((((arr_3 [i_0]) ? (arr_6 [i_5]) : (arr_0 [i_5] [i_5]))))));
            var_25 = ((+(((arr_0 [i_0] [i_0]) * (arr_15 [i_5] [i_5] [i_5])))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        var_26 -= ((+((((((arr_7 [14] [i_5]) >> (((arr_9 [4] [i_7] [i_7] [i_7]) + 1140784324))))) ? ((-(arr_4 [i_7]))) : (arr_10 [10] [i_6] [i_6 - 1] [i_6 + 2] [22] [5])))));
                        arr_23 [i_5] [i_5] [i_6] [i_6 - 1] [i_5] = ((~((((((arr_17 [i_5]) ? (arr_18 [i_5]) : (arr_21 [i_0] [21] [i_5] [i_0] [i_6 - 1] [i_5])))) ? (arr_21 [i_5] [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 2] [i_5]) : (arr_9 [23] [23] [i_6 + 1] [i_7])))));
                    }
                }
            }
            arr_24 [i_0] |= ((-(((((((arr_7 [i_0] [i_0]) != (arr_8 [22] [i_5] [i_5] [17]))))) | (((arr_19 [1]) ? (arr_16 [i_0]) : (arr_11 [i_5] [12] [i_0] [i_0] [i_0])))))));
        }
        var_27 = (arr_16 [i_0]);
    }
    var_28 = var_0;
    #pragma endscop
}
