/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1 - 1] = (((arr_4 [i_0] [i_1]) ? ((-(((((arr_0 [9]) + 9223372036854775807)) << (24926 - 24926))))) : (!9223372036854775808)));
                var_17 -= ((min((max(16147290747604113239, 34295)), ((((arr_0 [i_1]) ? (arr_3 [i_0] [i_1] [5]) : (arr_2 [i_0] [12])))))) / (((arr_2 [i_1] [i_0]) ? (((arr_1 [i_1]) ? (arr_3 [i_1] [i_1] [i_0]) : 0)) : 70)));
                var_18 |= ((2300661625 << (7081 - 7058)));
            }
        }
    }
    var_19 |= var_13;
    var_20 += ((!((((((var_6 ? var_6 : var_0))) ? 2147483647 : ((max(31240, 61007))))))));
    #pragma endscop
}
