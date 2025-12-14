/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = (min((((-2147483647 - 1) ? (min(3350257335930571811, 15096486737778979804)) : -1164327818972631524)), (arr_3 [i_2 - 1] [7])));
                    arr_7 [i_0] [i_1] [i_0] = var_2;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_19 = (((((-(((arr_9 [i_0] [i_0] [8] [i_3] [i_3] [2]) ? (arr_4 [i_2] [i_3]) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (max(3154634167, (arr_8 [i_2 - 1] [i_2 - 1] [i_3] [1] [i_2 - 1]))) : ((min((((arr_3 [i_0] [i_1]) + (arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1]))), (~32542))))));
                                arr_13 [i_0] [i_4] = (max(((3350257335930571804 + ((((arr_2 [i_0] [i_0] [i_0]) ? 1 : 33002))))), ((max(-32767, 1)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [1] [i_5] [12] [i_0] [i_5] &= (((((-5587155137883225829 ? 2889006817 : 31))) ? ((var_0 ? ((192 ? (arr_11 [i_0] [i_0] [i_1] [i_0] [0] [i_6] [3]) : (arr_17 [i_5]))) : (arr_10 [i_0] [i_1] [12] [i_5] [3] [i_6] [i_0]))) : (arr_4 [i_0] [i_0])));
                                var_20 = (min((min(6673786360590730889, 12489)), ((min(((5993714278490679183 ? -1 : 20721)), ((2048 ? (arr_16 [i_0] [i_1] [i_2] [i_1] [i_5] [i_6] [i_6]) : (arr_19 [8] [i_1] [8] [i_1] [i_1] [i_1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 &= ((min(var_3, var_16)));
    var_22 = (min(var_22, var_12));
    #pragma endscop
}
