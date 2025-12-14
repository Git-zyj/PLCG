/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_10 = ((-((11654658219529802260 ? -2147483631 : var_2))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_3] [i_3] [i_3] = (((6792085854179749354 - 6792085854179749324) ? (6792085854179749354 * 0) : -35));
                                arr_16 [0] [i_0] [i_1] [i_2] [i_3] [i_4] = (var_5 % 1);
                                arr_17 [i_0] [i_0] [i_0] = 8800471883595182998;
                            }
                        }
                    }
                }
                arr_18 [i_1] [i_1] = ((6792085854179749365 ? 63520 : 910381670));
                arr_19 [i_1] = ((1 < ((17710 * (~var_8)))));
            }
        }
    }
    var_11 = ((var_6 ? (~var_9) : ((var_0 ? (~8) : (6792085854179749377 + -14)))));
    var_12 = ((var_8 ? 1 : (1810929072362422316 / 7293627688291426001)));
    #pragma endscop
}
