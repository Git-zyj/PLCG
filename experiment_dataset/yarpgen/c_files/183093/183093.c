/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((min(var_15, var_17)))) ? ((((min(-975617066, var_19)) >= (((var_13 ? var_6 : 975617073)))))) : (((((var_4 ? -975617050 : 975617069)) >= (var_19 > var_16))))));
    var_21 = (((((((var_9 ? var_0 : var_10))) ^ (min(var_2, 975617065)))) >> (var_16 - 1124126255)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_22 = (((((arr_10 [i_0] [i_0]) > 9115458638968321958)) ? 1375246616709145825 : (((var_12 ? (arr_3 [i_0] [i_2] [i_3]) : (!var_1))))));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] [i_0] = (arr_3 [i_0] [i_1] [i_4]);
                            arr_14 [i_0] [i_3] [i_2] [i_1] [i_0] = (arr_12 [i_0]);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_23 = (min(var_23, (arr_8 [i_5] [i_5])));
                            arr_17 [i_0] [i_0] [i_0] [i_2] [i_3] [i_3] = (arr_1 [i_0] [i_2]);
                            var_24 = ((-9917446691465931532 ? 17071497457000405785 : (0 - -9115458638968321964)));
                            var_25 = (min(var_25, (arr_10 [i_0] [i_3])));
                        }
                        for (int i_6 = 2; i_6 < 15;i_6 += 1)
                        {
                            var_26 = (max(var_26, (((arr_12 [i_3]) ? ((((arr_12 [i_1]) ^ (arr_12 [i_3])))) : -9115458638968321962))));
                            var_27 = (max(var_27, (((((((arr_20 [i_6 - 2] [i_6 - 2] [i_1] [12] [12] [12] [i_1]) ? 250 : (arr_11 [i_2] [i_3] [i_6] [i_3] [i_2])))) ? var_1 : ((((var_8 ^ var_16) ^ ((((arr_12 [i_3]) > (arr_8 [i_6 - 2] [i_2]))))))))))));
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_28 = (((min(-9115458638968321968, ((((-1906778792 + 2147483647) >> 31))))) % (((~(arr_7 [i_2] [i_3] [i_3] [12]))))));
                            arr_24 [i_0] = ((var_7 ? (-9115458638968321968 > 18446744073709551615) : (((((var_4 ? (arr_22 [i_0] [i_1] [i_2] [i_3] [14]) : -1))) % (((arr_9 [6] [i_1] [i_1] [i_0]) << (var_3 - 14080893701726071261)))))));
                            var_29 *= ((83 ? var_13 : (max(9304, var_11))));
                        }
                    }
                }
            }
        }
        var_30 = (arr_6 [i_0] [i_0] [i_0]);
        var_31 -= ((((-9115458638968321976 ? (arr_6 [i_0] [i_0] [i_0]) : (arr_10 [i_0] [14]))) ^ 41189));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
    {
        var_32 = (((arr_11 [i_8] [i_8] [i_8] [i_8] [10]) > 255));
        arr_27 [i_8] [i_8] = (((arr_15 [0] [i_8] [i_8] [i_8]) - (((arr_21 [i_8] [4]) ? (arr_1 [2] [2]) : var_6))));
        var_33 -= (arr_16 [8] [i_8] [i_8] [i_8] [i_8] [8]);
        arr_28 [i_8] = (10325572097015246857 ^ var_1);
    }
    for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
    {
        var_34 *= 65535;
        var_35 = ((((((((-(arr_8 [i_9] [i_9])))) ? ((var_17 ? var_12 : (arr_10 [i_9] [i_9]))) : var_10))) ? (min(((((arr_30 [i_9]) ? var_8 : -1217084480))), (((arr_0 [i_9]) - var_18)))) : (arr_18 [i_9] [3] [i_9] [i_9] [i_9] [i_9])));
        var_36 = (((!var_5) ^ (((172 ? 0 : 197)))));
        var_37 *= 48;
    }
    #pragma endscop
}
