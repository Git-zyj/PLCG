/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = -16592396931130951947;
                arr_6 [i_0] [i_0] [i_1] = (((((~(min((arr_3 [i_0] [i_0]), 1854347142578599654))))) ? (((arr_4 [i_0] [i_1] [i_1]) ? (arr_4 [i_0] [i_0] [i_0]) : 1854347142578599668)) : (((var_1 ? ((1 & (arr_4 [i_1] [i_1] [i_1]))) : (arr_1 [i_0] [i_1]))))));
                var_16 |= (min((arr_4 [i_0] [i_0] [i_0]), ((16592396931130951947 ? 17792853093931767123 : (arr_3 [i_0] [i_1])))));
            }
        }
    }
    var_17 = (~var_2);
    #pragma endscop
}
