/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 *= ((623892263354452935 && (((-((1 ? 1 : 1)))))));
                    arr_9 [i_0] [i_2] [i_2] [i_0] = -8460296829916905284;
                }
            }
        }
        var_12 = 1;
        var_13 = -880;
    }
    var_14 = var_5;
    var_15 = (!var_4);
    #pragma endscop
}
