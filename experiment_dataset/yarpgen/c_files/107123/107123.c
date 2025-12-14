/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = -var_7;
    var_15 = (((var_8 ? (((min(var_10, 31514)))) : (min(146, 1419276000)))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_16 += ((+((22762 ? (arr_2 [i_0 + 2] [i_0 + 2]) : 202))));
        var_17 = (((((34021 ? 22762 : -7976))) ? ((-(arr_1 [i_0]))) : (arr_2 [i_0 + 3] [i_0 - 4])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = ((((min(var_11, ((((arr_4 [i_1] [i_1]) ? 256 : var_11)))))) ? (max(((((arr_1 [4]) ? 1 : -50))), (arr_0 [i_1] [i_1]))) : ((min(var_7, (max((arr_1 [4]), var_12)))))));
        var_19 = ((((min(var_1, (max(var_1, var_9))))) ? (max(((max(var_0, 17847))), (var_4 & var_1))) : ((min((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1]))))));
        var_20 += (((((0 ? -1 : 61195))) ? (((((((arr_2 [i_1] [i_1]) ? var_1 : var_11))) ? (1 / 61199) : (max(var_0, var_12))))) : ((-(max(var_11, var_8))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_21 |= var_9;
        arr_10 [i_2] [i_2] = var_3;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 22;i_4 += 1)
            {
                {
                    arr_16 [i_2] = ((var_8 ? (arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 2]) : var_6));

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_21 [i_2] [i_3] [i_4 + 2] [i_2] = (arr_13 [i_2] [i_3] [i_4 - 4] [i_5]);
                        var_22 = (arr_13 [i_2] [i_3] [i_4 - 2] [i_4 - 1]);
                        arr_22 [i_2] = (arr_20 [i_2] [21] [i_4] [21] [i_4 + 1]);
                        var_23 = ((var_12 & (arr_19 [i_4 - 1] [i_4])));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_24 += ((((((arr_19 [i_3] [i_6]) ? var_12 : var_4))) ? (!var_4) : ((1 ? 1303709528 : 125829120))));

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_25 = var_4;
                            var_26 = var_0;
                            var_27 = (((arr_7 [i_4 - 2]) || var_10));
                            arr_27 [i_6] [i_6] [i_6] [i_6] [i_2] = (((arr_14 [i_4 - 4] [i_2] [i_4]) - (arr_14 [i_4 - 4] [i_2] [i_4])));
                            arr_28 [i_2] [i_2] [i_2] = (((var_12 ? 1 : -44)));
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_28 = ((!(var_1 + var_3)));
                            var_29 = (min(var_29, (arr_23 [i_2])));
                            var_30 = var_2;
                            var_31 *= ((2254000054898036312 ? -60 : 4841441737607652007));
                        }
                        arr_31 [i_2] [i_2] [i_2] [i_2] = (arr_23 [i_2]);
                    }
                    var_32 += (arr_17 [i_2] [i_2] [i_4] [i_3] [i_4] [i_4]);
                    arr_32 [i_2] [i_2] [i_2] [i_2] = (((arr_20 [i_4 - 4] [i_4 - 1] [i_4 + 2] [i_4 - 4] [i_4 - 4]) ? (arr_12 [i_4 - 3] [16] [i_4 - 2]) : (arr_20 [i_4 - 4] [i_4 - 2] [i_4 - 2] [15] [i_4 - 4])));
                }
            }
        }
    }
    #pragma endscop
}
