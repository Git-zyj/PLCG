/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_6 ? var_0 : (~3))) | 0));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_19 |= -4465289521201345675;
                                arr_13 [i_0] [i_0] [5] [i_3] = 1;
                                var_20 = (arr_2 [i_1 + 1] [i_0 + 1]);
                                arr_14 [i_0 + 1] [i_1] [i_2] [i_1] [i_4] = (((((arr_5 [i_0 + 1] [i_0 - 1] [i_1 + 2]) ? (arr_5 [i_0 + 1] [i_0 + 1] [i_1 + 1]) : 64759)) < (arr_5 [i_0 + 1] [i_0 + 1] [i_1 + 2])));
                                var_21 = (min((arr_7 [i_1 + 2] [0] [i_1 + 2]), (((arr_8 [i_1] [i_4]) ? (arr_8 [i_4] [i_2]) : (((8968127740534573159 >= (arr_9 [i_0] [i_1] [i_1] [i_2] [i_3] [3]))))))));
                            }
                        }
                    }
                    var_22 = (arr_5 [i_0 - 1] [i_1] [i_1 + 1]);
                    var_23 = var_3;
                }
            }
        }
    }
    var_24 |= var_17;
    var_25 = (min(var_16, ((var_4 ^ (~10489)))));
    #pragma endscop
}
