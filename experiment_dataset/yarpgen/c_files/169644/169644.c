/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = -1;
                    var_17 = (((min(1963742391, 842467460))));
                }
            }
        }
    }
    var_18 = (15186430283567197457 > var_16);
    #pragma endscop
}
