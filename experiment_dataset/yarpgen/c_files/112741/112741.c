/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (min(var_18, -1420844520));
                var_19 = (((!(arr_5 [i_1 - 2] [i_1 - 2]))));
                var_20 = (max(var_20, ((((max(((max(-1420844520, 2063545287))), (~var_10))) & ((((arr_0 [i_1 - 1] [i_1 - 3]) ? (arr_0 [i_1 - 2] [i_1 + 1]) : -1420844546))))))));
            }
        }
    }
    var_21 = var_4;
    var_22 = (((var_3 ? (min(-1420844520, var_0) : var_3))));
    #pragma endscop
}
