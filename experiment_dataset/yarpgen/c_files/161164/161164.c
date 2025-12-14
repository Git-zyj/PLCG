/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = var_10;
                var_16 = (min((arr_4 [8] [i_1] [i_0]), ((!(arr_5 [i_0])))));
                var_17 = (((arr_1 [i_0]) ? var_5 : (((min((!52702), var_0))))));
            }
        }
    }
    var_18 = (max(var_3, (min(var_15, -2666554245))));
    #pragma endscop
}
