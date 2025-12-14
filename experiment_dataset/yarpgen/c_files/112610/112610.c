/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_17));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (arr_1 [i_0]);
        arr_3 [11] [1] = ((~(((arr_0 [i_0]) ? (arr_2 [i_0]) : (arr_2 [11])))));

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            arr_7 [i_0] = (((arr_5 [i_1 + 1] [i_1 + 1]) + (arr_5 [i_1 + 1] [i_1])));
            var_21 = (!-48);
            var_22 += (var_5 / 2818035627083380455);
            var_23 = (((arr_6 [i_1 - 2] [i_1 - 1]) == (arr_6 [i_1 - 2] [i_1 + 1])));

            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                var_24 = (max(var_24, (arr_0 [i_1 - 2])));
                var_25 = (arr_8 [1] [1] [5]);
                arr_11 [i_0] [i_0] [11] = (arr_8 [i_0] [i_0] [i_0]);
                var_26 = 0;
            }
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_27 = (~-14);
                var_28 = (~71);

                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {
                    var_29 ^= ((-79 ? (~var_7) : 10));
                    var_30 ^= var_7;
                }
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    var_31 = (arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1]);

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_32 = (arr_20 [i_0] [i_0] [11] [i_0] [i_0] [i_0] [i_0]);
                        arr_23 [i_6] [i_5 - 1] [i_3] [i_3] [6] [i_0] = (arr_17 [i_0] [i_0] [1] [i_5 - 1] [8] [i_1 + 1]);
                        arr_24 [i_6] [1] [i_3] [i_5] [i_3] |= (arr_16 [i_0] [i_3] [i_3] [i_6] [i_6]);
                        var_33 = ((-21407307 * (arr_8 [9] [i_3] [i_6])));
                    }
                }
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    arr_29 [i_3] [i_3] [3] [9] [i_3] [i_3] = (((((arr_28 [i_0] [i_1 - 1]) / (arr_12 [i_0] [i_0]))) / (48 && -2081475480)));
                    var_34 = (min(var_34, ((((!var_8) ? (((!(arr_6 [i_3] [i_0])))) : (arr_28 [8] [i_1 - 1]))))));
                    var_35 = (max(var_35, 4));
                }
            }
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            var_36 = (((arr_6 [i_0] [i_8]) ? (arr_6 [1] [i_8]) : (arr_6 [i_0] [i_0])));
            arr_32 [4] [i_0] [11] = (arr_14 [i_0] [i_8]);
            arr_33 [i_0] [i_0] [i_0] = (arr_9 [i_0] [i_8] [i_8]);
        }
        var_37 -= (arr_21 [i_0] [7] [1] [i_0] [i_0] [i_0] [i_0]);
        arr_34 [10] = -var_15;
    }
    #pragma endscop
}
