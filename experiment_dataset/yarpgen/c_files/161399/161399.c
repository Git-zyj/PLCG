/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((+(((113 - -19261) ? ((max(19261, -15889))) : 126))))));
    var_17 = ((-((~((max(19260, var_10)))))));
    var_18 = 19261;
    var_19 = (min((min((var_0 & var_3), -var_5)), ((max(((48814 ? 1 : 30473)), var_0)))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_20 *= (max(((((19275 ? 19246 : 1453626168471400848)))), (((((556010325 ? 142 : var_0))) ? (~128) : (((!(arr_0 [1] [1]))))))));
        var_21 = (((((var_1 ? -943149972936021406 : (!var_0)))) ? ((168 ? 35063 : ((min((arr_1 [i_0] [i_0 - 2]), (arr_1 [i_0] [i_0])))))) : ((var_6 ? 5629373039172809511 : 195))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_22 -= (max((!-7), (min(var_14, (arr_0 [i_1] [i_1])))));

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_23 = ((129 ? 127 : 7));
            var_24 = (max(var_24, ((((max(((((arr_3 [i_2]) ? var_4 : var_9))), var_1)) ^ (((((var_8 ? (arr_2 [i_1] [i_2]) : 245760))) ? (arr_5 [5]) : (max((arr_7 [12] [i_2]), 87)))))))));
        }

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_25 = ((!(((-(var_6 / var_10))))));
            var_26 = (max(((+(max((arr_5 [i_3]), 731156150)))), -14581));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_27 = ((-(((!(arr_7 [i_4] [i_4]))))));
            arr_12 [i_4] [i_4] = ((-((((max(114, 506028933))) ? (0 ^ var_11) : (var_0 >= -1838995781)))));
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_28 = (((28 <= -32740) ? (((-2147483647 - 1) ? var_7 : var_2)) : ((((((max(var_8, -2142))) && (((var_15 ? var_8 : (arr_0 [i_1] [i_1]))))))))));
            var_29 = (max(var_29, ((max((~16), (47028 != -19253))))));
            arr_15 [i_1] [i_5] = (((((((min((arr_9 [i_5] [i_5]), var_2))) ? 47649155 : -var_8))) ? -2142 : var_1));
        }
        var_30 |= (max(((((((min((arr_0 [i_1] [i_1]), -19261)))) < ((var_10 ? var_2 : var_13))))), (min((max(var_8, 2903505649810990336)), -var_14))));
        var_31 = (min(-1850855539049099322, (min((arr_4 [7] [i_1]), var_9))));
    }
    #pragma endscop
}
