/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_13));
    var_21 = var_15;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_22 = (max(var_22, ((((var_9 < var_18) - var_19)))));
        var_23 = (var_11 < var_0);

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_24 = ((-39 > (-9223372036854775807 - 1)));
            var_25 = (max(var_25, var_12));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            var_26 |= var_3;
                            var_27 ^= ((var_0 ^ (var_3 / var_7)));
                        }
                        var_28 = var_9;
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            var_29 = (max(var_29, (((~(~var_6))))));
            var_30 = (~var_7);
            var_31 ^= ((-(((var_15 >= (!var_17))))));
        }
        var_32 = (min(var_32, (-var_17 + var_4)));
        var_33 = -var_8;
        var_34 = ((((var_18 - var_0) / var_19)));
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
    {
        var_35 += var_2;
        var_36 *= ((var_0 < (var_12 ^ var_7)));
    }
    #pragma endscop
}
