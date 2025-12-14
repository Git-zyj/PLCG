/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 4;
    var_14 = (max(var_8, ((121 ? var_8 : var_1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((~(arr_1 [i_1 + 4] [i_1 + 2]))));
                var_15 *= ((((max((arr_1 [i_0] [i_0]), var_7))) ? (((arr_1 [i_0] [i_1 + 2]) ? 2579898128835447543 : (arr_1 [10] [i_1 + 4]))) : (((~(arr_1 [i_0] [i_1 + 2]))))));
                arr_5 [i_0] = ((247 ? ((max(60724, 6437))) : 62));
            }
        }
    }
    #pragma endscop
}
