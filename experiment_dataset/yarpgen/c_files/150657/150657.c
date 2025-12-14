/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_6 ? ((var_5 ? (~1) : var_6)) : var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_13 = ((((((arr_3 [i_0] [i_0]) ? var_2 : var_2))) ? ((var_4 ? (arr_1 [6]) : (arr_2 [i_0] [i_0]))) : var_9));
        var_14 = -52042;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_15 = 0;
        var_16 = (max((arr_3 [1] [1]), 7749564418931843653));
        var_17 = ((-(min((arr_6 [i_1]), var_5))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_18 -= (-1233810771 ? (arr_7 [10]) : var_6);
            var_19 = 65535;
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_20 = var_2;
                            var_21 ^= ((18446744073709551611 ? 0 : (~18446744073709551615)));
                            var_22 = var_2;
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_23 += ((!((min((arr_0 [i_2] [i_7]), (arr_0 [i_2] [i_2]))))));
            var_24 = arr_9 [1] [1] [1];
            var_25 = var_2;
        }
        var_26 = (arr_6 [i_2]);
        var_27 = 1025057261;
    }
    var_28 = ((var_7 ? 1233810771 : var_8));
    #pragma endscop
}
