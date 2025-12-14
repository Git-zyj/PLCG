/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    var_20 = (((((((127 ? 3 : 226))) ? ((var_4 ? (arr_8 [i_0] [i_2 - 1]) : -214930974009219893)) : -0))) ? ((-(min(var_17, -4576083441482325666)))) : (((~((var_0 ? (arr_7 [i_1] [i_2]) : 20679))))));
                    var_21 = (min(var_21, (((!(((((((arr_4 [i_2] [i_1] [i_0]) ? var_15 : 3))) ? ((~(arr_5 [9]))) : ((((arr_4 [0] [4] [i_2 + 1]) ? (arr_7 [i_1] [i_1]) : var_14)))))))))));
                }
            }
        }
    }
    var_22 = (min(var_22, ((max(((var_2 ? 3185011582 : var_16), (~3635)))))));
    #pragma endscop
}
