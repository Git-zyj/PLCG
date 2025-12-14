/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((max(230, -658239977)), -1656464629));
    var_17 = var_15;
    var_18 |= var_12;
    var_19 = (~var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = (((min(12354408798171820778, 22)) - (((((min(-298910970106062272, (arr_4 [i_0 + 1] [i_0] [i_0])))) ? var_4 : (3909106761148110019 / -3909106761148110020))))));
                arr_5 [i_0] [i_0] = (((((((arr_2 [9] [i_0] [i_0 + 1]) >= (arr_0 [i_0 + 1] [i_0 + 1])))) <= var_8)));
                arr_6 [i_0] = ((-(arr_1 [10])));
                arr_7 [i_0] = 233;
                var_21 ^= ((((arr_2 [i_0] [i_0 + 1] [i_1 - 1]) << (((arr_3 [0]) - 18350585127444475882)))));
            }
        }
    }
    #pragma endscop
}
