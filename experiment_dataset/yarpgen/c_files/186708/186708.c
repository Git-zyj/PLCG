/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = ((~(22460 & var_7)));
                    arr_8 [i_0 + 3] [i_0] [i_1] [14] = (min((max(43075, 1)), ((-(var_10 + 19569)))));
                }
            }
        }
    }
    var_13 += (max((!32607), ((-(min(var_0, 199))))));
    var_14 = 4294967288;
    var_15 *= var_4;
    var_16 = (-22460 + var_4);
    #pragma endscop
}
