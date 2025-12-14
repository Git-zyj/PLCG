/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((((var_15 ^ var_2) ? (!var_4) : ((96 ? var_8 : var_3))))), var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (arr_4 [i_0] [i_1])));
                arr_5 [i_0] [i_0] = (!(((17665046904357138043 + (((~(arr_1 [i_1]))))))));
            }
        }
    }
    var_21 = var_12;
    #pragma endscop
}
