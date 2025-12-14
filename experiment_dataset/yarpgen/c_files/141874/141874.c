/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_7 ^ ((((var_4 << (var_3 - 1609594587)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = ((!((max(var_11, -var_0)))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_15 = 32919;
                                var_16 ^= (((max((4294967292 / 4294967295), (arr_7 [i_0] [i_1] [2] [2]))) / (arr_1 [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((2891019060 ? ((-(-1749870849 / 990043172))) : (((var_8 - var_1) ? -var_2 : var_11))));
    var_18 = ((((1908023230 ? var_10 : var_0)) ^ ((max(var_10, (var_11 - var_2))))));
    var_19 = (-((max((!var_4), var_12))));
    #pragma endscop
}
