/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [14] = 1292937276;
        arr_3 [i_0] = 9983;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_2] [2] = (max((max(254, 55559)), ((min(0, (arr_6 [i_1] [9]))))));
                    var_18 = min((min((arr_10 [i_1]), var_0)), (min((arr_9 [i_1] [i_3] [i_3]), 10077635358277150249)));
                }
            }
        }
        arr_14 [0] = max(((min((arr_10 [i_1]), var_8))), (min((arr_10 [i_1]), var_0)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    var_19 = (max(567675060121444507, 10));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_24 [i_1] [i_1] [i_4] [13] [i_6] [i_5] = (max((min(16841251164031800283, var_16)), (min(8369108715432401366, 10349))));
                                var_20 = (min((min(2923263954902414949, 1152921504606846976)), (min(2923263954902414949, var_0))));
                                arr_25 [i_6] [2] [14] [2] &= (min(-20156, 10077635358277150250));
                                var_21 = (max((min(10077635358277150249, ((min(var_12, (arr_5 [14])))))), (max((min(1884578807, 8369108715432401365)), ((min((arr_1 [i_6]), (arr_6 [i_4 + 1] [i_6]))))))));
                            }
                        }
                    }
                }
            }
        }
        var_22 = (min(562812514467840, 120));
    }
    var_23 = var_13;
    #pragma endscop
}
