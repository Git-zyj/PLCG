/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_7 << (((max(var_7, (~-8485840291838609177))) - 8485840291838609173))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = ((4179441209 ? (((((arr_6 [i_1] [i_1] [1] [i_0]) != (arr_4 [i_0] [i_1] [i_2]))))) : (2069191678 - var_10)));
                    var_21 = (max((max(-113, 103)), (((arr_5 [i_2 + 1] [i_1] [9] [9]) ? (arr_4 [i_0] [i_1] [i_0]) : (arr_5 [i_0] [i_0] [i_2] [i_2 - 1])))));
                    var_22 |= min((((((1 + (-32767 - 1))) | (4179441201 && 4179441209)))), ((115526078 << (-1850304555 - 2444662738))));
                }
            }
        }
    }
    #pragma endscop
}
