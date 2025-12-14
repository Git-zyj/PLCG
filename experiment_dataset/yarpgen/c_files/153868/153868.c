/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -32764;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((((((((var_3 ? 14017 : (arr_4 [1] [i_1])))) ? (min((arr_4 [i_0] [i_1]), -114)) : (min(18446744073709551609, 32756))))) || var_7));
                var_11 = ((((min(((4634505838097061083 ? (arr_2 [i_1] [i_1] [i_0]) : var_0)), (max((arr_4 [16] [i_1]), var_0))))) ? ((((((arr_1 [i_0]) - 32767))) ? ((3 ? var_7 : var_2)) : 18446744073709551615)) : (min(((~(arr_2 [i_1] [i_0] [i_0]))), var_6))));
            }
        }
    }
    var_12 = ((min(((max(var_8, -112))), var_5)));
    #pragma endscop
}
