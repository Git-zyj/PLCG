/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = (!-2010279117);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_19 = -1170487160739127658;
                            arr_9 [i_0] [i_1] [i_2 + 1] [i_0] [0] [i_3] &= -16;
                        }
                    }
                }
            }
        }
    }
    var_20 |= (--2097151);
    var_21 = (max(var_21, (((~(!-17276256912970423958))))));
    #pragma endscop
}
