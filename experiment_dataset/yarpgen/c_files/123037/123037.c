/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((min(0, -52))) ? ((min((max(var_16, -24704)), (((96 ? 45 : -93)))))) : (max(0, 7947104292399245248)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (min(19, 1740483517));
                var_20 |= (((arr_1 [i_0] [7]) ? (((((var_6 ? var_17 : (arr_1 [i_0 - 3] [4]))) < 237))) : ((((((arr_2 [6]) == 7))) + ((max(2, -15)))))));
            }
        }
    }
    #pragma endscop
}
