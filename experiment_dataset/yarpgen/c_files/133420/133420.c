/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-((var_2 << (((var_3 % var_2) - 85422131)))));
    var_12 = var_10;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0]);

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_13 = (min(var_13, (((-(((((arr_4 [i_0]) ? (arr_5 [i_0]) : (arr_5 [i_0]))) / (arr_2 [i_0]))))))));
            var_14 = (((arr_7 [i_1 + 1] [i_1 - 1]) || 14704760063904624091));
            arr_8 [i_1] [i_1 - 1] [i_0] = (max((3741984009804927520 >= 1208934910), ((~(max(15979025172043310285, 1352037906648143706))))));
            arr_9 [i_1] [i_1] [i_0] |= ((((!(arr_0 [i_1 + 1]))) ? (arr_6 [i_1 + 3] [i_1 + 3]) : (((((((arr_2 [16]) == (arr_0 [i_0]))))) + (arr_0 [i_1])))));
            var_15 = (((arr_1 [i_0] [i_0]) > (max((arr_7 [i_1 + 1] [i_1 + 1]), (arr_7 [i_1 + 3] [i_1 + 3])))));
        }
    }
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        arr_12 [i_2] = ((!(((-893596950 ? 8017472030848471304 : 9345535300180070453)))));
        var_16 = ((var_0 ? (((arr_4 [19]) ? (arr_1 [i_2] [2]) : (arr_7 [i_2] [17]))) : (min((arr_7 [i_2] [i_2 - 3]), (arr_0 [19])))));
    }
    for (int i_3 = 4; i_3 < 16;i_3 += 1)
    {
        var_17 = ((arr_1 [i_3 - 1] [i_3 - 3]) ? ((1352037906648143732 * (arr_4 [i_3]))) : ((((!(arr_1 [i_3 - 1] [16]))))));

        /* vectorizable */
        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        var_18 = (((arr_2 [i_4 + 2]) ? (arr_1 [i_4 + 3] [i_3 + 1]) : (arr_13 [i_3 - 1])));
                        var_19 = (arr_13 [i_3 - 1]);
                        arr_22 [i_4] = (((((var_0 || (arr_0 [i_5]))))) % ((-6573846 ? (arr_18 [i_3] [6] [i_5 + 4] [1]) : var_10)));
                        arr_23 [i_4] [i_4] [5] [i_4] = (arr_13 [i_4 + 1]);
                    }
                }
            }
            var_20 = (((arr_0 [i_3 - 3]) >> (11766897151212641773 - 11766897151212641737)));
            arr_24 [i_3 - 4] [i_3] [i_4] = (((arr_7 [i_4] [i_4 - 2]) == (arr_5 [i_3 + 2])));
        }
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 9;i_7 += 1)
    {
        var_21 &= ((arr_15 [i_7 + 1] [i_7 - 2]) / (arr_15 [i_7 + 2] [6]));
        var_22 = (max(var_22, (((var_8 ? 16474187437886482483 : (arr_1 [i_7] [i_7]))))));
    }
    #pragma endscop
}
