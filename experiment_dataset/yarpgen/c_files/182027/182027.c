/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_10 = (arr_2 [i_0] [i_0]);
                            arr_16 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2] &= ((((((((1 ? var_0 : 3906430471))) ? (((-(arr_3 [19] [i_3 + 1])))) : ((4294967277 ? var_6 : 11096878708769461245))))) ? (arr_13 [i_0] [i_0] [i_2] [i_3]) : (min(25838, (var_4 | 93585611)))));
                            var_11 = (max(var_11, ((((((~(min(-951332578, 1))))) ? 15 : 26739)))));
                            var_12 = (max((max(-416856664, 4828384985103370168)), (((31779 && ((max((arr_3 [i_1] [i_3]), (arr_5 [i_2] [i_3] [i_2])))))))));
                            var_13 |= (max((max((((~(arr_5 [i_0] [i_1] [i_2])))), 11046519833816658020)), (arr_15 [i_0] [i_1] [i_2] [i_0] [i_2])));
                        }
                    }
                }
                var_14 = (min(var_14, var_2));
                var_15 = (min(var_15, ((((((arr_9 [i_0] [i_0] [i_0] [i_0]) & 26573)) << (!3642227080))))));
                var_16 -= (((-(arr_15 [i_1] [i_1] [i_1] [i_0] [i_1]))));
            }
        }
    }
    var_17 = (max(var_17, var_2));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_18 = (max(var_18, (((-20506 ? ((min((-2147483647 - 1), (arr_19 [i_7 - 1] [i_7 - 1])))) : (min(2979860048164081857, ((var_4 ? 11362850337443450456 : 18)))))))));
                            var_19 = (arr_27 [i_4] [i_5] [i_6] [i_4] [i_7 - 1]);
                        }
                    }
                }
                arr_28 [i_4] [i_4] = (min((arr_25 [i_5] [i_4] [i_5]), 1));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                arr_37 [i_8] [i_8] [i_8] [i_5] [i_10] = (max(11306, (((arr_32 [i_5] [i_8] [i_9] [i_10]) ? (arr_32 [i_4] [i_5] [i_8] [i_10]) : var_3))));
                                var_20 = ((!((((arr_17 [i_4]) ? ((((arr_31 [i_8]) ? -63363549 : 524287))) : (arr_31 [i_4]))))));
                                arr_38 [i_4] [i_4] [i_5] [i_8] [i_9] [i_10] = ((((~(arr_10 [i_4] [i_5] [i_10]))) | ((~((max(65521, -11)))))));
                            }
                        }
                    }
                }
                var_21 = (max(var_21, 1150179538));
                var_22 = (min(var_22, var_4));
            }
        }
    }
    #pragma endscop
}
