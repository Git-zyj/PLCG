/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((0 ? 0 : 253156162));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_8 [i_0] [i_0] = 4041811127;
            arr_9 [i_0] [i_1] = ((~(arr_2 [i_0])));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_12 [3] [i_2] [i_0] = (arr_0 [i_0]);
            arr_13 [i_0] = (arr_2 [i_2]);
            var_19 = (min(var_19, (~4290249412)));
        }
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                arr_19 [i_0] [i_3] [i_0] = (arr_2 [i_0]);
                var_20 = (((arr_4 [i_3]) ? 16777215 : (~4041811134)));
            }
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_21 = var_5;
                var_22 = ((16777215 ? 3414143860 : 4041811134));
            }
            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                arr_25 [i_0] = var_9;
                var_23 = ((var_3 ? var_12 : 617038152));
                var_24 |= var_8;
            }
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                arr_29 [i_0] [i_3] [i_7] = var_17;
                var_25 = (4041811134 ^ 9223372036854775790);
                var_26 = (min(var_26, (arr_16 [i_3 - 1] [i_3])));
            }

            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                arr_34 [i_0] [i_3] [i_8] [i_0] |= (arr_15 [15] [15] [15]);
                var_27 = (4041811133 | 0);

                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    var_28 = 4041811134;
                    var_29 = (min(var_29, var_6));
                }
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    var_30 *= ((var_17 ? (arr_30 [i_3 - 1] [i_3 + 1] [i_3 - 1]) : var_1));
                    arr_40 [i_3] [i_8] |= var_8;
                    var_31 = var_14;
                }
                for (int i_11 = 1; i_11 < 17;i_11 += 1)
                {
                    var_32 = (arr_6 [i_3 + 1] [i_0]);
                    arr_43 [i_0] [i_3 + 1] [15] [i_0] = (arr_37 [i_3 + 1] [i_11 + 2] [i_11] [3]);
                    arr_44 [i_11] [i_0] [i_0] [i_0] = (~4041811133);
                }
                var_33 *= ((0 ? 1 : 253156163));
            }
        }
        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            var_34 = (((~4041811134) ? 4278190081 : (arr_33 [i_0] [i_12])));
            var_35 = ((4278190079 ? var_2 : (arr_21 [i_0])));
        }
        var_36 = var_7;
    }
    for (int i_13 = 3; i_13 < 16;i_13 += 1)
    {
        var_37 = var_9;
        var_38 = ((1 ? 1202894097 : var_0));
    }
    #pragma endscop
}
