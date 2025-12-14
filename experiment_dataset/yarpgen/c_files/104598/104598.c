/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= 0;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_15 = (max((max(11, var_1)), ((max((arr_2 [i_0 - 1] [i_0]), (arr_2 [i_0 - 1] [i_0]))))));

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (max(((-((-(arr_3 [i_0] [i_0]))))), (!4920401862339415698)));

            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                arr_9 [i_0] = var_12;
                var_16 = (~4057065985);
                arr_10 [i_0] [i_0] [i_2] = 0;
            }
            /* LoopNest 2 */
            for (int i_3 = 4; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    {
                        var_17 = ((~((((arr_15 [i_0]) && ((max(var_13, var_4))))))));
                        var_18 = (-(max(237901311, (arr_15 [i_0]))));
                    }
                }
            }
            arr_16 [i_0] [i_0] [i_1] = (((4294967295 % (arr_1 [i_0] [i_1]))));
        }
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 18;i_7 += 1)
            {
                {
                    var_19 = ((-var_3 ? (((arr_20 [i_7 - 1] [i_7 + 3] [i_7 + 3]) ? 18446744073709551615 : (arr_20 [i_7 + 2] [i_7 - 2] [i_7 - 2]))) : (arr_24 [i_7 + 3] [i_7 + 1] [i_7])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_20 |= ((!(((~(arr_27 [i_7 - 3]))))));
                                var_21 += 4294967295;
                                arr_30 [i_9] [i_8] [i_7] [i_6] [19] = var_7;
                                var_22 = (min(var_22, (arr_28 [i_5] [15] [15] [i_8] [i_9])));
                            }
                        }
                    }
                    arr_31 [i_5] [i_5] = (((!(arr_24 [i_7 - 2] [i_6] [i_7]))));
                }
            }
        }
        var_23 = (min((arr_25 [i_5]), (min((9941351124808781566 - 2242135833), 6782100445445879016))));
        var_24 = 18446744073709551613;
        arr_32 [i_5] = min(((((arr_21 [i_5] [i_5] [i_5]) - (arr_21 [i_5] [i_5] [i_5])))), 0);
    }
    var_25 |= var_5;
    var_26 |= (var_1 - var_3);
    #pragma endscop
}
