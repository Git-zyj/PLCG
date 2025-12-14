/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((max(var_8, var_8)), var_13));
    var_21 = var_7;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, (arr_0 [i_2 + 2])));
                    var_23 += ((((arr_0 [i_0 + 2]) ? (arr_7 [4] [i_2 - 3] [4]) : (arr_9 [i_0 - 3] [0] [0]))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 14;i_5 += 1)
                {
                    {
                        var_24 &= (((((4610372118892509263 ? (arr_16 [i_0 - 2]) : -2))) ? var_6 : ((0 ? -var_0 : (((var_10 ? var_5 : (arr_12 [i_0 + 1] [2] [i_0 + 1]))))))));
                        var_25 = (max(var_25, ((((((max(0, var_12)))) ? (((((var_1 / (arr_0 [i_0])))) ? (arr_9 [i_5] [2] [i_4]) : 0)) : ((~(arr_1 [i_5] [i_3 + 1]))))))));
                        var_26 &= ((((((var_16 <= (arr_7 [6] [i_0] [i_0]))))) != (arr_13 [i_0] [6] [0])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                arr_31 [i_6] [i_6] [i_6] [i_6] [i_6] = (min((((var_2 >= (max((arr_11 [i_0] [i_6] [i_0]), var_10))))), ((1 >> (var_6 - 2850038991)))));
                                var_27 = (~((0 >> (((arr_22 [i_9] [i_8]) + 1973265775)))));
                                arr_32 [i_6] [i_7] [i_8] [i_6] = ((((1 ? (arr_16 [i_0 - 3]) : ((1 - (arr_30 [i_0] [13] [i_0])))))) ? (arr_1 [i_0 + 1] [i_0 + 1]) : 1);
                            }
                        }
                    }
                    var_28 ^= ((((var_7 ? (arr_27 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 2]) : (arr_30 [8] [i_0 - 1] [i_0 - 1])))) || (arr_13 [i_0] [i_0] [0]));
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                arr_38 [i_6] = (((1 - 1) ? ((var_11 ? (arr_24 [i_10 + 1] [i_0 + 1]) : 1)) : ((var_4 >> (var_6 - 2850038984)))));
                                arr_39 [i_0] [i_6] [i_0] = (((((-((((arr_6 [4]) || var_6)))))) || ((((1 * var_0) ? (arr_25 [i_10 - 3] [7] [i_10] [7] [i_11] [i_11]) : (arr_2 [i_0 - 3]))))));
                            }
                        }
                    }
                }
            }
        }
        var_29 &= ((((((arr_20 [i_0 + 2] [i_0]) ? (arr_20 [i_0 - 3] [i_0]) : (arr_8 [i_0 - 3] [i_0 + 2] [i_0 + 1] [i_0 - 1])))) <= var_2));
    }
    var_30 = var_13;
    #pragma endscop
}
