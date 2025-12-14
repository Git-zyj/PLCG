/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-5882718460446296640 ? var_7 : (max(9175778397785940676, (var_8 & var_6))));
    var_14 = min(((var_6 ? var_9 : (min(5882718460446296639, 5882718460446296627)))), var_0);
    var_15 = var_3;
    var_16 = min((~var_2), var_12);

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_17 ^= (((min((((arr_2 [12]) ^ (arr_1 [i_0]))), var_4))) ? (arr_0 [10]) : -5882718460446296639);
        arr_3 [0] |= (((arr_1 [i_0 + 1]) ? 5882718460446296640 : 5882718460446296639));
        arr_4 [i_0] = (((arr_2 [i_0]) / (arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_18 = min((arr_1 [i_1]), ((((arr_1 [i_1]) < 9223372036854775807))));

        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            var_19 = (arr_2 [i_1]);
            var_20 = ((-9223372036854775807 - 1) ? ((((min(var_9, (arr_1 [i_1])))) ? (min((arr_8 [i_1] [i_1]), var_11)) : 2236800011471289083)) : ((((1559631534174509403 ? (arr_7 [i_1] [i_1]) : 16382)) ^ (((arr_0 [i_1]) ? var_7 : (arr_6 [i_1] [i_1]))))));
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_21 = 738142483019394570;
                            var_22 |= ((arr_15 [i_1] [i_1] [i_1] [i_4 + 1]) ? (arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) : -5916749547345176715);
                            var_23 ^= ((((-3791422002951445864 ? -3896661235397064394 : (arr_19 [8] [8] [i_4])))) ? (arr_0 [12]) : -2750671219340655456);
                            var_24 = -1559631534174509411;
                            var_25 = (arr_11 [i_1] [i_1] [2]);
                        }
                    }
                }
            }
            var_26 &= var_0;
            arr_20 [i_1] = (~var_9);
        }
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        arr_23 [i_7] &= (((max(2236800011471289066, (min(1020088347071126721, (arr_21 [i_7] [i_7])))))) ? ((-738142483019394552 ? (arr_22 [i_7] [i_7]) : (arr_22 [i_7] [i_7]))) : 1099510579200);
        var_27 ^= arr_22 [i_7] [i_7];
        var_28 = (((min((arr_21 [i_7] [i_7]), (arr_21 [i_7] [i_7])))) ? 9223372036854775781 : (arr_21 [i_7] [i_7]));
    }
    #pragma endscop
}
