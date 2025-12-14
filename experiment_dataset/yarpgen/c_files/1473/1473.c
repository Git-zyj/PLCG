/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        var_18 = (!-2);
                        var_19 = (min(var_19, ((((~(!8811179836115581256)))))));
                        arr_10 [i_0] [i_2] = -var_6;
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [1] [i_1] [i_2] [i_0] [i_4] = ((((!(var_9 || var_12)))) % (((var_4 < var_4) | 1629971112)));
                        var_20 = (((var_16 / var_11) - var_15));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_0] [6] = (~var_14);
                        var_21 = ((var_15 < var_13) ? (~var_4) : (~var_3));
                        arr_18 [i_0] [i_0] [i_0] [i_0] [11] = (((var_8 >= var_16) < -var_3));
                        arr_19 [i_0] [i_1] [i_2] [i_2] [i_0] = (~var_1);
                        arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] = (!-var_4);
                    }
                    var_22 |= ((((var_2 | (var_8 | var_1))) ^ (~-1175197253)));
                    var_23 = (8811179836115581242 | 0);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            {
                var_24 = (((((((var_2 >= var_5) ^ (var_11 + var_7))) + 9223372036854775807)) << (~1023)));
                var_25 = (min(var_25, ((((-(-1175197237 % 1629971110)))))));
            }
        }
    }
    var_26 = (!(65535 * 36224));
    #pragma endscop
}
