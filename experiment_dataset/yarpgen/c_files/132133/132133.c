/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((!-4493346270034810027) ? ((var_15 ? var_14 : var_14)) : var_13));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1 - 3] [i_1] = 3919754854;
                arr_5 [i_1] [i_1] = ((9223372036854771712 & ((((!(arr_2 [i_1 + 2] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
