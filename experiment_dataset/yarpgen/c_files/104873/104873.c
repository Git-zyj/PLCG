/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1;
    var_18 |= var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_7 [i_1] = (-(28 < 1));
                arr_8 [i_0] [i_0] = ((!(arr_6 [i_0] [i_0 - 1] [i_0])));
            }
        }
    }
    #pragma endscop
}
