/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    var_18 = ((-((((9223372036854775800 ? var_6 : var_4)) % var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = ((-(arr_2 [i_0])));
                var_20 = (max(var_20, ((((((9223372036854775800 ? (arr_0 [4] [4]) : 7819585811463936289))) ? ((65532 << (((1 + 13268175532720506929) - 13268175532720506930)))) : 149)))));
                arr_6 [i_0] = (((((var_10 ? ((max(18502, (arr_5 [i_1])))) : (arr_2 [i_0])))) ? var_9 : -477795113));
            }
        }
    }
    #pragma endscop
}
