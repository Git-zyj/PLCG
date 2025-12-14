/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = 1195878722;
                var_12 = ((((min((arr_1 [i_1 - 2] [i_1 - 1]), ((((arr_4 [i_1]) ? -1310413892 : (arr_5 [i_0]))))))) ? (min((min((arr_5 [i_0]), -901774439)), ((33178 ? 1195878743 : 1195878743)))) : ((1195878736 ? (arr_3 [i_0]) : (arr_3 [i_1 - 2])))));
            }
        }
    }
    var_13 += var_9;
    var_14 ^= var_2;
    var_15 -= ((var_4 ? var_10 : ((23 ? 4294967266 : 4294967289))));
    var_16 = ((var_3 ? 4119183397386026632 : var_10));
    #pragma endscop
}
