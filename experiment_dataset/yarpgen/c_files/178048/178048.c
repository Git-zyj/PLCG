/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = max(var_1, ((((arr_2 [i_0] [i_1]) == 89))));
                var_15 = var_10;
                var_16 = (!-4471);
            }
        }
    }
    var_17 = var_5;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                arr_15 [i_2] [i_2] [i_2] = ((~((((arr_8 [i_3]) == (min(12458743753471162962, -4471)))))));
                var_18 = (max(var_18, ((min((((arr_13 [i_2]) ? (arr_9 [i_3]) : -4471)), (arr_9 [i_2]))))));
            }
        }
    }
    var_19 = var_0;
    #pragma endscop
}
