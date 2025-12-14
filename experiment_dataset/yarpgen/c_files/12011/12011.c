/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((1148417904979476480 ? var_10 : var_17));
    var_20 = (max(var_20, var_14));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    var_21 = ((((var_0 ? -2713201683152736281 : 24))));
                    var_22 += ((((min(24, var_11))) ? (((!24) - 4145480216)) : (!0)));
                    var_23 = (max(var_23, ((((var_4 % 9899) * (~-var_0))))));
                    arr_9 [i_0 + 2] [i_1] = ((-(((9900 || (-37 || var_2))))));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_15 [i_1] [i_1] = ((((var_13 ? 62 : 24)) < (-4721 | 15872)));
                            var_24 *= 9899;
                            var_25 = (~var_14);
                            var_26 = ((((!(~var_7))) ? (64 & var_17) : ((~(min(-1, var_17))))));
                        }
                    }
                }
            }
        }
    }
    var_27 = (((229 ? 788408041 : var_10)));
    #pragma endscop
}
