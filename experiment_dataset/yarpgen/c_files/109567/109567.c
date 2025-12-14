/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((-((-(~var_4))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = ((~(--71)));

                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        var_14 = (min((arr_0 [12] [i_0 + 2]), ((((~(arr_2 [i_1] [i_1] [16])))))));
                        var_15 = (min(var_8, ((((min((arr_8 [14] [i_1] [i_3 - 2]), (arr_4 [i_2])))) ? ((~(arr_7 [16]))) : (arr_3 [i_0 + 2] [i_0 - 2] [i_3 + 3])))));
                        arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] = (min((!var_9), (arr_4 [i_2])));
                        var_16 = (min(var_16, (arr_1 [i_1])));
                        var_17 = ((-((min((max((arr_9 [i_0 - 1]), (arr_8 [i_0] [i_0] [2]))), (arr_8 [i_0 + 1] [i_0 - 2] [i_3 + 2]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
