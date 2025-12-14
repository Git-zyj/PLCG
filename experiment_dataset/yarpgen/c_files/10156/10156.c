/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    var_19 -= (var_1 && var_14);

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_20 = var_17;
        arr_3 [i_0] = (var_11 == var_16);
        arr_4 [i_0] = (((((65523 + 2147483647) << (var_17 - 109)))) > var_16);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_21 -= ((0 ? var_8 : (((((var_8 % 111) + 9223372036854775807)) >> (var_9 - 12665823496578450749)))));
            var_22 = (min(var_22, (((var_6 ? (((var_1 * (~var_3)))) : ((var_5 ? var_17 : var_1)))))));
            var_23 = (((((var_1 % 117) <= var_17))) < ((((var_15 ? var_6 : 22641)) + 75)));
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_24 = (((var_14 ? var_1 : var_9)));
                            arr_18 [i_1] [i_1] [i_1] [0] [i_1] [8] = ((0 >> (var_16 <= -109)));
                            arr_19 [i_1] [i_2] [i_3 - 2] [i_4] [i_1] = 2613326736;
                            var_25 = (max(var_25, (((((~var_8) | (var_17 | var_9)))))));
                        }
                    }
                }
            }
        }
        var_26 = ((+(((!var_9) ? (~var_16) : var_1))));
    }
    var_27 = (max(var_27, (-1 == -var_6)));
    #pragma endscop
}
