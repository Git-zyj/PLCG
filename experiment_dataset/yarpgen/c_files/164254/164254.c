/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((!var_1) < ((((var_4 ? 2147483647 : 2147483647))))));
    var_13 = var_0;
    var_14 = (min((min((((var_2 ? 2147483644 : var_0))), -4294967295)), -var_6));
    var_15 = (min(var_15, ((min(-124, 2147483629)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 -= -1;
                    var_17 = 223;
                    arr_7 [i_2] [i_0] [i_0] = (((-108000521 ? (arr_5 [i_0 + 1]) : 4095)));
                }
            }
        }
    }
    #pragma endscop
}
