/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (((1 ? 0 : 3594829910)))));
                    var_18 = (max(var_18, var_4));
                    arr_7 [i_0] = ((!(((14 ? (!-9223372036854775782) : 28652)))));
                }
            }
        }
    }
    #pragma endscop
}
