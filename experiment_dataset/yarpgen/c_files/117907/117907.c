/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_17 = (max(var_17, ((((arr_1 [i_0 - 2]) || ((((1 != 13002) ? ((23935 ? -9587 : var_11)) : (arr_1 [i_3])))))))));
                            var_18 = var_11;
                        }
                    }
                }
                arr_9 [i_1] = ((((((245 - -9578) ? (arr_7 [i_0 - 1] [i_1] [i_0] [i_0] [i_0 - 1]) : var_1))) && (((((9727 ? 33292288 : 3167715485)) << (((max(3, 111)) - 95)))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_19 ^= (!-9588);
                                arr_20 [i_6] [i_4] [i_4] [i_4] [i_0] = (!2409714928);
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (((!var_8) % (min((~var_6), (var_9 - var_11)))));
    var_21 = var_2;
    #pragma endscop
}
