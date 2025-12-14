/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (((((((arr_2 [i_0] [i_0]) ? (-9223372036854775807 - 1) : 6555)) + ((-(arr_2 [0] [i_0]))))) * ((((((var_10 ? (arr_1 [i_0]) : 1))) ? (arr_2 [5] [i_0]) : (((arr_1 [i_0]) ? (arr_0 [i_0] [12]) : 1)))))));
        var_15 = ((+(((((1 ? (arr_0 [i_0] [i_0]) : var_8))) ? var_9 : ((65535 ? 15 : (arr_0 [i_0] [i_0])))))));
        var_16 = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((!(arr_1 [i_0])))) : (arr_1 [i_0])));
        var_17 *= min((((!(arr_1 [i_0])))), (15 - 96));
        var_18 = (((arr_1 [i_0]) ? ((((217 ? 2508237481365965099 : 1)) - (4294967295 || 4294967295))) : (arr_2 [4] [i_0])));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_19 = (min(var_19, (((((min((arr_2 [i_1] [i_1]), (arr_2 [i_1] [i_1])))) ? ((((arr_5 [i_1]) ? 254 : 250))) : (((((248 + (arr_4 [17])))) ? ((236 / (arr_2 [7] [7]))) : (((-120 ? 65535 : 0))))))))));
        var_20 += var_11;
        var_21 &= (((((((arr_2 [i_1] [i_1]) ? 0 : 94)) / ((var_2 ? 538339922 : (arr_1 [i_1]))))) / (((+(((arr_4 [3]) + var_14)))))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [i_2] = 1;
        var_22 = (min((min((var_0 | 2757037758394687178), (((var_14 | (arr_9 [i_2] [2])))))), ((((471249081074597635 | 4294967295) & (((min((arr_8 [i_2]), var_14)))))))));
        arr_11 [13] [12] = (min((min(-1, -5375234424138158814)), (((((1 + (arr_7 [3])))) - (min(1750498138174500112, (arr_9 [i_2] [i_2])))))));
        arr_12 [i_2] = (arr_5 [i_2]);
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_23 = (min(var_23, 236));
        arr_15 [i_3] = ((var_8 || (arr_14 [i_3])));
    }
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        var_24 += (((4294967295 != 7) != (min((arr_2 [i_4 - 1] [i_4 - 1]), var_12))));
        arr_18 [i_4 - 1] = (((((((16384 + (arr_16 [i_4])))) - ((-(arr_17 [i_4 - 1]))))) <= 1532304498));
        arr_19 [i_4] = (((((((var_14 ? 758587428 : var_2)) * 3536379867))) ? (((((min(7, 3536379863))) ? ((var_12 ? var_9 : 677512360)) : (arr_13 [i_4 + 1])))) : (((((arr_16 [i_4]) != (arr_2 [i_4 + 1] [11]))) ? (min((arr_1 [i_4]), 17)) : -1099511627712))));
        arr_20 [i_4 - 1] = ((((min(18446744073709551598, (arr_14 [i_4 + 1])))) % ((((min((arr_0 [i_4 + 1] [i_4]), 8530266867936567951)) * (arr_1 [7]))))));
    }
    var_25 = (1 / 532676608);
    #pragma endscop
}
