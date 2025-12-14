/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    var_20 = (min(var_20, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 &= ((-(min((arr_9 [i_0] [i_1] [i_2 + 2] [i_3] [i_1]), 14010199441319844941))));
                                arr_14 [i_0] [i_0] [i_2] [i_2] [i_4] = (((max(((var_17 ^ (arr_4 [i_0] [i_1]))), (arr_0 [12])))) ? ((-1 ? (arr_8 [i_0] [11] [i_0] [i_0]) : var_10)) : (((arr_10 [i_0] [i_1] [i_2 - 1] [i_3] [i_4 + 2]) | 1)));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_1] [i_0] = ((11296800100620389333 ? (max((arr_8 [i_0] [i_1] [i_1] [i_1]), (arr_7 [i_0] [i_1] [i_1]))) : (((max((arr_0 [i_0]), (arr_0 [i_1])))))));
            }
        }
    }
    var_22 = (((var_18 + (((65535 ? var_10 : 18))))));
    #pragma endscop
}
