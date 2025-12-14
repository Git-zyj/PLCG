/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [0] = (((((3706949229 ? 0 : ((((arr_0 [13] [i_0]) != 1)))))) ? (52627 + 588018067) : ((((max((arr_2 [1] [1]), (arr_1 [i_0]))))))));
        arr_4 [i_0] = var_8;
        var_16 = (min((max((((arr_1 [i_0]) / (arr_1 [i_0]))), 255)), (!var_1)));
        arr_5 [i_0] [i_0] = ((!(((3 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 23;i_4 += 1)
                {
                    {
                        var_17 = var_12;
                        var_18 = (min(var_18, (((var_2 & (arr_7 [i_4 - 4]))))));
                        var_19 = (var_14 ? 1 : 1);
                        var_20 = (arr_8 [i_1] [i_4 + 1]);
                        var_21 = var_6;
                    }
                }
            }
        }
        var_22 = ((60271 & ((7522742310957986036 ? 2500666742 : 52627))));
        arr_15 [i_1] = ((((((arr_6 [i_1]) ? 2447339560 : 251))) ? (arr_14 [i_1] [10] [i_1] [i_1] [10] [i_1]) : -1459751502));
    }
    var_23 = (!4242);
    var_24 = var_6;
    #pragma endscop
}
