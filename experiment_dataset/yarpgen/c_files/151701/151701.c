/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_13 ^= ((~(((7782143211706563972 & var_7) ? (!var_5) : (arr_1 [i_1])))));
                var_14 = (max(7782143211706563972, -119));
                var_15 = ((-(max(10664600862002987644, 18146))));
                arr_6 [i_0] [i_0] [1] = (arr_2 [i_0] [i_0] [i_1]);
                arr_7 [i_0] [i_1] [i_1] = (min((min(7782143211706563972, 2275380020754956376)), (((0 ? var_8 : (arr_5 [i_0 - 1]))))));
            }
        }
    }
    var_16 = var_1;
    #pragma endscop
}
