/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_8);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = var_4;
                    var_18 = ((var_7 ? (max(((8497 ? 8480 : 0)), (max(var_8, var_1)))) : (var_6 == var_5)));
                    var_19 = ((max(var_10, var_10)) ? ((max(var_12, var_2))) : (~var_14));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_4] [i_0] = (!var_16);
                                var_20 = (max(var_20, ((max(((var_13 ? var_15 : var_12)), (((((var_13 ? var_10 : var_6))) ? (var_12 * var_5) : ((255 ? 7 : 0)))))))));
                                arr_17 [i_0] [i_4] [i_2] [0] [i_4] = var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
