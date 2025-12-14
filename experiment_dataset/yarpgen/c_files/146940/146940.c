/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_3 ? var_8 : (((min(var_5, var_0)))))));
    var_11 = ((~(~167)));
    var_12 = var_6;

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_13 = (max(var_13, ((((((~32738) + 2147483647)) >> (((max((arr_1 [i_0 + 4]), var_2)) - 8927419215041378949)))))));
        var_14 = (max(var_14, ((((min(-32740, (arr_0 [i_0 - 2] [i_0]))) % (max(var_1, (arr_0 [i_0 - 2] [i_0 - 2]))))))));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_15 *= (((arr_3 [i_1]) ? (arr_2 [i_1]) : (max((var_6 + -1175127891), (arr_2 [i_1])))));
        var_16 = (min(var_16, (((((65013 ? 249 : 32728)) <= (arr_2 [20]))))));
        var_17 = (max(var_17, (((+((((arr_3 [i_1 - 1]) > (arr_2 [12])))))))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    {
                        arr_17 [i_2] [i_2] [i_2] [i_2] = (arr_12 [i_3 - 3] [i_3 - 3] [i_5 - 1] [i_5 - 1]);
                        arr_18 [i_5] [i_5] [i_5] [i_5] = ((-1175127894 ? (((arr_10 [i_2] [i_2] [i_2] [17]) ? (arr_6 [1] [i_3]) : 1175127887)) : (-16 == 3397079311675674630)));
                        arr_19 [i_2] [i_3] [i_4] [i_5] = (var_7 || var_5);
                        arr_20 [12] [12] [i_4] [12] = ((((((1175127886 != (arr_5 [i_3 - 3] [i_3 - 2]))))) >= (arr_5 [i_3 - 2] [i_3 - 3])));
                    }
                }
            }
        }
        var_18 = var_3;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 17;i_7 += 1)
            {
                {
                    var_19 |= ((~(((arr_15 [i_2] [i_6] [i_6] [i_7]) + var_4))));
                    var_20 = (arr_2 [i_7]);
                    var_21 += var_0;
                }
            }
        }
    }
    #pragma endscop
}
