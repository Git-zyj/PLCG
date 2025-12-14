/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 = (((max(0, (((4294967295 != (arr_6 [i_2] [i_2]))))))));
                    var_12 = var_1;
                }
            }
        }
    }
    var_13 = var_9;
    var_14 = ((((max((max(49, var_10)), -25154))) ^ ((var_10 ? var_2 : var_8))));
    #pragma endscop
}
