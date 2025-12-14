/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 75;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = 11291610429413913514;
                arr_4 [i_1] [i_1] [i_0] = 24576;
                arr_5 [i_0] [i_0] = -1949010160;
            }
        }
    }
    var_21 = 0;
    var_22 = (max((min(637769379, (max(7155133644295638101, 132)))), -40));
    #pragma endscop
}
