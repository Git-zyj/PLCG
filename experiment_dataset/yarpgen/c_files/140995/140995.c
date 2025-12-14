/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            var_17 += (((((var_9 ? var_14 : 2358)))) ? var_5 : (((var_14 * (arr_8 [i_0] [i_0] [i_1] [i_3])))));
                            arr_15 [i_0] [i_1] [i_2] [i_3 - 1] [i_4] [i_0] = (max(var_0, var_9));
                            var_18 = ((((1 >= (arr_13 [i_2 + 1] [i_0] [i_4] [i_4 + 1] [i_3 - 2]))) ? (((!(arr_13 [i_2 + 1] [i_1] [i_4] [i_4 + 1] [i_3 + 1])))) : (arr_13 [i_2 - 1] [i_2 - 1] [i_4] [i_4 - 1] [i_3 + 1])));
                        }
                        var_19 = (max(3549512128, (((1 ? 3549512121 : 8127992764129975357)))));

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_20 -= (~1);
                            arr_19 [i_3 + 1] [i_3 + 1] [i_2 + 1] [i_3 + 1] [i_3 + 1] [i_2 + 1] &= var_8;
                            var_21 = ((!(1 * var_6)));
                        }
                        var_22 = (max(((((((6095431937935743774 ? -3391977094835695224 : 10))) > (max(var_13, -46))))), (max(var_14, (var_9 > 10318751309579576245)))));

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_23 = (min(var_23, ((((arr_1 [i_2 + 2]) & 4891996313934750072)))));
                            arr_24 [i_1] [i_3] [i_1] [i_1] [i_0] = (min(((var_12 ? var_1 : var_10)), (((arr_12 [i_3 - 2] [i_3 - 2] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1]) - (arr_12 [i_3 + 1] [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3 - 1] [i_3 + 1])))));
                            arr_25 [i_2] [i_2] [i_2 + 1] = var_13;
                        }
                    }
                }
            }
        }
        var_24 = ((~((((arr_0 [i_0]) > (arr_0 [i_0]))))));
        arr_26 [i_0] [i_0] = ((arr_7 [i_0] [i_0]) && ((((((arr_21 [i_0]) && (arr_2 [i_0] [i_0]))) ? (min(-986564251, -107)) : (arr_20 [i_0] [i_0] [i_0] [i_0])))));
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        arr_30 [i_7] = ((~(arr_18 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])));
        var_25 = ((!((max(var_12, (~4294967293))))));
    }
    var_26 = (var_4 ? var_11 : var_2);
    #pragma endscop
}
