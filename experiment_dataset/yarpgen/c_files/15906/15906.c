/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((((max(4203116384, var_12)) * (!-1675399193987675438))), (((((max(var_9, 7237001961764897834))) ? (!var_15) : (~1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_17 = (((-67 || 906089053) < ((-(arr_3 [i_1 + 1] [i_1 - 1])))));
                var_18 = (min(var_18, -11611));
                arr_4 [i_0] [i_1] = (max(((((arr_0 [i_0]) < (arr_0 [i_0])))), 0));
                arr_5 [i_1] [i_1 + 1] = ((((((((-(-127 - 1)))) ? (((arr_1 [i_0]) ? (arr_3 [4] [2]) : 1)) : (max((arr_3 [i_1] [i_0]), 125))))) | (((arr_1 [i_1 - 1]) ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 - 1])))));
            }
        }
    }
    #pragma endscop
}
