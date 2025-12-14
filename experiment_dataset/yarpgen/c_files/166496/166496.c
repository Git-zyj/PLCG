/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((min(2147483647, 0)) == 28124));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 = 103;
                    var_12 = (((!0) - (13 == 2158821100716554425)));
                    var_13 = arr_3 [i_0];
                }
            }
        }
    }
    var_14 = var_0;
    #pragma endscop
}
