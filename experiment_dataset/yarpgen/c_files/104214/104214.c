/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_1);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = 4265236543;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_13 = (max(var_13, 27));
                            var_14 = ((~(max(((8 ? var_1 : var_2)), (~var_4)))));
                        }
                    }
                }
            }
        }
    }
    var_15 = (max(var_15, var_5));
    #pragma endscop
}
