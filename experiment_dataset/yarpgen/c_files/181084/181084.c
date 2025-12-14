/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] = (~-8);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = (111 << (-35 + 41));
                                var_18 = (max(var_18, ((((((arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_2 [i_3]) : var_13)) - ((var_10 >> (((arr_3 [i_0]) - 4263167091)))))))));
                                var_19 = ((-104 ? (arr_5 [i_0] [i_0]) : (2385616176 >= 1909351120)));
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        arr_20 [i_0] [i_1] [i_5] [i_6] = (arr_10 [i_0] [1] [6] [i_1]);
                        arr_21 [i_0] [i_1] [i_6] = ((12 ? 52 : 2385616177));
                        arr_22 [i_5] [i_1] [i_5] [i_5] [i_5] = (arr_13 [i_0] [i_5 + 2] [i_0] [i_6 + 1] [i_1] [i_6] [i_0]);
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_20 = (max(var_20, -5));
                        var_21 = (min(var_21, (arr_18 [i_7] [i_1])));
                        var_22 -= 0;
                        arr_25 [10] [i_7] = var_7;
                    }
                    var_23 = ((((((var_8 % var_6) ? var_3 : ((var_6 ? var_8 : (arr_23 [i_0] [i_0] [i_0] [4] [i_0])))))) ? ((var_10 ? (arr_4 [i_0] [4] [i_0]) : var_10)) : (((~(arr_2 [i_0]))))));
                }
                /* LoopNest 3 */
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_24 = min((max(39, 0)), 23061);
                                var_25 += (min((((arr_14 [i_8] [i_1] [i_8] [i_1] [i_1] [i_10 - 1] [i_9]) ? 35150012350464 : 1546035826)), ((((((arr_30 [i_1] [i_8] [i_9] [i_10 + 1]) ? var_15 : (arr_13 [1] [i_1] [i_8] [i_8] [i_9] [i_10] [1]))) <= (((arr_27 [i_0] [i_0] [i_8] [i_9]) - (arr_8 [i_0] [i_1] [i_1] [i_10]))))))));
                                var_26 = (arr_10 [i_0] [i_8] [i_9] [7]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = (max(var_27, var_13));
    var_28 = var_8;
    #pragma endscop
}
