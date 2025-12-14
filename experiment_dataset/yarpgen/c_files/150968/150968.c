/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (((!var_7) ? var_11 : var_10));
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (!(((((((arr_3 [i_0] [i_1]) >= (arr_2 [i_1])))) * 0))));
                var_14 = ((!(((~(((!(arr_2 [i_1])))))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 -= (((((18446744073709551613 ? 4228579996 : 2015422295))) ? ((var_11 % ((-(arr_0 [i_4]))))) : -var_1));
                                var_16 ^= (-(((!(arr_6 [i_2 + 2] [i_4 + 1] [i_4 + 4])))));
                                var_17 = ((~(((arr_13 [i_0]) ? (((16962459472547796782 > (arr_3 [i_0] [i_0])))) : 25053))));
                            }
                        }
                    }
                }
                var_18 = (min((arr_8 [i_1]), (min(0, (((arr_5 [i_1]) ? 1627441263 : (arr_9 [i_0] [14] [i_1] [i_0])))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_19 = ((~((1 ? (arr_22 [i_9 + 3] [i_9 + 3] [i_9 - 1]) : (((8 / (arr_27 [14] [i_6] [i_6] [i_6]))))))));
                                arr_31 [i_8] [i_6] [i_8] [i_8] [i_8] = 0;
                                var_20 = ((16 ? (((3879315979 ? (arr_13 [i_5]) : 0))) : 0));
                                var_21 = (min(var_21, ((max((((-(arr_9 [i_9] [i_9 + 3] [i_7] [i_9])))), var_4)))));
                            }
                        }
                    }

                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        var_22 = ((((((arr_9 [i_10] [i_10 - 1] [i_10] [i_10 + 1]) & (arr_12 [i_5] [i_10 + 2] [i_5] [i_10] [i_5])))) ? (~var_3) : (~var_4)));
                        var_23 -= ((1 ? 0 : ((var_9 * (((arr_25 [2] [2] [2] [i_7]) + -8360758695187737734))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        var_24 *= ((~(arr_36 [i_5] [i_6] [i_7] [i_11])));
                        var_25 = ((!(((-(arr_18 [i_5]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
