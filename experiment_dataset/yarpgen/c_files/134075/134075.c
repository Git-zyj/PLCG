/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((max(((43465 ? var_3 : (~127))), (((-8847141905634784422 ? (((-9223372036854775807 - 1) ? var_8 : var_4)) : (((22070 ? 246 : 43465)))))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 = (((((-((-6572576444595649791 ? 22070 : 22071))))) ? (((((0 ? (arr_7 [i_2] [i_1] [i_0]) : 171639085))) ? 7783 : (((arr_4 [i_2] [7] [i_0]) ? (arr_5 [i_2]) : (arr_2 [i_0]))))) : ((~((-12 ? 57751 : 4294967295))))));
                    var_12 = (~48);
                }
            }
        }
    }
    var_13 = -19;
    var_14 = (!var_7);
    #pragma endscop
}
