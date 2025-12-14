/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((min(-var_0, var_1)));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_11 = var_7;
        arr_3 [i_0] = min((!var_7), ((158920615 ? 158920639 : (!4136046680))));
        var_12 = -var_7;
    }
    for (int i_1 = 4; i_1 < 22;i_1 += 1)
    {
        var_13 ^= (((((var_4 || var_5) ? 158920615 : (arr_2 [i_1 - 2]))) > (((~(!var_9))))));
        var_14 += (arr_4 [i_1]);
        arr_6 [i_1] = (arr_1 [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_16 [i_2] [i_2] = var_2;
                        var_15 = (!var_2);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        arr_23 [i_5] [i_6] [i_7] = (+(max((~var_8), var_9)));
                        var_16 = (min(var_16, (--4136046687)));
                        arr_24 [i_1] [2] [i_1 + 1] [i_1 - 3] = ((max((~var_9), (min(var_0, var_8)))));
                    }
                }
            }
        }
    }
    var_17 = ((((max(var_1, var_7))) ? var_4 : (158920589 + var_5)));
    #pragma endscop
}
