/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_8 [i_1] = (!1);
                arr_9 [3] [3] |= ((~((~((~(arr_4 [i_1] [2] [i_0])))))));
            }
        }
    }
    #pragma endscop
}
