/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_15 = (((arr_5 [i_0 + 4] [i_0 + 3]) | (arr_5 [i_0 - 3] [i_0 - 3])));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (((((9223372036854775802 ? (arr_0 [i_0]) : 0))) ? (var_5 || -29473) : ((var_1 ? (arr_0 [i_2]) : var_13))));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 10;i_3 += 1)
                {
                    arr_13 [i_1] [i_0] = var_10;

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_18 [i_0] [i_1] &= (arr_2 [i_0] [i_0] [i_0]);
                        arr_19 [i_4] [i_4] [i_1] [i_0] [i_4] [i_4] = (arr_6 [i_0] [i_0] [i_3 - 3]);
                    }
                }
                arr_20 [i_0] = 152227964;
            }
        }
    }
    var_16 = (min(var_16, (((((((var_5 << var_9) ? ((2815933283 ? 0 : var_6)) : ((var_11 ? var_10 : 234))))) || var_6)))));
    #pragma endscop
}
