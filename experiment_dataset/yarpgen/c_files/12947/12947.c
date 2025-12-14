/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max((min(var_1, ((max(var_8, 42))))), var_8);
    var_13 = ((var_9 ? 593346893 : (~55)));
    var_14 ^= var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = 535374188;
                    var_16 = (-9223372036854775807 - 1);
                }
            }
        }
    }
    var_17 = var_7;
    #pragma endscop
}
