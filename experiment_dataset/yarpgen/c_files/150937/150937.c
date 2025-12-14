/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((3408533636 & 886433659) ? (!49) : (((var_2 ? var_17 : var_13)))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = ((((max((max(var_10, var_17)), ((min(var_11, var_12)))))) || ((((((var_16 ? var_9 : var_5))) ? ((min(var_15, var_13))) : (min(var_17, var_4)))))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                var_20 = (((((var_12 - var_16) >> (((max(1799298781, 987391918)) - 1799298778))))) - (max((var_4 ^ var_16), var_14)));
                var_21 = (max(var_21, ((var_12 ? (((var_3 ? (var_17 - var_13) : var_3))) : (((var_6 / var_8) ? (min(var_10, var_3)) : (var_11 != var_9)))))));
            }
            var_22 ^= (((min((var_16 != 147), var_6)) - (var_5 / var_3)));
            var_23 = var_16;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_16 [i_0] [i_3] [i_4] [i_5] = ((-1 == ((-1373802022 ? 3408533636 : 3408533636))));

                        for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            var_24 = (min(var_24, var_10));
                            var_25 = (var_9 + var_6);
                        }
                        for (int i_7 = 2; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            var_26 = (min(var_26, var_7));
                            var_27 -= var_6;
                            var_28 -= var_6;
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                        {
                            var_29 = ((var_14 ? var_1 : var_4));
                            var_30 = var_15;
                            arr_24 [i_0] [i_3] [i_4 - 1] [i_4 + 2] [i_5] [i_8] = var_12;
                        }
                        for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                        {
                            var_31 = var_4;
                            var_32 = ((var_9 != var_9) ? (3307575377 >= -538656673) : (var_4 == var_8));
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = (-var_12 != var_13);
                        }
                        arr_28 [i_4] [i_4] = ((var_0 || var_3) ? var_8 : (var_11 + var_1));
                        var_33 &= ((var_1 | var_3) ^ (var_7 | var_11));
                    }
                }
            }
            arr_29 [i_0] [i_3] &= (987391922 || 562667014);
            var_34 = (((~var_16) ? ((var_18 ? var_2 : var_4)) : ((var_14 ? var_13 : var_10))));
        }
        for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
        {
            arr_32 [i_0] [i_0] = ((((var_2 || (!var_6))) ? (max(((max(-1, -1715206535))), (max(var_3, var_12)))) : var_12));
            var_35 = var_18;
            var_36 = var_12;
        }
        var_37 = var_15;
    }
    #pragma endscop
}
