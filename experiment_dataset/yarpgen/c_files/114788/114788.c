/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((var_0 ? ((var_1 ? var_5 : 124)) : var_6)) ^ (var_11 * 8)));
    var_14 = (((-((var_2 ? 32767 : var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = ((33776997205278720 | (((~(arr_6 [i_0]))))));
                    var_16 = (((arr_2 [i_0 - 1]) ? ((-(arr_2 [i_0 - 1]))) : (((arr_2 [i_0 + 1]) ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 - 2])))));
                    var_17 = (((arr_6 [i_0 - 2]) % (((arr_6 [i_0 + 1]) << (((arr_6 [i_0 - 1]) - 51))))));
                }
            }
        }
    }
    #pragma endscop
}
