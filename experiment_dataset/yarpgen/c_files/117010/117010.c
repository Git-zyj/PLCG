/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((min((max(29116, 26)), (var_19 >= 189)))) ? -15099 : var_17);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3 - 2] [i_4] = var_12;
                                arr_13 [i_0] [i_1 + 1] [i_2 - 2] [i_1 + 1] [i_0] = (min(var_12, (((((min(var_6, 72))) > ((var_2 ? var_9 : var_5)))))));
                                arr_14 [i_0] [16] [i_2] [i_2 + 1] [i_2] [i_0] [i_0] = ((((((4966557530574391861 ? -23775 : -64))) >= (min(var_6, -2809595922558324739)))) ? (((min(var_12, var_6)) / var_10)) : (((max(var_19, (arr_3 [i_2 + 1]))))));
                                arr_15 [i_0] [i_1] [11] [i_3] [i_0] = (((((arr_7 [i_0] [i_2 - 1] [i_3 + 1]) / (arr_7 [i_0] [i_2 - 2] [i_3 + 1]))) <= ((max((arr_7 [i_0] [i_2 - 1] [i_3 - 2]), var_14)))));
                                arr_16 [i_4] [1] [i_2] [1] [i_0] &= var_11;
                            }
                        }
                    }
                }
                arr_17 [i_0] = (((((77 ? 1 : -1989270721))) ? -52 : 42));
                arr_18 [14] [14] &= -1989270721;
                arr_19 [i_0] = (((((((arr_5 [i_0] [i_1 + 1] [i_1 + 1]) > (var_11 >> 15))))) - ((((max(var_3, var_17))) ? (arr_6 [i_0] [1] [i_0]) : ((5052141704784411909 >> (var_17 + 6306797669670258)))))));
            }
        }
    }
    var_21 |= ((var_14 << (((min((min(354544013624084261, 1989270720)), ((max(-26529, var_6))))) - 1989270707))));
    #pragma endscop
}
