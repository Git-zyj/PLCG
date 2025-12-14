/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= ((var_9 & ((max(((var_4 ? var_4 : var_5)), -var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = ((+(max((((arr_5 [i_2]) & (arr_2 [3] [3]))), (((var_8 ? 9223372036854775799 : (arr_4 [i_2] [13]))))))));
                    var_16 = (max(var_16, (arr_5 [4])));
                }
            }
        }
    }
    #pragma endscop
}
