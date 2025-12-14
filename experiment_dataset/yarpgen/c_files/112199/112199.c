/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    var_20 -= var_14;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = 0;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_22 = (min((var_0 >= var_13), var_14));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_23 = (max(50066, 8));
                                var_24 *= 1048574;
                                var_25 = (1048574 >= 26364);
                                var_26 = ((-1678249017 & ((0 ? 16864205849287127590 : 3633817094))));
                                var_27 = (((8144 ? 1 : var_12)));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                {

                    for (int i_7 = 3; i_7 < 13;i_7 += 1)
                    {
                        var_28 = ((((((198 < var_14) | var_12))) / (max(41, ((var_4 ? -66 : var_17))))));
                        var_29 = ((((var_1 ? (-127 - 1) : 65198)) / var_18));
                        var_30 = var_16;
                    }
                    var_31 = (min(var_31, ((max(((var_7 ? var_18 : var_15)), (10870514681280376788 >= 4744226745104954554))))));
                }
            }
        }
    }
    #pragma endscop
}
