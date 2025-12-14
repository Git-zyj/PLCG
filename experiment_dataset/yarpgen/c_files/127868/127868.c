/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_9, 22788));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = ((((((arr_7 [i_2] [i_1 - 3] [i_1 + 2]) > (arr_5 [i_1 - 1] [i_1 - 3])))) < ((min((arr_7 [i_2] [i_1 - 3] [i_1 + 2]), (arr_7 [i_2] [i_1 - 3] [i_1 + 2]))))));

                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        var_17 = (arr_2 [i_0]);
                        var_18 = ((!(arr_4 [i_2])));

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_2] [i_0] = (arr_10 [i_2] [i_1 - 3] [i_2]);
                            arr_16 [i_0] [i_1 + 1] [i_2] [i_2] [i_2] [i_4] = (max(((max((arr_4 [i_3 - 1]), var_6))), var_5));
                            var_19 = (min((min((arr_8 [i_1 + 2] [i_1 + 2] [i_2] [i_3 + 1]), var_2)), ((max((arr_5 [i_1 + 1] [i_3 - 2]), (arr_5 [i_1 - 2] [i_3 - 2]))))));
                        }
                        var_20 *= (((((arr_7 [i_1] [i_1 + 1] [i_3 + 1]) && (arr_7 [i_1] [i_1] [i_1]))) && ((!(arr_7 [i_1] [i_1] [i_1])))));
                    }

                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        var_21 = ((~(((arr_4 [i_2]) ? 7139703017534374951 : (arr_18 [i_0] [i_1 - 1] [i_2] [i_5 - 1])))));
                        var_22 = (min((max((arr_12 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 + 2] [i_2]), ((max((arr_7 [i_2] [i_5 - 1] [i_5 - 3]), var_2))))), (((!((max(var_12, 7598871738490731846))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
