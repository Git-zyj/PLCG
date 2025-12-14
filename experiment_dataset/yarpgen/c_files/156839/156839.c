/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_6;
    var_16 = ((var_8 >> ((((~(((var_5 + 2147483647) >> (var_3 - 1419810152))))) + 39))));
    var_17 = ((min(9145286582973911572, -22)));
    var_18 = 5252914997120249710;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = -5252914997120249720;
        arr_2 [i_0] = 0;
        var_20 = 76;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_21 = 1;
            var_22 += var_8;
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_23 &= ((1231781661 / (arr_6 [i_2] [i_2])));
        arr_8 [i_2] [i_2] = (((5245941482791746227 * 3063185635) ? (((1 ? 108 : var_11))) : (~6633045002994258847)));
        var_24 += ((-1253930029 * (!4294967289)));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_25 = (min(var_25, ((min(-5252914997120249720, (5252914997120249721 / -22))))));
        var_26 = (~5252914997120249720);
        arr_12 [i_3] [i_3] = (((3063185635 * (arr_11 [i_3]))));
    }
    for (int i_4 = 3; i_4 < 22;i_4 += 1)
    {
        arr_15 [5] [i_4] = ((~((~(~-1)))));

        for (int i_5 = 3; i_5 < 22;i_5 += 1)
        {
            var_27 = (15 >= var_8);
            arr_18 [i_4] = (arr_16 [i_5 - 3] [i_5] [i_5 + 2]);
        }
        for (int i_6 = 1; i_6 < 23;i_6 += 1)
        {
            arr_21 [1] [i_4] [i_4] = ((+((((min((arr_17 [i_4] [i_6] [20]), 5252914997120249710))) ? (arr_14 [i_6 + 1] [i_6]) : ((((-29245 + 2147483647) << (arr_17 [i_4] [i_6] [i_6]))))))));
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        {
                            var_28 += 1160448503;
                            var_29 = (min(var_29, 4294967259));
                        }
                    }
                }
            }
            var_30 = (min((-9223372036854775807 - 1), (((-var_10 ? (min(216, var_11)) : 1073737728)))));
        }
        var_31 = (max(var_31, (arr_19 [i_4] [i_4])));
        var_32 = (max(var_32, ((((~var_10) ^ ((-22 ? ((max(12, 5252914997120249710))) : 7617911567371772210)))))));
    }
    #pragma endscop
}
