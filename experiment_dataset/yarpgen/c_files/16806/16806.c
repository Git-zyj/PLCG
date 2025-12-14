/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_9);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((-6049745652761997091 ? (((-(32767 > 22)))) : (arr_4 [i_2]))))));
                    var_15 = (min((arr_0 [i_0]), (arr_5 [3] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
