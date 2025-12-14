/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_1));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] |= (arr_0 [i_0]);
        var_17 = (max(var_17, (((((max((max((arr_1 [i_0]), (arr_0 [i_0]))), ((var_15 ? 66 : (arr_0 [i_0])))))) ? (((arr_1 [i_0]) ? ((min(var_10, var_8))) : (arr_1 [i_0]))) : ((-(arr_1 [i_0]))))))));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1 + 3] = (58 != 156);
        arr_8 [i_1 - 2] = ((+((((((arr_0 [1]) ? (arr_3 [i_1] [i_1]) : var_3))) ? (~0) : var_4))));
        arr_9 [i_1] = 171;
        arr_10 [i_1] = ((75 ? 193 : 1));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (((((((arr_11 [i_2] [i_2]) ? 4281725736 : (arr_11 [i_2] [i_2]))) >= 8176))))));

        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            var_19 = 66;
            arr_19 [i_3] [i_3 - 1] = ((+((112 ? (max((arr_11 [i_2] [i_3]), 4281725738)) : (((((arr_13 [11]) != 2147483633))))))));
            var_20 = (min(255, 1));
        }
        var_21 *= (arr_12 [i_2]);
        var_22 = (((((arr_15 [i_2] [i_2] [i_2]) >= (arr_15 [i_2] [i_2] [i_2]))) ? (((arr_16 [i_2] [i_2] [i_2]) ? (arr_18 [i_2] [i_2] [i_2]) : var_11)) : (((281406257233920 ? -1 : 1)))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {
        var_23 += (max((((var_11 ? (arr_13 [i_4]) : ((((arr_11 [i_4] [i_4]) || 169)))))), (((((var_10 ? (arr_20 [i_4]) : (arr_14 [i_4] [i_4])))) & var_13))));

        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            var_24 = ((var_2 ? ((((8191 ? 42050 : 1)))) : (((((255 ? var_0 : 2423056526244417336))) ? (arr_12 [i_4]) : var_1))));
            arr_27 [i_5] [i_5] = ((var_14 ? var_1 : ((((arr_18 [i_5 + 1] [i_5 + 2] [i_5]) || (arr_22 [i_4]))))));
            arr_28 [i_4] [i_4] [i_5] = (((((~(arr_22 [17])))) ? ((min((arr_16 [i_5 - 1] [i_5] [i_5 - 1]), (arr_16 [i_5 + 2] [i_5 + 1] [i_5])))) : ((1228213896 ? var_0 : (arr_20 [i_5])))));
            var_25 -= ((((max(1, (arr_11 [i_4] [i_5 - 1])))) - ((max((arr_16 [i_4] [i_4] [i_5 + 1]), ((max((arr_26 [i_5 + 2]), 62))))))));
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_26 = (((~-3778744287299343080) ? (((arr_25 [i_4] [i_6]) & (arr_24 [i_6] [i_6]))) : (((arr_24 [i_4] [i_4]) ? (arr_25 [i_4] [i_6]) : (arr_25 [i_6] [i_4])))));
            arr_31 [i_4] [i_4] = (min(179, 1));
        }
        arr_32 [i_4] = (arr_14 [i_4] [i_4]);
        var_27 = (min(var_27, ((max(-var_10, (max((((arr_30 [i_4]) ? (arr_12 [i_4]) : (-9223372036854775807 - 1))), 255)))))));
        arr_33 [i_4] = ((4294967285 ? 1 : 171));
    }
    #pragma endscop
}
