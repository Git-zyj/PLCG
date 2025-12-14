/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (100 || 16969211987131021918);
        var_12 *= (((arr_1 [i_0 - 1]) * (arr_1 [i_0 - 1])));
        var_13 -= ((!var_11) ? (~16969211987131021901) : 1477532086578529700);

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_14 -= ((1477532086578529700 ? 23015 : 1735545762));
            var_15 = ((!(arr_4 [i_0 - 1] [i_0 + 1])));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                arr_10 [i_0] [i_2] [i_2] [4] = var_10;
                var_16 = (max(var_16, (arr_9 [i_0 + 1])));
                var_17 ^= 26713;
                var_18 ^= (arr_7 [15] [i_0 + 1]);
                var_19 = (((-2147483647 - 1) * (arr_6 [i_0])));
            }
            for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
            {
                var_20 -= ((689 >= (-127 - 1)));
                var_21 = (((329084991035499823 > 0) ^ -1));
                var_22 = ((64863 + (-127 - 1)));

                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_23 = var_2;
                    var_24 = var_1;
                    var_25 = 1;

                    for (int i_6 = 4; i_6 < 15;i_6 += 1)
                    {
                        arr_20 [i_0] [i_2] [i_4] [i_5] = -var_7;
                        arr_21 [i_0] [i_0] [i_0 - 1] [10] [i_0] [i_0] = var_10;
                        var_26 = (((arr_18 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 2] [i_6 + 1] [i_6] [i_6]) ? 848458601 : (arr_18 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1] [i_6 - 4] [i_6] [1])));
                    }
                }
            }
            for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
            {
                var_27 = (arr_13 [3] [i_0] [i_0 + 1] [i_0]);
                var_28 = (!2147483647);
                arr_24 [i_0] [i_2] [i_7] = (arr_3 [i_7]);
            }
            var_29 -= 64851;
            var_30 = (arr_11 [i_0]);
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            var_31 -= var_9;
            var_32 = (!848458590);
            arr_28 [i_0] [i_8] [i_8] = (((arr_11 [i_0 - 1]) & 32564));
            var_33 *= (848458601 / var_4);
        }
        var_34 = (arr_19 [i_0 + 1] [i_0 - 1] [i_0 + 2]);
    }
    var_35 = ((var_10 & ((var_5 ? (min(3446508694, var_5)) : (min(-6, 2065793608))))));
    var_36 = (min((~var_11), (((((var_5 ? 3 : var_5)) == var_7)))));
    var_37 = 25;
    var_38 ^= (min(((((var_8 / 10) == var_7))), var_4));
    #pragma endscop
}
