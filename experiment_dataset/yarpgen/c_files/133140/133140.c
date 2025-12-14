/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((max(var_8, var_0))) ? var_14 : ((var_2 ? 18446744073709551613 : var_8))))) || (var_1 <= var_12)));
    var_17 &= var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (max((arr_1 [i_0]), (((!(-2147483647 - 1))))));
                arr_6 [23] = (var_11 | (arr_1 [i_0]));
            }
        }
    }
    var_18 = (max(var_18, var_12));
    #pragma endscop
}
