/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = var_10;
                var_21 = (max(var_21, 98));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_22 = (min(var_22, (arr_4 [6])));
        var_23 |= ((-3821 << (var_11 - 681608317)));
        arr_8 [i_2] = (-3807 | -3812);
    }
    for (int i_3 = 2; i_3 < 20;i_3 += 1)
    {
        arr_12 [i_3] |= -3821;
        arr_13 [i_3] = ((+((var_16 ? (arr_11 [i_3]) : (arr_10 [i_3] [i_3 + 3])))));
    }
    for (int i_4 = 1; i_4 < 7;i_4 += 1)
    {
        var_24 = var_10;
        arr_18 [i_4] = (((((min((arr_15 [i_4]), (arr_15 [i_4]))))) & var_4));
        arr_19 [0] &= (max(var_14, ((((arr_1 [i_4 + 1]) ? -3815 : (max(975242558, var_7)))))));

        for (int i_5 = 2; i_5 < 8;i_5 += 1)
        {
            var_25 ^= (((((min(3821, (arr_11 [i_4])))) ? (max(var_12, var_19)) : (((var_3 ? (arr_15 [i_5]) : (arr_0 [i_4] [7])))))));

            /* vectorizable */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                arr_25 [i_6] [i_6] |= (~var_4);

                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    arr_30 [i_4] [i_4] [i_6] = (3820 << 1);
                    var_26 = (min(var_26, (((var_16 ? 12062361357203751972 : (arr_23 [i_4]))))));
                    arr_31 [i_4] [i_5] [i_5] = (((arr_1 [i_4 + 2]) < 23));
                    var_27 = (0 > 1);
                    var_28 = (-10 * -29837);
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    var_29 = var_6;
                    var_30 = (max(var_30, (arr_28 [i_4] [i_5] [i_6] [i_8])));
                    var_31 = (((-24 ^ -24) ? var_10 : ((7426 ? 1183614310 : 7426))));
                }
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    arr_37 [i_4] [i_6] [i_5] [i_9] [i_5] = ((var_0 ? (((arr_2 [i_6]) >> (-30 + 49))) : (arr_15 [i_4])));
                    var_32 |= (((arr_17 [i_4 + 1]) >> (((((arr_1 [i_9]) ? var_15 : var_1)) + 107))));
                }
                for (int i_10 = 1; i_10 < 10;i_10 += 1)
                {
                    var_33 = var_0;
                    arr_41 [i_4] = var_19;
                }
            }
            var_34 -= ((117 ? 146 : (-32767 - 1)));
        }
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            var_35 = var_4;
            arr_44 [i_4] [i_11] [i_11] = (max(var_11, -var_1));
        }
    }
    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        var_36 = (arr_5 [i_12]);
        var_37 = 3536952110;
        arr_47 [i_12] = (max(-1183614314, 3821));
        var_38 = (((~var_19) << (((var_13 ^ var_15) ? (!var_11) : ((((arr_3 [i_12]) < var_7)))))));
    }
    var_39 *= (((var_7 == var_4) == var_4));
    var_40 = var_3;
    var_41 = ((((max(var_11, var_9))) ? (((max(var_18, var_12)))) : (~var_8)));
    #pragma endscop
}
