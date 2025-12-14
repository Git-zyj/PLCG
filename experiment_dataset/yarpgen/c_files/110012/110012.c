/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110012
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
                    arr_9 [i_2] [i_0] [i_2] = -995399003;

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_19 = (((arr_1 [i_3 + 1]) && (((arr_14 [5] [9] [i_1] [i_2] [i_3] [i_3] [i_4]) || var_18))));
                            arr_15 [i_0] [i_0] [7] [i_2] [i_3] [i_4] = (arr_1 [2]);
                        }
                        var_20 = (((arr_3 [i_3 - 1] [i_3 + 1]) ? (arr_3 [i_3 - 1] [i_3 - 1]) : (arr_3 [i_3 + 1] [i_3 - 1])));
                        var_21 = -995398980;
                        var_22 = (arr_0 [i_3 + 1]);
                        var_23 = ((var_5 == (var_18 & -995399003)));
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_20 [i_5] = ((var_8 | (((arr_0 [i_5]) ? -918871317 : var_14))));
        arr_21 [i_5] |= var_8;
        var_24 = 23887;
    }
    #pragma endscop
}
