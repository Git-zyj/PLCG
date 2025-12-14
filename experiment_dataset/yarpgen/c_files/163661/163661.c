/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (max(var_16, (arr_1 [i_0])));
        var_17 = (arr_1 [i_0]);
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) * (-9223372036854775807 - 1)));
        arr_3 [1] [i_0] = ((1 ? (1 || var_14) : (arr_0 [i_0] [i_0])));
        var_18 = ((var_12 ? (arr_1 [i_0]) : (arr_1 [i_0])));
    }
    var_19 = (max(var_7, var_10));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 = (!3);
        var_21 = ((0 ? var_8 : (((var_2 ? var_4 : 124)))));

        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            var_22 = (min(var_22, (((+((933466631 << (((arr_6 [5] [i_2]) - 886846283)))))))));
            var_23 = (arr_9 [i_1] [i_2 + 1] [8]);
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_24 = ((-561525086 ? ((((arr_10 [i_1] [i_3] [i_3]) == -5317))) : ((0 ? -30 : 1))));
            var_25 = (((arr_10 [i_1] [i_1] [i_1]) || (arr_10 [i_1] [i_1] [i_1])));
        }
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_26 = (((((arr_15 [i_4] [i_4]) * 0)) * ((((arr_14 [i_4]) != var_12)))));
        var_27 = ((-2547531288144926543 ? ((var_13 - (max(-953297816, -22028)))) : (var_8 + 1)));
        var_28 &= (min((((4679 + (65535 + -98)))), ((8213 - (arr_1 [i_4])))));
        var_29 = (max(var_29, ((((((arr_1 [i_4]) ? (arr_1 [i_4]) : -417052754)) + (arr_14 [i_4]))))));
    }
    var_30 = ((~((~(~1126306961)))));
    var_31 ^= 47;
    #pragma endscop
}
