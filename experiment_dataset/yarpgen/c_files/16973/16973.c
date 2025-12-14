/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    var_15 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = ((((((!var_11) ? (arr_4 [i_0] [i_0 - 2] [i_0]) : ((max(var_4, (arr_0 [i_2]))))))) < (((((218484042 ? 7491224521708924614 : 9779431215925939647))) ? (!10955519552000626982) : ((10955519552000626982 ? 10955519552000626997 : 10955519552000627009))))));
                                var_17 = (max(var_17, ((min((((((arr_7 [i_1] [i_0 + 1] [i_2]) + 2147483647)) << (((((arr_7 [i_2] [i_1] [i_0]) + 554206686)) - 15)))), ((var_10 ? (((-2147483647 - 1) ? (arr_3 [i_4]) : (arr_3 [i_0]))) : (arr_3 [i_0 - 2]))))))));
                                arr_14 [i_3] [i_3] [i_3] [i_0] = max((((arr_8 [i_0 - 4] [i_0] [i_0] [i_0]) ? var_4 : (arr_0 [i_2]))), (((arr_9 [i_0 - 4] [i_0 - 2] [i_0 - 2] [i_0 - 3]) ? (arr_9 [i_0 - 2] [i_0 - 3] [i_0 + 2] [i_0 - 1]) : (arr_9 [i_0 - 3] [i_0 - 3] [i_0 - 4] [i_0 + 2]))));
                            }
                        }
                    }
                    var_18 -= ((-((-(arr_10 [i_0] [4] [i_2] [i_2])))));
                    arr_15 [i_0] = var_8;
                    var_19 = ((((((arr_3 [i_0 - 2]) * (arr_3 [i_0 - 2])))) ? (((arr_3 [i_0 - 2]) << (((arr_3 [i_0 - 2]) - 31117)))) : ((-(arr_3 [i_0 - 2])))));
                }
            }
        }
    }
    #pragma endscop
}
