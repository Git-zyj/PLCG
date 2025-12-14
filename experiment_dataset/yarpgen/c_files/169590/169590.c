/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 32767;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_21 *= 1412;
                    var_22 = -21698;
                    arr_7 [i_0] [i_0] [i_0] |= ((-11138 ? (min(var_6, -1743151967)) : (max((-32767 - 1), (max(-4741, 655676445))))));
                }
            }
        }
    }
    #pragma endscop
}
