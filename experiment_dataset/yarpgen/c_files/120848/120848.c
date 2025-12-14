/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_11 = ((((((arr_0 [i_0]) ? var_1 : var_7)) == (arr_2 [i_0 + 1] [i_0 + 1]))) ? (((arr_0 [i_0]) ? ((-21 ? var_0 : var_2)) : ((max(var_9, (arr_1 [i_0] [12])))))) : (((((((((arr_0 [i_0]) && 7740004877234177607)))) != (arr_1 [i_0] [i_0 + 1]))))));
        var_12 = (max(((((((arr_0 [i_0]) ? var_3 : var_1))) ? (((arr_2 [i_0] [i_0 + 1]) ? (arr_1 [i_0] [9]) : (arr_0 [i_0]))) : (arr_2 [i_0 + 1] [i_0 + 1]))), var_5));
    }
    var_13 &= var_6;

    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] = ((((((arr_4 [i_1] [i_1]) >> (var_5 - 1521707126)))) ? (arr_4 [i_1] [i_1]) : (arr_3 [i_1])));
        var_14 += ((!(var_4 == 60493)));
        arr_6 [i_1] [4] = ((~(arr_3 [i_1])));
        var_15 = (max(var_15, var_0));
        var_16 += ((+((var_9 ? (arr_3 [i_1]) : var_6))));
    }
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        var_17 = (((!var_9) >> (((((arr_4 [i_2 - 1] [i_2 - 1]) ? (arr_4 [i_2 + 2] [i_2 + 1]) : 28445)) - 2665719090))));
        var_18 = 54;
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_19 = (min(var_19, (((var_10 ? (((var_5 == (arr_13 [i_4])))) : ((max((arr_11 [i_4]), 28445))))))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_20 = (max(var_20, (((-(arr_4 [i_2] [1]))))));
                        var_21 = ((227 ? var_2 : var_9));
                        var_22 = (arr_2 [i_3 - 1] [i_3 - 1]);
                    }
                    for (int i_6 = 2; i_6 < 7;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_23 ^= ((!((((((arr_22 [i_2] [i_2] [i_4] [4] [8]) ? var_10 : (arr_17 [i_7] [10]))) << ((((max(27404, -20316))) - 27393)))))));
                            var_24 += 14928699282718688532;
                            arr_23 [i_7] [i_2] [i_4] [i_2] [i_2] = (arr_0 [i_2]);
                        }
                        var_25 = (min(var_25, (((((var_4 << (((arr_1 [i_6 + 4] [i_2 + 2]) - 2148703069))))) ? 30935 : (((arr_1 [i_6 - 1] [i_2 + 1]) ? (arr_12 [i_4] [i_2 - 1]) : (arr_1 [i_6 - 2] [i_2 + 3])))))));
                    }
                    for (int i_8 = 3; i_8 < 10;i_8 += 1)
                    {
                        var_26 &= (!2147483647);

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_27 *= (((((max(-127, (arr_9 [i_2 + 3] [i_3] [i_4]))))) < (((arr_9 [i_2] [i_3 - 1] [i_9]) ? (arr_9 [i_2 + 3] [8] [i_4]) : (arr_21 [i_9] [i_8 + 1] [i_4] [10] [i_2 + 3])))));
                            var_28 ^= (((((((((arr_17 [i_9] [i_9]) ? (arr_22 [i_2] [i_2] [i_9] [i_2] [2]) : var_2))) ? (((var_2 != (arr_17 [i_9] [i_9])))) : (~22800)))) ? ((((32 ? 227 : var_1)))) : ((max(var_0, (-9223372036854775807 - 1))))));
                            arr_30 [i_2] [5] [i_2] [i_4] [i_2] [i_4] [6] = var_10;
                            var_29 = ((((~(arr_26 [i_2] [i_2] [i_4] [i_4] [i_2] [i_3 - 1])))) ? (arr_1 [i_8 + 1] [i_8 + 1]) : (max((arr_26 [i_4] [i_2] [i_4] [i_3 - 1] [i_2] [i_3 - 1]), var_1)));
                            var_30 = var_6;
                        }
                    }

                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        arr_33 [i_10] [i_10] [i_2] [i_10] = ((+(max((((arr_8 [1]) ? var_1 : 7484)), (arr_22 [4] [i_3 - 1] [i_2] [10] [i_10])))));
                        var_31 ^= (min(((((max((arr_29 [i_10] [i_10] [i_3] [i_2 + 3] [i_10] [i_2]), var_1)) == (17712442976657053913 < -58490677)))), ((min(var_3, var_4)))));
                        var_32 = (min(var_32, ((min(((((var_1 ? 1 : (arr_4 [i_2 + 2] [i_2 + 2]))))), (arr_21 [i_3 - 1] [8] [i_3] [7] [8]))))));
                    }
                    var_33 = (max((((2147483647 == (((!(-127 - 1))))))), (max(7740004877234177607, 6727))));
                }
            }
        }
    }
    #pragma endscop
}
