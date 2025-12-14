/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((10476952206107923706 ? 1125899906842608 : 100)), var_13));
    var_16 = (min(var_16, (~100)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, -92));
                    var_18 = (arr_8 [i_0] [i_2]);
                    arr_10 [i_0] [i_1] [i_0] = (!703734925);
                    arr_11 [6] [i_0] = ((max((min(-820878590343983229, -83)), (arr_1 [i_0]))));
                }
            }
        }
    }
    #pragma endscop
}
