/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_16 = min(((((min(var_11, var_11))))), (min((arr_1 [i_0]), -8505684444077498750)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_17 -= 9223372036854775807;
                        arr_10 [i_0] [i_1] = (!-32766);
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] = (((min(0, 0))));
        arr_15 [i_4] = 0;
    }
    var_18 = var_0;
    var_19 = var_14;
    #pragma endscop
}
