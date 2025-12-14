/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_9 ? 39580 : var_7));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_21 = (min(18941, 18925));
        arr_2 [i_0 + 2] [i_0] = (min((~18924), ((-(max(-6124636026326471447, 65535))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_22 = ((((arr_9 [i_1] [i_0 - 1] [i_1]) ? (arr_4 [i_1] [i_1]) : (((min(var_19, var_10)))))) | var_7);
                    var_23 = max((max(((~(arr_1 [i_0]))), (arr_0 [i_2 + 1]))), ((var_1 ? (arr_5 [10] [12] [i_2 + 1]) : (((arr_5 [i_0] [12] [i_0]) / var_9)))));
                }
            }
        }
    }
    #pragma endscop
}
