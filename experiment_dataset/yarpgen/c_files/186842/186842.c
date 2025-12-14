/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_0 ? (min(var_15, var_17)) : var_6));
    var_20 = (((((3577111039 ? 4294967295 : (((var_2 ? var_6 : var_16)))))) ? -100 : (min((-32767 - 1), 4294967286))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] [20] [8] [i_0] = (~(min((((arr_6 [i_0]) ? (arr_0 [i_0]) : (arr_7 [i_1] [i_2]))), var_11)));
                    var_21 = (max(-269194423, -23124));
                    var_22 = ((2 ? -7118632950631920827 : 2895276351));
                }
            }
        }
    }
    #pragma endscop
}
