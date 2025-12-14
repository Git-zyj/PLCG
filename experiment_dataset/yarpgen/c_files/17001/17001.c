/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (arr_0 [i_0]);
                    arr_8 [i_0] [i_0] [i_2] = ((((((~var_2) ? ((((arr_7 [8] [7] [7] [i_0]) ? var_6 : var_13))) : 1222217745663614214))) ? (!var_5) : (min(-24020, -3984347211725042920))));
                    var_15 *= var_0;
                }
            }
        }
    }
    var_16 = (~var_8);
    var_17 = (((max(var_10, var_10))));
    var_18 = ((~(max(((min(var_3, var_13))), (~481382625)))));
    #pragma endscop
}
