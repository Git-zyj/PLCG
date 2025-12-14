/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (arr_2 [i_1] [i_1]);
                var_21 += -1236830315;
                arr_6 [i_1] [18] [i_1] = (((~32512) ? ((((!((((arr_4 [i_1]) ? 8784175841180803686 : (arr_0 [i_0] [i_1])))))))) : ((~(min((arr_1 [i_0] [i_1]), 2048))))));
            }
        }
    }
    var_22 = ((~(((((2254769601 ? var_11 : 0))) ? var_14 : 8))));
    var_23 = var_8;
    #pragma endscop
}
