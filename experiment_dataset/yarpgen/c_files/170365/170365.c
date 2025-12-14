/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((!((((max(2147483645, 2147483645))) > ((var_1 >> (var_13 + 23728))))))))));
    var_18 = (min(((~((var_0 << (var_8 - 31919))))), var_12));
    var_19 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_8 [i_0] [18] [8] = (!-6199003016198205604);
                var_20 |= arr_5 [3] [i_1];
                arr_9 [i_1] [i_1] [i_0] = (~-1643840854);
            }
        }
    }
    #pragma endscop
}
