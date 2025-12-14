/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;

    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_20 = (((arr_0 [i_0] [12]) ^ (((arr_0 [i_0] [i_0]) ? (max((arr_0 [i_0] [i_0]), -12380)) : (((arr_0 [i_0] [i_0]) ? var_0 : var_6))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] = (arr_0 [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_12 [7] [i_1] [i_2] [i_3] [i_3] [i_0] = arr_10 [i_4] [i_0] [5] [i_0] [i_0];
                                var_21 -= (arr_7 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [16]);
                                var_22 = ((((max(24301, (arr_2 [i_0]))))) != var_0);
                                arr_13 [i_0] [i_3] [i_2] [i_0] [i_4] = min((((24305 ? 20479 : -24296))), (min((arr_3 [i_0] [i_1]), var_5)));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_23 = var_6;
        var_24 ^= ((!(((((arr_8 [i_5] [i_5] [i_5] [i_5] [14] [i_5]) & 17777759036225139776))))));
    }
    #pragma endscop
}
