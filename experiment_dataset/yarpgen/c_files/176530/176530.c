/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (min(var_11, var_3));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 = (1 < 1);
                    arr_9 [i_0] [i_0] = ((((max(35, 12288))) ? ((min(-4096, (arr_3 [i_0 - 2] [i_0 - 2])))) : (((65535 >= var_8) ^ var_1))));
                    var_19 = (min(var_19, (((((1 / (arr_5 [i_0] [2]))) & (((((max(var_6, 1)) == (((max(1, 34994)))))))))))));
                    arr_10 [i_0] [14] [i_2] = ((((((arr_6 [i_0 + 1] [i_0 + 1] [i_0 - 1]) * (arr_6 [i_0 + 1] [i_0 + 1] [i_0 - 1])))) / ((-var_3 ? (1 * 4738829297085304545) : var_13))));

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_20 += (+(((((arr_3 [i_0 - 1] [i_0 - 1]) ? var_3 : (arr_8 [i_0] [7] [i_2] [i_0]))))));
                        var_21 += (max(-1821212449, (((arr_11 [i_0 + 1] [3] [i_3 - 1] [3] [i_3 + 2]) - 10292175413237708169))));
                        var_22 += (max((-127 - 1), -13756));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_23 = var_5;
                        var_24 = (((arr_2 [i_2]) + (min((((arr_7 [i_0]) - var_2)), (var_12 ^ 1)))));
                        var_25 = ((-(min(var_14, (min(1, (arr_0 [i_1])))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
