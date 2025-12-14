/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (((((-(var_3 < var_5)))) ? ((max(var_7, (((var_3 ? var_3 : 1536692131)))))) : var_6));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (min(var_14, (arr_0 [i_0] [i_0])));
        arr_2 [i_0] [i_0] = (~-8123078443669964247);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_15 *= ((~(var_11 | var_7)));
        arr_5 [i_1] = (((((((arr_0 [i_1] [i_1]) ? var_2 : var_0)))) % (arr_1 [i_1])));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_8 [i_2] &= (786204810795377879 / 1);
        arr_9 [i_2] [i_2] = (arr_1 [1]);
        arr_10 [i_2] [i_2] = (((((arr_1 [i_2]) ? (arr_1 [i_2]) : var_9))) * (((arr_7 [i_2]) ? (arr_7 [i_2]) : 1)));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_16 *= (((((!((((arr_6 [i_2] [6]) + 1))))))) % (max((min(18446744073709551615, var_4)), var_0)));

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_17 &= -8123078443669964270;
                        arr_20 [i_4] [i_4] = (((((var_6 ? (((arr_4 [i_5]) ? 8123078443669964270 : (arr_1 [i_5]))) : 139))) ? ((+((var_8 ? (arr_4 [0]) : (arr_0 [8] [i_3]))))) : (arr_4 [i_2])));
                        var_18 = (((arr_6 [i_3] [i_4]) || ((((arr_6 [i_3] [i_4]) ? (arr_6 [i_2] [i_4]) : (arr_6 [9] [i_2]))))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_23 [i_2] [i_3] [i_2] [i_2] &= (!21363);
                        arr_24 [i_4] [i_4] [6] [i_4] = (((arr_15 [i_2]) != (arr_16 [1] [1] [1])));

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_19 |= ((((((((arr_3 [i_2]) ? (arr_27 [0] [0] [i_4] [i_3] [0] [0] [0]) : var_1)) ^ ((((arr_19 [i_6] [i_3] [i_4] [i_6] [i_6] [i_7]) ? (arr_27 [i_2] [10] [10] [i_3] [10] [i_7] [10]) : (arr_11 [i_2]))))))) != (min(((min(var_12, var_4))), (max(var_10, (arr_25 [i_3] [i_3] [i_3] [8] [i_7])))))));
                            var_20 += 127;
                        }
                        var_21 += ((var_9 ? (var_10 ^ var_12) : ((((arr_7 [i_2]) & 49294)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
