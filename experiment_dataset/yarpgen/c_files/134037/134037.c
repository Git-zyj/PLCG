/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(0, ((~(8510449578457134284 > 11)))));
    var_19 = (min(var_19, (-var_15 * -var_8)));
    var_20 = (min(79, (((!(!9704))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] = (~233);
                var_21 = (max(var_21, 3395486002));

                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    var_22 = (0 % 4677373501191037358);
                    var_23 += (max((max(-13723, -113)), (min(-29, -21558))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    var_24 = (max(var_24, (19677 * 0)));
                    arr_13 [2] [i_3] [i_3] = (!79);
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 7;i_5 += 1)
                        {
                            {
                                var_25 = 14948;
                                var_26 = (min(var_26, 17623410956181702887));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
