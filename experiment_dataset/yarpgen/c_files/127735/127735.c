/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(1, ((var_7 >> (18446744073709551604 - 18446744073709551589)))));
    var_16 &= 3068;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 |= ((min(var_11, (arr_3 [i_2 + 1] [i_2 - 2] [i_0]))));
                    var_18 = (((((arr_3 [i_1] [i_2 - 2] [i_2]) ? 18446744073709551582 : 154)) + (arr_3 [i_0] [i_2 - 2] [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
