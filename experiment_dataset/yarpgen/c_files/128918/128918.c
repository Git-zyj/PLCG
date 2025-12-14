/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (arr_4 [i_1]);
                arr_5 [1] [i_0] = (min((min((arr_1 [i_0 + 1]), var_5)), var_7));
                var_16 *= ((((min((arr_4 [i_1]), 14149))) ? (((arr_2 [i_0 + 3]) ? 5 : -9223372036854775807)) : (((-((-(arr_0 [i_0 + 2]))))))));
            }
        }
    }
    var_17 = var_3;
    #pragma endscop
}
