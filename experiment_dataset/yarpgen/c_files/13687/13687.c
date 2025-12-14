/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    var_16 = (arr_5 [i_0] [i_1] [i_2]);
                    var_17 = (max(var_17, (206 * 6)));
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_18 = (min(var_18, ((min(159, 234)))));
                        var_19 = ((((((max((arr_0 [i_4] [i_0]), var_7)) % (((arr_1 [i_0]) | (arr_4 [i_0] [i_1] [i_3] [i_4])))))) ? ((~(arr_5 [i_4] [13] [i_1]))) : (arr_3 [i_0])));
                        var_20 = max((((arr_7 [i_0] [i_1] [i_3] [i_4]) % (arr_5 [i_1] [i_3] [i_4]))), (arr_7 [i_0] [i_1] [i_3] [i_4]));
                        var_21 = (min(var_21, (1 ^ -29084)));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_22 += (-200036650 || 2305807824841605120);
                        var_23 = ((min((arr_0 [13] [i_5]), (arr_0 [i_3] [i_1]))));
                        var_24 = (max(var_24, (((((((arr_4 [i_0] [i_1] [i_0] [i_5]) * (arr_3 [i_0])))) || (((((((arr_8 [i_0] [i_1] [i_1] [i_1] [i_3] [i_1]) + (arr_9 [i_5] [6] [i_0] [i_1] [i_0])))) ? (((!(arr_2 [i_1] [i_3] [i_5])))) : (arr_2 [i_0] [i_1] [i_3])))))))));
                    }
                    var_25 = ((((arr_11 [i_0] [0] [i_1] [i_1] [i_3] [i_3]) ? ((var_15 << (var_4 - 8794889584631956171))) : (((arr_2 [i_0] [i_1] [i_0]) | (arr_6 [i_0] [i_1] [i_3]))))));
                    var_26 = ((~(((arr_4 [i_3] [i_1] [i_1] [i_0]) * (arr_4 [i_0] [i_1] [i_1] [i_3])))));
                }
                var_27 = (min(var_27, (arr_2 [7] [i_1] [i_1])));
                var_28 = arr_4 [i_1] [i_1] [3] [i_0];
            }
        }
    }

    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
    {
        var_29 = var_10;
        var_30 = (((var_11 + 2147483647) << (((arr_3 [1]) - 11855))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_19 [i_8] [i_8] [1] = (arr_15 [i_7] [i_8]);
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_31 = (arr_1 [i_9]);
                            arr_26 [i_7] [5] [i_9] [i_9] [i_10] [i_11] = (arr_21 [i_10] [i_8] [i_9]);
                        }
                    }
                }
            }
        }
        for (int i_12 = 3; i_12 < 10;i_12 += 1)
        {
            var_32 = ((65535 ? 1 : var_6));
            var_33 = ((var_7 >> ((var_5 ? var_13 : (arr_1 [1])))));
        }
        var_34 = (arr_8 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
        var_35 = (arr_25 [i_7] [1] [7] [i_7]);
    }
    #pragma endscop
}
