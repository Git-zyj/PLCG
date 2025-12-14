/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 4294967295;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_21 &= (((arr_2 [i_0]) << (((arr_2 [i_1]) - 3489))));
            var_22 += (((-22668 < 8330) ? (var_9 & 1) : -22671));
            var_23 *= -22674;
            var_24 -= ((-var_7 ? (arr_0 [i_0]) : ((((((arr_1 [i_0] [i_0]) ? 22667 : 4294967290))) ? (((-22684 ? var_19 : var_14))) : ((-22669 ? (arr_0 [i_1]) : (arr_0 [i_0])))))));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_25 = arr_7 [i_0] [i_2];
            var_26 = ((((22672 / (arr_7 [i_0] [i_2]))) - ((((3906188091 || -127401174) * (var_18 > var_10))))));
        }
        for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
        {
            var_27 = ((((min((22677 * 4294967267), (1023 > 977135892)))) ? ((min((arr_11 [i_3 - 1] [i_3]), 57205))) : ((10270514379135460674 ? 13188377970720427387 : 65532))));
            var_28 = ((-(22923 / var_2)));
            var_29 &= (((9558 > 57589) ? ((var_14 ? ((828596058 ? (arr_8 [i_0] [i_0] [i_3]) : var_5)) : ((22682 ? var_1 : var_7)))) : (((((arr_3 [i_3 - 1] [i_3 - 1]) || var_3))))));
            var_30 ^= ((-((((((57193 ? (arr_4 [i_0] [i_3]) : -22681))) && (var_2 || -22685))))));
        }
        for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                var_31 = ((!((min((arr_9 [i_0] [i_4] [i_4 - 1]), -9223372036854775791)))));

                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_32 = ((57218 / ((((4294967277 ? 4294967285 : (arr_6 [i_0] [i_0]))) * var_8))));
                    var_33 *= ((var_17 * (max(((-2065608290 ? var_5 : var_16)), (((4294967290 ? 4294967290 : (arr_20 [i_0]))))))));
                    var_34 &= (arr_1 [i_4] [i_5]);
                }
            }
            for (int i_7 = 1; i_7 < 22;i_7 += 1)
            {
                var_35 = ((((((arr_1 [i_0] [i_4]) ? ((min((arr_10 [i_7]), var_17))) : var_10))) ? -14529 : 17997));
                var_36 = (max((arr_8 [i_0] [i_4] [i_4]), var_6));
            }
            var_37 = ((-(((arr_5 [i_4 - 1] [i_4]) | (arr_5 [i_4 - 1] [i_4])))));
            var_38 = ((14528 * ((-14541 ? 32754 : 1))));
            var_39 = ((~((max((max(var_15, var_12)), var_12)))));
            var_40 = max((((((22678 ^ (arr_5 [i_0] [i_0]))) > (min(var_10, (arr_8 [i_0] [i_0] [i_0])))))), -14524);
        }
        var_41 ^= ((!(((var_11 ? var_6 : 22686)))));
    }
    var_42 = var_19;
    #pragma endscop
}
