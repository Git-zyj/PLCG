/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    var_21 += var_15;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_22 = (arr_0 [i_1]);
                    arr_9 [i_0] [i_1] [i_1] = (min((arr_6 [i_0] [i_0] [i_1]), var_4));
                    arr_10 [i_0] [i_1] [i_1] [i_0] = (32767 + -32744);
                }
            }
        }
    }
    var_23 = ((var_11 * (~var_5)));
    #pragma endscop
}
