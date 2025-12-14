/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_14 = (65280 | 1778091541);
                        arr_12 [5] [5] [i_0] = (arr_5 [i_0] [10]);
                    }
                    var_15 = ((535083291 ? 12550 : (((arr_10 [i_2] [i_2] [i_2] [i_2]) | 4025939034754584071))));
                    var_16 = 98;
                    var_17 = (((((((arr_5 [i_2] [i_0]) ? (arr_8 [i_2] [i_1]) : (arr_8 [i_0] [i_0]))) ^ (((arr_2 [5]) ? var_12 : var_12))))) ? ((22 ? (!var_10) : (arr_11 [3] [14] [i_0] [i_0]))) : ((6714 ? 65535 : ((136512164 ? 2008397999 : 8)))));
                }
            }
        }
    }
    var_18 = (~var_11);
    #pragma endscop
}
