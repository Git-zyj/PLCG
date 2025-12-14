/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_6 [i_1] = (min((((5830 ? (arr_4 [i_0 + 3] [i_0] [i_0 + 1]) : (arr_4 [i_0] [i_0] [i_0 + 3])))), (((((var_9 ? 23864 : -23864))) ? (~4721002141875068874) : (-23864 - -5838)))));
            var_17 = ((-5916049672030944850 ? (arr_2 [i_0 + 3]) : (((-5815 + 2147483647) >> (63 - 34)))));
            var_18 = ((1 ? 1 : 15577));
            arr_7 [i_1] [18] [i_0] = ((10076220346117342605 - ((((((arr_2 [i_0]) && var_13)) ? (!74) : ((min((arr_1 [i_1]), 59195))))))));
            var_19 -= (arr_0 [i_0 + 1]);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_20 += min((((59206 ? 59224 : 5847))), 2096640);

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_21 = var_5;
                arr_14 [i_0] [i_2] [i_2] = ((((!(((10076220346117342610 ? 3182 : 1))))) ? (3401987805 - 8370523727592209010) : ((min((((((arr_2 [i_0]) + 2147483647)) >> (4294967295 - 4294967280))), (~-6638))))));
                arr_15 [i_0] [i_2] [i_2] = 1;
            }
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {

                /* vectorizable */
                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    var_22 = ((!(arr_4 [i_0 + 4] [i_5 + 2] [i_5])));
                    var_23 -= ((~(~892979490)));
                    arr_21 [i_2] = (arr_12 [i_0 + 2] [i_2] [i_5] [i_2]);
                }
                var_24 |= min((arr_11 [i_4] [16] [i_0 + 3] [i_0 + 3]), (((4624 >> 1) ? (arr_0 [i_2]) : (((5303 >> (-5862 + 5886)))))));
            }
            var_25 = (arr_18 [i_0 + 1] [i_0 + 1] [i_2] [i_2]);
            arr_22 [i_2] = -30899;
            var_26 = (max(var_26, var_14));
        }
        var_27 = 1;
    }
    var_28 = var_7;
    var_29 = (65535 - var_1);
    var_30 = (((-var_10 - 1353158752) ? var_10 : (((var_5 ? var_15 : (1445799208 >> var_7))))));
    #pragma endscop
}
