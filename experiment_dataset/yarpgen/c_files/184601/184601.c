/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_20 |= ((!((((((-4546574801056572742 ? var_13 : -1737596774))) ? (var_7 || 81) : ((min(29, (arr_0 [i_0])))))))));
        var_21 -= (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_22 = (max(var_22, 246567868));
        var_23 -= ((((arr_0 [i_1]) ^ (arr_0 [i_1]))));
        var_24 -= ((((((arr_3 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1] [i_1])))) ? (arr_0 [i_1]) : var_4));
        var_25 = (max(var_25, ((((min((arr_2 [i_1]), (arr_2 [i_1])))) ? ((983903863 ? (arr_2 [0]) : 4294967288)) : (!var_3)))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_26 = ((+(((arr_3 [i_2] [i_2]) ? ((var_10 ? (arr_3 [i_2] [3]) : -4546574801056572750)) : (arr_4 [i_2] [i_2])))));
        arr_6 [i_2] [i_2] = ((((-(((!(arr_1 [11]))))))) ? ((2077191054 ? (~363029988) : ((var_17 ? var_2 : (arr_5 [i_2]))))) : ((~(min(var_0, var_2)))));
        var_27 = ((min((arr_5 [i_2]), (arr_4 [i_2] [2]))) * ((((max((arr_5 [i_2]), var_11))) ? ((0 ? (arr_2 [9]) : var_0)) : (((0 / (arr_1 [i_2])))))));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 16;i_5 += 1)
            {
                {
                    var_28 = -4546574801056572742;
                    var_29 = (max(var_29, ((max((max(var_6, (((arr_13 [i_3] [i_4] [7] [9]) ? var_4 : var_6)))), (((((var_2 / (arr_10 [i_5] [i_4])))) ? (arr_7 [i_5 - 3]) : var_8)))))));

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_30 = (((arr_9 [i_4] [i_4] [i_5]) ? (916167714 ^ var_18) : (((arr_15 [13] [i_4 + 2] [i_5 - 3] [i_6]) ? 2077191055 : ((2077191054 ? -44 : (arr_12 [i_3] [i_3] [i_3] [11])))))));

                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            var_31 -= (~(min(((var_14 ? (arr_16 [i_6] [i_4] [i_5 - 1] [i_6] [3]) : var_3)), (~var_17))));
                            var_32 = ((~((var_16 ? (var_19 + var_0) : 916167714))));
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_33 = (((((!(arr_20 [i_8] [i_6] [i_5] [i_5] [i_4] [i_3] [8])))) % (!var_0)));
                            var_34 = ((((min(((var_5 ? var_16 : (arr_8 [i_3]))), var_19))) ? ((((((var_16 ? -121 : var_18))) ? (((arr_22 [i_3] [i_3] [9] [i_3] [i_3] [i_3]) ? (arr_8 [i_3]) : -1245178375)) : (var_6 <= var_9)))) : ((-var_13 ? (((var_4 ? var_10 : (arr_18 [i_3] [i_3] [11] [i_3] [i_3])))) : (arr_21 [i_8] [i_5])))));
                            arr_24 [2] [i_5] [i_6] [2] |= ((max(((1 / (-9223372036854775807 - 1))), -5653141561384821362)));
                            arr_25 [i_4] [i_4] [11] = (arr_22 [i_8] [i_8] [i_6] [i_5] [i_4] [i_3]);
                        }
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        var_35 -= (var_14 - -4546574801056572742);
                        var_36 = (min((max(((var_12 ? 635692346 : -2133834428)), ((27 ? 1 : (-2147483647 - 1))))), ((var_0 ? var_11 : (arr_11 [i_3] [i_3] [i_4])))));
                        arr_30 [i_4] [i_4] [i_5] [i_9] = var_13;
                        arr_31 [i_3] [i_4] [i_4] [i_9] = (arr_10 [i_4] [i_3]);
                        arr_32 [i_3] [i_3] [i_3] [1] [i_4] = (((var_18 ? (975858136 + var_16) : (arr_10 [i_4] [i_4 - 2]))));
                    }
                    arr_33 [i_4] = ((((((((arr_12 [i_4] [i_4] [9] [i_4]) ? var_7 : 910953811))) ? ((-1592088756 ? (arr_12 [i_3] [i_4] [i_5 - 1] [i_4]) : (arr_15 [i_5] [i_4 + 2] [8] [i_3]))) : (~4546574801056572742))) + (((23 ? (min(916167687, 78)) : 170)))));
                }
            }
        }
    }
    var_37 = var_13;
    #pragma endscop
}
