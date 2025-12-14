/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = min((((arr_1 [i_0]) * (8 == 4294967293))), (((!((min(131071, (arr_0 [i_0]))))))));

        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            var_15 = (min((((arr_2 [0] [i_1 + 1]) ^ 13)), ((((arr_2 [i_1] [i_1 + 1]) ? var_12 : (arr_2 [18] [i_1 - 2]))))));
            var_16 = (arr_0 [i_0]);
        }
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            var_17 = ((~(min((arr_4 [i_2 + 1] [i_2 - 1] [i_2 - 1]), (arr_2 [i_2 + 1] [i_2])))));
            var_18 = ((min((arr_3 [i_0]), ((((arr_5 [13]) <= (arr_0 [i_0])))))));
            arr_6 [15] = (((((3162473017 ^ (~121)))) ? (((((arr_3 [5]) | (arr_4 [i_0] [i_0] [i_0]))))) : (arr_5 [i_0])));
            arr_7 [i_2] [i_0] = (4294967288 != var_3);
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_19 += ((arr_8 [i_4] [i_3 - 1] [i_2] [6]) ? (arr_11 [i_0] [i_0] [i_2 - 1] [i_3 + 4]) : (((min(4294967275, (arr_10 [6] [i_3]))) - (arr_13 [6] [6] [i_3] [6]))));
                            var_20 = ((((min(4294967276, -14)))) | ((((!(arr_5 [i_0]))) ? ((~(arr_12 [i_2 - 1]))) : ((min(4294967284, var_9))))));
                        }
                    }
                }
            }
        }
        var_21 *= ((((((((arr_5 [i_0]) ? (arr_3 [i_0]) : var_4)) << (!var_10)))) ? (arr_2 [i_0] [i_0]) : (((58 ^ 1) - var_2))));
    }
    var_22 = (max(var_22, var_10));
    #pragma endscop
}
