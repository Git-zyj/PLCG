/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_9;
    var_11 = var_7;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = (max((min(0, (4294967295 - 0))), ((max(1, (arr_0 [i_0]))))));
        var_12 = (min(((15613119427288791528 * (arr_1 [i_0] [i_0]))), (((var_6 / (-9223372036854775807 - 1))))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_13 *= var_5;
                        var_14 -= var_3;
                        arr_16 [i_1] = (-16252928 / -var_5);
                    }
                }
            }
        }
        arr_17 [i_1] [i_1] = arr_9 [i_1];
    }
    #pragma endscop
}
