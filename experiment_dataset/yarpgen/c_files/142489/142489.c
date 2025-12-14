/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_1] = (~((((arr_0 [i_0] [i_1]) >= (((arr_4 [i_0] [i_0] [i_0]) ? 9223372036854775807 : -7560))))));
                arr_8 [i_0] = (((117 <= 34) >> (((arr_5 [i_0] [i_0] [i_0]) - 5922437917494103140))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_10 = (((32767 - var_0) & 1));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_11 = (~7796222236055804242);
                        var_12 = (((((arr_4 [i_0 - 3] [i_1 + 1] [i_3]) - -var_2)) >> (var_6 - 11896)));
                    }
                    arr_15 [i_0] [i_1] = ((-(((arr_3 [i_0] [i_1 - 3] [i_0 - 1]) ? (arr_3 [i_0] [i_1 + 1] [i_0 - 3]) : (arr_3 [i_0] [i_1 - 4] [i_0 + 1])))));
                    arr_16 [i_0] [i_0] [i_0] [i_0] = arr_3 [i_0] [i_1] [i_2];

                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_13 *= (((+(((arr_6 [i_0]) + (arr_9 [i_0] [i_0] [i_0]))))));
                        arr_19 [i_0] [i_1] [i_2] [i_4] = ((((((arr_11 [i_0] [i_0] [i_0 - 1]) / (arr_11 [i_0] [i_0] [i_0 - 4])))) ? (((arr_4 [i_0] [i_0] [i_4]) ? ((160026802 ? 13128 : (arr_14 [i_0]))) : (!var_9))) : -var_4));
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        var_14 ^= (((arr_3 [i_0] [i_1] [i_1]) ? (arr_11 [i_0] [i_0] [i_0]) : (((~1) | (((arr_11 [i_0] [i_1] [i_5]) ? 1 : (arr_4 [i_0] [i_1] [i_0])))))));
                        arr_22 [i_5] [i_1] [i_2] [i_2] = ((((((!(arr_18 [i_0 - 4] [i_1 - 1]))))) / ((((((arr_20 [i_0] [i_1]) / (arr_10 [i_5] [i_2] [i_0] [i_0])))) ? 1423298973 : (((((arr_2 [i_0]) >= var_2))))))));
                        arr_23 [i_0] [i_0] [i_1] [i_5] [i_0] [i_5] = (max((9223372036854775807 ^ 16380), (arr_17 [i_5] [i_5] [i_5] [i_1 - 2])));
                        arr_24 [i_5] = (((((arr_6 [i_0 - 2]) - var_5)) & ((~(arr_6 [i_0 - 1])))));
                        arr_25 [i_0] [i_5] [i_2] [i_2] = ((max(((-(arr_0 [i_2] [i_1])), (arr_1 [i_0] [i_0])))));
                    }
                }
            }
        }
    }
    var_15 = var_0;
    var_16 = ((((1 ? var_5 : var_4))));
    #pragma endscop
}
