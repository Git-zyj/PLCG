/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 |= (arr_4 [i_2 - 1]);
                    var_19 = -4158749356540750639;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                arr_12 [i_3] [i_3] = ((66 ? (!1188517882) : -var_6));
                var_20 = (arr_5 [i_3] [20] [16] [20]);
                arr_13 [i_3] [9] [i_3 - 1] = var_6;
                arr_14 [5] [5] = ((!(arr_5 [i_4] [i_4] [i_4] [4])));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_21 = (max(var_21, (arr_5 [2] [i_4] [2] [i_6 + 2])));
                                var_22 = (max(var_22, ((((arr_16 [i_3 + 1]) ? (((((arr_16 [i_3 + 1]) && 26742)))) : (((arr_16 [i_3 + 1]) ^ (arr_17 [i_3 + 1] [i_6 - 2] [i_6 - 2] [i_6 + 2]))))))));
                                var_23 -= (((max((1048575 && 14287994717168800982), var_12))) ? 3106449430 : (((8325875932876386447 < 3106449414) ? (((arr_20 [i_3] [9] [i_3] [i_3] [i_3] [i_7]) % (arr_19 [i_3 + 1] [0] [i_4] [i_6]))) : ((((var_0 + 9223372036854775807) >> (var_16 - 57151)))))));
                                arr_22 [i_3] [2] [i_3 - 1] [i_3 + 1] [i_3] [i_3 + 1] [i_3] = (!746952439944272293);
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = var_4;
    #pragma endscop
}
