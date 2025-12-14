/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = var_3;
                    var_18 ^= ((arr_1 [i_0]) ? ((((min((arr_6 [i_0]), var_3))) ? (~var_12) : ((12 ? var_5 : 14222)))) : 4294967295);
                    arr_9 [i_0] [i_1] [6] = ((-(min((((arr_8 [i_0] [14] [14] [i_2]) ? (arr_4 [i_1] [i_1] [i_2]) : var_16)), (((arr_8 [i_0] [0] [i_2] [i_2]) ? var_12 : (arr_5 [i_1])))))));
                    arr_10 [13] [i_1] [i_0] = 57811;
                }
            }
        }
    }
    var_19 = 0;
    var_20 = var_5;
    var_21 &= var_0;
    #pragma endscop
}
