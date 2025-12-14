/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= 16352;
        arr_3 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
        var_13 = (max(var_13, (~17564554069738230744)));
        var_14 = (max(var_14, -8956998838130891467));

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            var_15 = (min(-8956998838130891467, (((min(0, 1)) ? (max(var_12, var_8)) : (min(-8956998838130891467, 8956998838130891467))))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_16 = (((var_11 ? (arr_6 [i_1] [i_0] [i_0]) : 1332240459)));
                arr_9 [i_0] [i_1] [i_1] [i_2] = 15;
                var_17 = (min(var_17, (arr_1 [i_1] [0])));
            }
            arr_10 [i_1] [i_0] = (min((arr_5 [i_0] [i_1 - 1] [i_1]), 2305843009213693952));
        }
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            var_18 = (max(var_18, var_11));
            var_19 = (max(var_19, ((((0 <= var_7) % var_4)))));
            var_20 -= var_8;
            arr_13 [i_0] [i_3] [i_0] = (((arr_5 [i_0] [i_3] [i_3]) ? ((32 ? 30575 : var_9)) : ((1 ? 0 : 32767))));

            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    arr_20 [i_3] [i_3] [i_4] [i_5 + 1] = (((((!(arr_18 [9] [i_4] [9] [i_4] [i_3] [i_4]))))) ? (arr_1 [i_0] [i_3 - 3]) : var_1);
                    arr_21 [i_3] [i_3] [i_4] [i_3] = (arr_17 [i_0] [i_0] [i_0] [i_5]);
                    arr_22 [i_4] [i_4] [i_3] [i_4] = 63;
                }
                var_21 = (min(var_21, (((((arr_18 [i_0] [i_0] [i_0] [i_3 + 1] [i_0] [i_0]) ? 32256 : (arr_4 [i_4])))))));
            }
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_27 [4] = (127 * 2305843009213693952);

            /* vectorizable */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                arr_32 [i_0] [i_7] [6] = ((255 ? 2305843009213693952 : 51));
                arr_33 [i_0] [i_6] [i_7] = ((12 ? 0 : -8956998838130891467));
                arr_34 [i_7] = (18104840163407743439 ? (((-8918191328122476831 ? (arr_14 [i_0] [i_0] [i_0]) : 0))) : var_10);
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                var_22 = (max(var_22, 8191));
                arr_39 [i_8] [i_6] [i_6] [3] = (((arr_14 [i_0] [i_6] [11]) ? 2962726836 : 4886));
                arr_40 [i_0] [i_0] [i_8] = 255;
                arr_41 [i_0] [i_8] [i_8] [i_0] = var_8;
            }
            arr_42 [i_0] = (arr_19 [i_0] [i_0] [0] [i_0] [i_0] [i_0]);
            var_23 = (arr_28 [i_0] [i_0] [i_0] [i_0]);
            var_24 = (1023 & var_12);
        }
    }
    var_25 = var_12;
    #pragma endscop
}
