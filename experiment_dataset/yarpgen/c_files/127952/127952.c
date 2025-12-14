/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = ((+(((arr_5 [i_0] [i_1] [i_2]) % (arr_5 [i_0] [i_1] [i_2])))));
                    var_13 = (max((max((arr_6 [i_1]), ((var_11 ? var_8 : var_6)))), (max((max(var_6, (arr_3 [i_2]))), 32))));
                    arr_9 [i_1] [i_1] = 1;
                    arr_10 [20] [i_1] [i_1] [20] = ((~(max((~var_5), (max(var_5, var_6))))));
                }
            }
        }
    }
    var_14 = var_9;
    #pragma endscop
}
