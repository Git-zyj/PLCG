/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = (1429046483 ^ 0);
                    var_20 = (min((((~var_2) % (((arr_2 [i_1] [i_0]) ^ 18446744073709551612)))), ((((2268697315 ? var_9 : var_15)) | (min(var_15, (arr_1 [i_0] [i_1])))))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = 20;
                }
            }
        }
    }
    var_21 = var_16;
    #pragma endscop
}
