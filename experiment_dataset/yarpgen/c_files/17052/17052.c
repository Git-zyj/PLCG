/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = (min(-18446744073709551615, (min((!var_2), ((16 ? (arr_1 [i_0]) : 18446744073709551599))))));
                var_15 = (((~0) ? (((18446744073709551615 != 8905453602722426850) ? 16 : 3866860430849295591)) : 18359));
                var_16 = -18446744073709551599;
            }
        }
    }
    var_17 = (min(var_17, (((((((min(0, 1)))) ^ (min(var_5, 17))))))));
    var_18 = (~(((!-26931) ? var_0 : (min(18446744073709551615, 0)))));
    #pragma endscop
}
