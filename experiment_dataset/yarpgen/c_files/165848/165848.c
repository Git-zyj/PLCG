/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_16 = var_0;
            var_17 *= (arr_2 [i_1]);
            var_18 = 3565680060677165013;
            var_19 |= 1095401912;
            var_20 = arr_3 [i_0];
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                var_21 *= 0;

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    arr_17 [i_0] [i_2] [i_3 - 2] [i_2] = (((arr_3 [i_0 + 2]) != (arr_8 [i_0])));

                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        var_22 = (((~var_4) >= (arr_10 [i_3 + 2] [i_5 + 1] [i_0 + 1] [i_4])));
                        arr_20 [i_0] [i_0 - 1] [i_2] [i_0] [i_0 - 1] = (((arr_14 [i_0 + 2] [i_5 + 1] [i_5] [i_5]) | (arr_2 [i_0 + 2])));
                    }
                    for (int i_6 = 3; i_6 < 17;i_6 += 1)
                    {
                        var_23 = (arr_19 [i_3 - 2]);
                        var_24 = (((arr_22 [i_6] [i_6 - 3] [i_6 + 2] [i_6] [i_6 - 3] [i_6]) >> ((((-(arr_13 [i_6 + 1] [i_3] [i_2]))) + 170))));
                    }
                }
                var_25 *= (arr_4 [i_0] [i_0]);
            }
            var_26 ^= 18446744073709551605;
        }

        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            arr_26 [i_0] = 429017936;
            var_27 = ((!(arr_7 [i_0])));
            arr_27 [4] = 8191;
            var_28 = arr_13 [i_0 + 3] [i_0] [i_0];
        }
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            var_29 = (min(var_29, (arr_9 [i_8])));
            var_30 *= (max((arr_24 [i_0] [i_0 + 1] [i_0]), (arr_28 [i_0] [i_0 + 4] [i_8])));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    {
                        var_31 -= ((~(((arr_32 [i_9] [14]) ? ((30155 ? var_0 : (arr_22 [i_0 + 3] [i_0] [i_0] [i_0 + 2] [i_0] [i_0]))) : var_10))));
                        arr_36 [i_0] [9] = (min((arr_5 [i_0] [i_0]), (arr_22 [1] [i_8 + 2] [i_8] [i_8 + 3] [i_9] [i_10])));
                    }
                }
            }
            var_32 -= (((((-(arr_31 [i_8 + 1] [i_0 + 2] [i_0])))) ? ((((!var_6) != (arr_0 [18] [i_0])))) : ((-((min(30720, 65535)))))));
        }
    }
    var_33 &= (max((((var_5 >= var_4) - -0)), var_14));
    var_34 = (min(1, (min((var_0 * var_6), var_4))));
    #pragma endscop
}
