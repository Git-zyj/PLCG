/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((((min(var_1, 0))) <= (var_0 * 140737488355327))), (!var_9)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 ^= ((((~(~var_4))) & ((((min(var_4, var_8)) == (arr_0 [i_0]))))));
        var_12 = (min(-18446603336221196300, (140737488355306 | 1560)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_13 = 10580223539955957893;
            var_14 = 18446603336221196290;
            arr_7 [i_1] = (((arr_3 [i_1] [i_2]) & 0));
            arr_8 [i_1] = ((123 ? 511 : 18446603336221196270));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {
            arr_11 [i_1] [i_3] = (arr_9 [i_1] [i_3]);
            arr_12 [i_3] [i_1] [i_1] = 195;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_15 = 140737488355334;
                var_16 = (arr_15 [i_1] [i_1] [i_1]);
                var_17 = var_1;
            }
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_27 [i_1] [9] [i_1] [i_7 - 1] [i_8] = ((-(arr_14 [i_1] [i_8 - 1] [15])));
                            var_18 = ((((arr_15 [i_8] [i_6] [1]) ? 1 : (arr_6 [i_1] [i_4] [i_6]))));
                        }
                    }
                }
            }
        }
        for (int i_9 = 2; i_9 < 15;i_9 += 1)
        {
            var_19 = ((~(max((((arr_26 [i_1] [i_1]) ? 122 : 140737488355325)), (arr_3 [i_1] [i_9])))));
            arr_32 [i_1] [i_9] [i_1] = (((116 && (arr_30 [i_9 + 1] [i_1]))));
            arr_33 [i_1] [16] = (!((((arr_30 [i_9 + 4] [i_1]) << 16))));
        }
        arr_34 [i_1] [i_1] = (((((18446603336221196270 ? (arr_29 [i_1]) : (arr_26 [i_1] [i_1])))) ? ((max(123, 14))) : (max(var_8, (arr_4 [i_1])))));
        arr_35 [i_1] [i_1] = var_7;
    }
    #pragma endscop
}
