/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (var_3 < 1260083623);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = var_7;
        var_14 ^= (((arr_0 [i_0] [i_0]) ? ((var_11 + (arr_0 [i_0] [i_0]))) : var_1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = 13026354980907346531;

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_16 |= (arr_13 [i_2] [i_2 - 1] [i_1] [i_2] [i_2 + 2] [i_3 + 1]);
                            var_17 = arr_8 [i_0] [i_1] [i_2] [i_4];
                        }
                        var_18 |= (53 + var_9);
                        var_19 = var_2;
                        var_20 = (var_3 & 1260083623);
                        var_21 = (((!9846) ? (!128) : var_8));
                    }
                    var_22 = ((var_7 ? 1 : -824365851));
                    var_23 = (1 + 1083315206);
                    var_24 |= (((arr_10 [i_1] [i_1] [i_1]) < (arr_11 [i_0])));
                }
            }
        }
    }
    var_25 = var_3;
    var_26 = var_10;
    #pragma endscop
}
