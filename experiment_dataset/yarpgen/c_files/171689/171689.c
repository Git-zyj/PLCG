/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((-(12 < -7182993736013908402)))) ? ((-(-5151798555841844272 + 57203))) : (var_7 < 10823)));
    var_19 = (min(23839, 1));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((((((min(var_8, var_7))) ? ((min(43577, var_5))) : ((-3 ? var_10 : var_16)))) < -64));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = ((((var_16 < var_17) < (var_11 < var_13))));
                    var_21 ^= var_10;
                }
            }
        }
        var_22 = var_11;
        arr_8 [i_0] [i_0] = 4;
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = (var_3 ^ 127);
        var_23 = (max(var_23, (((-32764 < 32765) ? (!-50) : ((-(min(-32764, var_15))))))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 22;i_5 += 1)
            {
                {
                    var_24 = (((min(var_3, (((var_11 ? -32751 : -20479))))) < (((((!var_16) < var_17))))));
                    var_25 = -8463215708219604007;
                }
            }
        }

        for (int i_6 = 4; i_6 < 21;i_6 += 1)
        {
            arr_18 [i_3] = var_3;
            var_26 *= ((((((var_11 < 55) < (6912 < var_17)))) < -32764));
            var_27 = ((((var_14 ? 20460 : 1136842236985367769)) < (((((-9638 < var_11) < (-3172254439481236885 < var_13)))))));
        }
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            arr_21 [i_3] [i_7] = -0;

            for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
            {
                arr_25 [i_8] = (max((((~1) & 3217588357650218938)), ((min(27222, (min(var_17, -4)))))));
                var_28 = (var_1 < -2297);
                var_29 = ((((-32739 < (3509289683547272998 < 5065014005940412244)))));
                arr_26 [i_3] [i_3] [i_7] = ((111 < ((((max(var_13, 29404))) ? 32767 : (var_11 + -3172254439481236885)))));
                var_30 ^= (((!var_6) < (max(var_10, 9223372036854775807))));
            }
            for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
            {
                arr_29 [i_3] [i_3] [i_7] [22] = (((-32767 - 1) < ((min(-35, (max(-9445, -64)))))));
                var_31 = ((((((var_16 ? var_2 : var_15)) < 9445)) ? 3399 : var_0));

                /* vectorizable */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    var_32 = 21969;
                    var_33 -= (((var_15 ? var_14 : var_13)));
                    var_34 = ((var_16 ? (var_17 < var_10) : var_9));
                }
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            arr_36 [i_11] [i_11] [i_3] &= 3172254439481236887;
            var_35 = ((-(~-97)));
            var_36 = 0;
        }
        var_37 = (max(var_37, (min(((((var_9 < var_14) < ((64807 ? var_0 : 27))))), 14513))));
    }
    var_38 = ((var_8 ? var_11 : 40962));
    #pragma endscop
}
