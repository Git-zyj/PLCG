/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [24] |= (min(76, 24477));
                arr_5 [i_0] [i_1] = (359380827 * 0);
            }
        }
    }
    var_18 = (((94426333 | 273833982) ? ((3935586469 ? 76 : 223)) : var_11));
    var_19 = (33 & 1495307534);
    #pragma endscop
}
