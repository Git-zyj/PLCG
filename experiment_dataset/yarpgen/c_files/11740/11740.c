/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    var_14 = (~15450066577199231664);

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_15 += (arr_1 [i_0]);
        var_16 = (min(var_16, (((-8 ? 19 : 116)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 = ((16 && (((-(65526 && 2996677496510319948))))));
        var_18 = (arr_3 [i_1]);
        var_19 = ((((max((arr_3 [i_1]), 222))) ? 2996677496510319957 : (arr_3 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_20 = (min(var_20, ((min((((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_3]))), (arr_4 [i_1]))))));
                    var_21 = 245;
                }
            }
        }
    }
    #pragma endscop
}
