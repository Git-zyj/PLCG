/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_14 = (max((min(-662722296939427113, 0)), ((max(((-662722296939427113 ? var_5 : (arr_0 [i_0]))), ((min((arr_1 [i_0]), (arr_1 [i_0])))))))));
        var_15 = ((~((((arr_1 [i_0]) < var_4)))));
        var_16 = ((var_9 ? (max(var_4, ((662722296939427113 ? -662722296939427113 : -662722296939427113)))) : (((max((arr_1 [i_0]), (arr_0 [i_0 + 2])))))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                var_17 = (min(var_17, ((min(var_0, var_3)))));
                arr_6 [i_2] [i_0] [i_0] = ((~((min(var_5, (arr_4 [i_0 + 2] [i_0 + 1] [i_0]))))));
                var_18 &= var_5;
            }
            for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
            {
                var_19 = (max((((!(arr_3 [i_0 - 1])))), (((arr_2 [i_0 + 2] [i_0 + 2] [i_0]) ? (arr_2 [i_0 + 1] [i_1] [i_0]) : (arr_2 [i_0 - 1] [i_0] [i_0])))));

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_20 *= (((var_11 && (arr_10 [i_0 + 2] [i_0]))));
                    arr_12 [i_0] [i_0] [i_3] [i_3] &= ((((var_0 ? -662722296939427113 : 662722296939427112))));
                    var_21 = arr_0 [i_0 + 1];
                }
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
            {
                var_22 = (min(var_22, (((662722296939427113 ? -32756 : 87)))));
                var_23 |= (~var_3);
                var_24 = var_6;
                var_25 ^= ((~((min(var_8, (arr_4 [i_0 + 1] [i_0 + 1] [i_1]))))));
            }
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        var_26 = 169;
                        var_27 = 662722296939427112;
                        arr_20 [i_0] [i_1] [i_6] [i_0] = ((0 + (arr_14 [i_0] [i_0 + 1])));
                    }
                }
            }
            var_28 = (min(var_1, (max(((157 ? 1 : 87)), ((-1606395217 ^ (arr_10 [i_0] [i_0])))))));
        }
    }
    #pragma endscop
}
