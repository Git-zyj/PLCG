/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_8);
    var_11 = (((var_8 % var_9) > var_8));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = (arr_1 [i_0]);
        var_13 = var_8;

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_4 [i_1] = ((!(arr_1 [i_1])));
            var_14 = (arr_3 [i_0] [i_1] [i_1]);

            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                var_15 = (arr_5 [i_2 + 1] [i_1] [i_2 + 1]);
                var_16 = var_3;
                var_17 = (!var_0);
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {

                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    var_18 ^= (((arr_9 [i_4] [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1]) ? var_6 : var_9));
                    var_19 = (var_2 ? 1 : ((~(arr_2 [i_0] [i_0] [i_0]))));
                    var_20 = (max(var_20, (((var_0 ? (arr_0 [i_4 - 1]) : (arr_0 [i_4 - 1]))))));
                    var_21 = ((var_0 || (arr_6 [i_3] [i_1] [i_0])));
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_22 = (-3220 != var_2);
                    var_23 = (arr_0 [i_1]);
                }
                arr_14 [i_3] [i_3] [i_1] [i_0] = ((var_4 <= (((arr_1 [i_1]) ? var_0 : var_6))));
            }
            var_24 = ((var_5 - (arr_3 [i_0] [i_0] [i_0])));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_25 = var_1;
            var_26 = (((arr_13 [i_0] [i_0] [i_0] [i_6]) ? var_7 : var_4));
            var_27 = ((!(var_7 | var_0)));

            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                var_28 += ((~(arr_17 [i_0] [i_7])));
                var_29 = 3241;
                var_30 += arr_18 [i_6] [8];
                var_31 = (((arr_8 [i_0] [i_6] [i_7]) ? (arr_8 [i_7] [i_6] [i_0]) : var_3));
            }
        }
    }
    for (int i_8 = 1; i_8 < 24;i_8 += 1)
    {
        var_32 = (max((!var_1), (arr_20 [i_8])));
        var_33 = 510;
    }
    #pragma endscop
}
