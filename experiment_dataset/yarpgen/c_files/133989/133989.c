/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] = (((505086604 ? var_7 : (~var_12))));
                    arr_8 [i_2] [i_1] [i_2] = (min(((var_7 ? (~var_12) : 15231740400329808693)), (535460472875955576 != var_4)));
                    var_17 ^= ((!(((var_16 ? var_2 : var_11)))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_18 = (((535460472875955576 % (((var_4 >> (var_7 - 15476)))))));
        var_19 |= (!6761919348424030096);
        var_20 &= (((!var_0) * 535460472875955600));
    }
    var_21 = ((((((!(var_1 + 151))))) % 535460472875955576));

    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
        {
            var_22 ^= (15251 && 0);
            arr_17 [i_4] [i_4] [i_5] = (((-8204245958070579747 || (!214))));
            var_23 = ((var_12 < var_16) & 1);
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                var_24 -= (((var_15 * var_9) ^ (~535460472875955566)));
                var_25 = var_4;
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                var_26 ^= (((var_11 < var_11) == var_3));
                var_27 = (var_0 * var_2);
            }
            var_28 = (((((var_4 ? 142 : var_10))) ? (-1173283623 + var_4) : (8204245958070579747 | -1148071648)));
        }

        for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
        {

            for (int i_10 = 0; i_10 < 0;i_10 += 1)
            {
                var_29 -= ((((((-1500963494 == 3701533914) <= 4611686018427387904))) == 1));
                var_30 = (((var_13 ? 536346624 : 12282116706895120785)) > (((max(8628, var_15)))));
                arr_31 [i_4] = var_11;
                arr_32 [i_4] = (var_4 ? var_3 : (!var_15));
            }
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                var_31 *= (max(((var_14 & (4294967295 + var_4))), ((((((var_7 ? 535460472875955564 : var_1))) ? -8204245958070579756 : var_6)))));
                arr_37 [i_4] [i_4] = ((0 <= (!var_7)));
                arr_38 [i_4] = var_16;
            }
            var_32 = (12686309441650440672 == 0);
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
        {
            var_33 ^= 4611686018427387878;
            var_34 ^= (((var_11 == 250468957) < var_7));
            var_35 = (min(var_35, (((!(1783822272 ^ -1783822273))))));
            arr_42 [1] [i_4] = (~1);
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                {
                    var_36 = ((29261 * (var_8 > var_16)));
                    var_37 = ((((var_0 / 5214364319977196318) ? (!var_6) : 7508005646447848880)));
                    arr_47 [i_4] = ((((2067007985 | (5522202193514537203 < 2067007990))) | (var_4 * 5596)));
                }
            }
        }
    }
    var_38 &= 1;
    #pragma endscop
}
