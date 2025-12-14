/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= var_9;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = ((~((max(var_8, var_2)))));
        var_14 = max((((48 ? 15 : 13006))), (3854201263547714198 & 1008));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_15 = ((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1]));
        var_16 = (((((64851 ? var_2 : 18446744073709486080))) || (~6284663134984698179)));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_17 = (arr_2 [i_1] [i_1]);
            var_18 = (max(var_18, 33662));
            var_19 = 65535;
            var_20 = ((var_4 ? (arr_5 [i_2] [i_2]) : (arr_5 [i_1] [i_1])));
        }
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            var_21 = var_1;
            var_22 = (var_7 ? 24 : ((9223372036854775807 ? var_7 : (arr_8 [i_1] [15]))));
            var_23 = (max(var_23, (((245 ? (arr_6 [i_1]) : (((arr_7 [i_1]) / var_9)))))));
            var_24 ^= (!7568462967643388915);
            var_25 = (max(var_25, (((!(arr_8 [i_1] [i_1]))))));
        }
        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {

            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {

                for (int i_6 = 4; i_6 < 16;i_6 += 1) /* same iter space */
                {
                    arr_16 [i_1] [i_1] [i_1] [i_1] = (((arr_3 [i_4 - 1]) != (arr_3 [i_4 - 2])));
                    arr_17 [i_1] [i_1] [i_5 + 2] [i_5 - 1] [i_1] [i_5 + 2] = (arr_10 [i_1] [i_4]);
                }
                for (int i_7 = 4; i_7 < 16;i_7 += 1) /* same iter space */
                {
                    var_26 |= (!260046848);
                    var_27 = 11723418600958639924;
                    var_28 = (arr_14 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_7 - 1] [i_5 + 1]);
                }
                for (int i_8 = 4; i_8 < 16;i_8 += 1) /* same iter space */
                {
                    arr_24 [i_1] [i_4] [i_1] [i_8] = (~-12);
                    var_29 = ((9223372036854775807 ? ((var_2 ? (arr_7 [i_8]) : 210)) : 824255824543239256));
                    var_30 = ((((arr_7 [i_1]) != 0)));
                }
                var_31 = ((65535 ? (~562915593682944) : ((((arr_23 [i_5]) + 19374)))));
            }
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                var_32 |= ((((((arr_26 [i_1] [i_1] [i_1]) < (arr_22 [i_1] [i_1] [i_1] [i_1])))) / ((11540 << (((arr_19 [i_1] [13] [i_1] [i_1]) - 2770024514735291699))))));
                var_33 += var_2;
                var_34 = ((arr_4 [i_9 - 1]) ? (arr_4 [i_9 + 1]) : (arr_4 [i_9 - 1]));
                var_35 = (arr_6 [i_4]);
                var_36 = var_1;
            }
            for (int i_10 = 1; i_10 < 16;i_10 += 1)
            {
                var_37 = var_10;
                var_38 = var_1;
                var_39 = (((5985876048391816718 | 1167775519457262320) ? (0 || -7554315426459670690) : (arr_10 [i_1] [15])));
                var_40 |= (((arr_30 [i_4 + 2] [i_4 + 2] [i_4]) ? 3742208470397182491 : (~var_8)));
                var_41 = (((arr_25 [i_4 + 3] [i_4 + 2] [i_10 - 1]) <= (arr_29 [i_4 - 1] [i_10] [i_10 + 3] [i_10])));
            }
            var_42 = (~127);
            arr_31 [1] [i_4] = (~var_1);
            var_43 -= (((56 ? 13723829632039572560 : 127)));
        }
        for (int i_11 = 1; i_11 < 18;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    {
                        var_44 = ((0 ? (arr_22 [i_1] [i_11] [i_11 - 1] [i_11 - 1]) : -87));
                        var_45 = -50;
                    }
                }
            }
            var_46 = ((4892159248856184468 - (!7)));
        }
    }
    #pragma endscop
}
