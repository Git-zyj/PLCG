/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~2199023247360);
    var_11 |= (((((min(var_5, var_2))) ? (~1) : var_1)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (max(var_12, 2199023247360));
        var_13 = var_5;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        var_14 = (((((var_6 ? var_7 : var_6))) ? ((-(max(var_8, 15239888665127410028)))) : var_8));
                        arr_11 [i_0] [i_1 - 2] [14] [i_0] = (((180 < var_5) ? (((-(!var_4)))) : (max(var_7, var_1))));
                        var_15 = (min(var_15, ((min(2199023247372, ((((arr_4 [i_1 - 3] [12]) == (arr_10 [1] [i_3 - 1] [i_3 - 1] [i_1 - 2] [i_1 - 1] [1])))))))));
                        var_16 = var_4;
                    }
                    var_17 = max(18446744073709551615, (18446744073709551593 - var_5));
                }
            }
        }
        var_18 = 22;
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        var_19 *= 2199023247330;
        var_20 &= var_7;
        var_21 = (min(var_21, (~var_6)));
        var_22 ^= 2199023247330;
    }
    for (int i_5 = 3; i_5 < 16;i_5 += 1)
    {
        arr_16 [i_5 - 2] [i_5 + 1] = 2199023247360;
        var_23 = min(((1 ? (!876) : ((1 ? var_4 : var_2)))), (((min(18537, 1)))));
    }
    #pragma endscop
}
