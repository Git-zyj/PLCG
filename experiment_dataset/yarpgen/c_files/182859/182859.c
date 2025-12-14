/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 = (min(var_21, (((((5 ? -852561747 : 1)) + (1 * -22603))))));
        var_22 = (((((268435455 << (-45 + 45)))) ? 636438949 : -106));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_23 = (max(var_23, ((((4611686018427387904 ^ 0) != -852561736)))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_24 = (((10934616683217774715 | 0) < (((1701 ? ((852561757 << (636438950 - 636438949))) : (-22602 ^ 124))))));
                                var_25 = (--22610);
                                arr_16 [i_1] [i_2] [i_3] [i_4 - 1] [i_4] = (~(((0 + 852561721) ? 22598 : 1288338416)));
                            }
                        }
                    }
                }
            }
        }
        arr_17 [8] = (~22602);
        var_26 = ((636438959 - (((-636438937 || (((-22602 ? 1125899772624896 : 461343886))))))));
        var_27 = -8058;
    }
    var_28 = (((-1367520737 | var_4) ? ((((-83 == 1) >> (852561754 - 852561729)))) : 2185873678));
    #pragma endscop
}
