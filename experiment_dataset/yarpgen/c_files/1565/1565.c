/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = (-13372 == -var_8);
                    var_12 = ((min((min(88, 13371)), 0)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        var_13 = ((~(-13372 <= var_8)));
                        var_14 = (((arr_11 [i_0] [i_2] [i_2] [i_2 - 1] [i_2 + 3] [i_2]) ? (arr_11 [i_0] [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 + 3] [i_2 - 1]) : (arr_11 [i_0] [i_2 + 2] [i_2] [i_2 - 1] [i_2 + 3] [i_2])));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_15 |= (min(var_11, 18446744073709551615));
                        var_16 = max((0 && -173344415), 64395);
                        var_17 = (max(((((max((arr_14 [3] [i_2] [3] [9] [i_0] [i_0]), (arr_1 [i_0])))) ? ((max(13, var_5))) : (var_3 / var_8))), var_9));
                        var_18 = (!(arr_11 [i_0] [i_0] [i_1] [i_2 + 1] [i_2] [i_4]));

                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            var_19 = (~var_0);
                            var_20 ^= ((64395 ? (~13372) : 1));
                            var_21 = (-13352 > 1);
                        }
                    }
                }
            }
        }
    }
    var_22 = var_8;
    var_23 = (max(-28, 0));

    /* vectorizable */
    for (int i_6 = 3; i_6 < 24;i_6 += 1)
    {

        for (int i_7 = 2; i_7 < 24;i_7 += 1)
        {
            arr_23 [i_6] [i_7] [i_6] &= ((var_5 - (arr_19 [i_6 + 1])));
            var_24 = (((arr_20 [i_7]) ? -12746 : (((arr_21 [i_7]) / -35))));
        }
        var_25 |= (13466939152517593306 ? (((arr_22 [i_6] [i_6]) ? 74 : -63)) : ((var_6 ? -71 : 0)));
    }
    #pragma endscop
}
