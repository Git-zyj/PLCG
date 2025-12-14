/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (((var_0 - (arr_1 [i_0]))) == (((arr_1 [i_0]) ^ var_12)));
        var_20 = (((((arr_0 [i_0]) || (arr_1 [i_0]))) || ((((arr_1 [i_0]) % var_12)))));
        var_21 ^= (((((var_18 + (arr_0 [i_0])))) ^ ((15875961074731252329 ^ (arr_1 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_22 |= (1 * 1);
        var_23 = (((min((max(var_16, (arr_3 [0] [0]))), ((min(var_12, 1))))) & (((((((arr_1 [i_1 + 1]) <= 13585)) || ((max((arr_1 [i_1]), 41616)))))))));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_6 [i_2] = (18034688864239488287 != 10889926768030311321);
        arr_7 [i_2] = ((((((arr_5 [i_2]) / -13586))) * ((-13586 / (arr_1 [i_2])))));
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                {
                    arr_16 [i_3 - 1] [20] [i_3 + 2] [1] = ((((((1587413138 != (arr_14 [13] [i_5 + 1] [i_5]))) && (((var_9 >> (var_11 - 3200519511)))))) || ((((min(10020, 250))) > ((min(14660, 14)))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_24 = (max((((255 & (65535 ^ 209)))), (((((min(31131, (arr_8 [0]))))) - (1587413121 - 1485092767)))));
                                var_25 += ((((min((max((arr_18 [i_3 + 2] [i_3 - 1] [i_4] [13] [i_6] [3]), (arr_9 [17] [i_3]))), ((max((arr_13 [i_3] [20] [i_5 + 1]), -1714137830)))))) - (min(((min(17, 0))), (-2020021574 / 549755813887)))));
                                var_26 = ((((var_14 * var_13) / (min(var_10, var_5)))) % ((max((290871232103068765 >> var_18), (min(-13600, var_17))))));
                            }
                        }
                    }
                }
            }
        }
        var_27 *= (max(((max((max((-2147483647 - 1), 1)), ((((arr_17 [i_3] [i_3] [i_3] [i_3] [1]) != 56668)))))), (((var_5 * 20358) / (max(-124, 9534265370701087632))))));
        var_28 = (min(((min(4011, 246))), (max((6 != 1309103464587971521), 3417237594))));
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        arr_23 [i_8] |= (max(((max(((((arr_14 [i_8] [i_8] [i_8]) <= var_3))), (max(1, 2147483647))))), (min(((max(59695, 0))), (max((arr_17 [i_8] [i_8] [i_8] [i_8] [i_8]), 3743053669549349076))))));
        arr_24 [i_8] = ((min(((max(0, 55660))), (max(313007361, 982988807)))) <= ((max((min(21, 1)), 1))));
    }
    var_29 = (((((((4874753488267288901 / 259681406765902928) >= ((max(65533, -365777102))))))) < (min((var_6 - var_12), (min(var_0, var_3))))));
    var_30 = (((min((max(var_7, var_16)), ((max(9884, var_14))))) < ((((max(var_8, 126481268)) * (var_3 / var_4))))));
    #pragma endscop
}
