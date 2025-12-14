/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((~0) | (min((1 | 1499773602), 65522))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 += (max(-1499773603, 0));
        arr_4 [i_0] = 2147483647;
        var_22 = (!1);

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_7 [i_1] [i_0] = min((((min((arr_2 [i_0] [i_1]), (arr_3 [0]))))), 96);
            arr_8 [i_0] [i_0] [6] = (arr_2 [i_0] [i_1]);
            var_23 = ((((-((min(1, 1))))) * 0));
        }
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        arr_19 [i_5] [i_5] [i_4] [i_3] [1] [1] = ((-(min(((max(65531, (arr_12 [4] [i_5])))), 902831976))));
                        var_24 = 1;

                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            arr_22 [i_5] [i_3] = ((+((max((((arr_21 [i_4] [i_5] [i_4] [i_2] [i_2]) == 1909470688)), (((arr_14 [i_6] [i_4] [8] [i_2]) && -73)))))));
                            arr_23 [0] [0] [i_3] [i_4] [i_3] [1] = ((!(arr_10 [i_6 - 2])));
                            var_25 = min((((!(-370 || 3403)))), (min((max(-15, -6503552948420435166)), (((0 || (arr_9 [2] [i_3])))))));
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_26 = (max(var_26, ((~(arr_21 [i_7] [i_5] [i_4] [i_3] [10])))));
                            var_27 = ((min(3651057464160382767, -5978835754725762990)));
                        }
                    }
                }
            }
        }
        arr_28 [4] [i_2] = ((min((min(1, (arr_0 [i_2]))), (arr_21 [i_2] [i_2] [i_2] [i_2] [i_2]))));
        arr_29 [i_2] = (arr_2 [19] [19]);
        arr_30 [i_2] [i_2] = ((-(4294967295 ^ 1)));
        var_28 = ((min((max(1, (arr_15 [i_2] [1])), (((arr_11 [i_2] [i_2] [i_2]) ^ -55))))));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_35 [i_8] = (min((arr_1 [1] [i_8]), ((((~0) >= 1)))));
        arr_36 [i_8] = ((!((max(1, (max(1, -4346331539604185189)))))));
        var_29 *= (((!((min((arr_1 [i_8] [i_8]), 160))))) || ((((min((arr_2 [i_8] [i_8]), 8933915158985280182))) || (!548263304))));
    }
    var_30 *= ((((min(0, 9223372036854775807)) / ((min(var_12, 1))))));
    #pragma endscop
}
