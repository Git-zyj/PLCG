/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_17 = (((((min(-126, 4294967275))) ? (max(99, var_7)) : (((min(32756, 32756)))))) > ((((-32763 ? var_14 : var_9)) | var_9)));
        var_18 += ((((min(19, ((min(11, 56)))))) ? (var_5 ^ var_4) : var_9));
        var_19 = var_2;
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_20 |= (min(((((max(-24763, 65517))) ? (-47 >= 154) : (var_2 || 102))), (-14085 * var_12)));
        var_21 = (max(var_21, var_13));

        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_22 = ((((max(59, ((max(-32, (-127 - 1))))))) ? (((241 ? ((var_2 ? var_4 : 169)) : -112))) : ((3298219277 >> (-40 + 64)))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_23 *= ((-47 ? 3042853272 : 2));
                        arr_13 [i_1] [i_1] [i_3] [i_3] = (((!-32757) ? (!var_13) : ((min(65513, -121)))));
                        var_24 = (max(-32756, 20));
                    }
                }
            }
            arr_14 [i_1] [i_2] = (((7911887 + 106) ? (max(3, var_10)) : (((var_15 ? var_10 : var_9)))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            arr_17 [i_1] [i_5] [19] = var_5;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 19;i_7 += 1)
                {
                    {
                        var_25 = var_13;
                        var_26 -= 7653368145393416595;
                        var_27 = (((((var_12 ? 2013265920 : var_1))) ? ((-122 ? var_14 : var_9)) : (((32767 ? 1 : var_8)))));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            arr_27 [i_1 + 2] [i_1] [i_1 + 2] = ((-(((((184 ? var_1 : -32757))) ? ((max(-122, -45))) : -29094))));
            var_28 ^= var_9;
            var_29 = (min(var_29, (((((43 ? 4294967295 : (-127 - 1))) / var_13)))));
            var_30 = (min((((-45 ? 1 : 255))), ((var_10 ? var_9 : var_8))));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_31 *= var_2;
            var_32 = ((!((min(var_5, var_11)))));
        }
        var_33 = (min(var_33, (((((81 ? 0 : 63))) & ((var_15 ? var_6 : var_12))))));
    }
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        var_34 = (min(var_13, (!var_15)));
        var_35 &= ((((((var_13 + 1682457842) & (((max(122, -29094))))))) ? 1 : ((max(var_4, var_1)))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        var_36 = (max(var_36, var_7));
        var_37 ^= (((((-118 ? var_1 : var_11))) ^ 4294967285));
        var_38 -= ((-32766 ? var_11 : 29103));
        var_39 &= ((94 >> (var_13 - 18106)));
    }
    var_40 -= var_3;
    var_41 = (((!-var_14) ? ((((max(-11, -94))) ? -12 : 7653368145393416611)) : var_6));
    #pragma endscop
}
