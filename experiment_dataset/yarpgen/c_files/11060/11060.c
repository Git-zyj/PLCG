/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_2] [3] [i_1] [i_2 + 1] = (((arr_3 [i_2 - 1] [i_2 - 2] [i_2 + 1]) ? (((!(arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 2])))) : ((((arr_6 [i_2 + 1] [i_2 - 2] [i_2 + 1] [i_2 - 1]) > (arr_3 [i_2 - 1] [i_2 - 2] [i_2 - 1]))))));
                    var_16 = ((var_12 ? (~var_15) : ((-(~1086077222846143850)))));
                    var_17 = (arr_8 [i_2 + 1] [i_2 - 1]);
                    var_18 = ((((!(arr_8 [i_2 - 2] [i_2 + 1]))) ? ((-(arr_0 [i_0] [i_2 - 2]))) : ((((arr_5 [i_2 - 2] [12] [i_1]) >> (var_5 - 8505526969189097747))))));
                    var_19 -= (((((arr_0 [i_0] [i_2 - 1]) ? (arr_0 [i_0] [i_2 + 1]) : (arr_0 [i_0] [i_2 - 1]))) % -65532));
                }
            }
        }
    }
    var_20 |= var_9;
    #pragma endscop
}
