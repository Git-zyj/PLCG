/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_1] = ((-((2293287224 ? -32751 : 2293287224))));
                    arr_7 [i_0 + 1] [i_0] [i_0] [i_0 + 1] = (max(((min(-59, 1))), -4088));
                }
            }
        }
    }
    var_16 = ((var_14 ? var_5 : ((~(var_4 ^ var_4)))));
    var_17 -= var_7;
    #pragma endscop
}
