/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((min(-22, 120)))) & (arr_0 [i_0 - 1])));
                var_10 = ((110 ? -3596976128765002567 : 11092729941552368747));
                arr_6 [i_0 + 1] [i_1] [i_1] = (min(0, (max((arr_4 [i_0 + 1]), 3596976128765002566))));
                var_11 = (((max((((arr_2 [i_0 + 1] [i_1]) ? 471656724 : 3331603949428978891)), ((min((arr_1 [7]), 48342))))) == (arr_0 [i_1])));
                arr_7 [i_0] [i_1] = ((((!(arr_0 [i_0 + 1]))) && ((min((arr_2 [i_0 + 1] [i_0 + 1]), (arr_2 [i_0 - 1] [i_0 + 1]))))));
            }
        }
    }
    var_12 -= (max((min(1595538922, (max(var_1, 0)))), ((max((-4030819142756449740 ^ var_0), 10709)))));
    var_13 = ((4030819142756449758 || ((max(1120130173, ((max(1, 37))))))));
    #pragma endscop
}
