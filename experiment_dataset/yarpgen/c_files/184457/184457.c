/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_1] [1] = (47880 ? 16 : -15953);
                    arr_11 [i_0 - 1] [i_1] [i_2 + 1] = (arr_0 [i_0]);

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_16 [i_3] [i_2] [i_2] [i_1] [i_0] [i_3] = (min(1858898116, 1858898131));
                        var_14 = (arr_14 [i_0] [i_0] [i_2 + 1] [i_3 - 1] [i_3]);
                    }
                    for (int i_4 = 3; i_4 < 17;i_4 += 1)
                    {
                        var_15 *= min((((arr_12 [i_0 - 1] [i_0 - 1] [i_2] [i_4] [i_2]) ? ((1858898112 ? (arr_9 [6]) : (arr_0 [i_0]))) : (arr_19 [i_0] [i_0]))), (arr_17 [i_1] [i_1]));
                        var_16 = max((arr_17 [i_0] [i_4]), 686020308);
                    }
                }
            }
        }
    }
    var_17 = ((-(((!(!32762))))));
    var_18 = var_1;
    #pragma endscop
}
