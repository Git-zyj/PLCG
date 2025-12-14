/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = 3464557529;

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_15 = 127;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 &= ((147 == (arr_10 [i_4] [i_3] [i_2] [13] [i_0 - 1])));
                                var_17 *= ((var_4 > ((max(var_1, (arr_4 [i_4]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_18 = (min((max(-4686832274266491034, (var_8 ^ 119))), (((max(9773414594109911562, -17717))))));
                                arr_18 [i_2] &= (~3474089476671427954);
                                arr_19 [i_0 - 3] [i_1] [i_0] [i_1] = ((189 ? (min((arr_16 [i_0 + 1] [i_1 - 1] [i_2] [i_5] [i_6 + 2]), ((max(65522, 111))))) : ((((!(((var_7 ? 127 : (arr_11 [i_0] [i_1 - 1] [i_2] [i_5] [i_6 + 2] [i_1]))))))))));
                                arr_20 [i_0] [i_1] [i_1] [i_0] [i_6] [i_1 - 1] [i_0] = ((((min((arr_13 [i_0 - 1] [i_1] [i_2] [i_0] [i_6]), (arr_13 [i_0] [i_1] [i_2] [i_0] [i_6 - 1])))) ? (arr_9 [i_0] [i_1 - 1] [i_5] [i_6]) : (arr_7 [i_0])));
                            }
                        }
                    }
                }
                for (int i_7 = 2; i_7 < 18;i_7 += 1)
                {
                    var_19 = (((((((0 ? var_11 : 247)) >> (arr_4 [i_0])))) ? (max((((-(arr_13 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_7])))), (var_7 | 9223372036854775807))) : (((~(((arr_10 [i_0 - 2] [i_1] [i_1 - 1] [i_7] [i_7 - 2]) ? 248 : (arr_22 [i_0] [i_1]))))))));
                    var_20 = 23;
                    var_21 -= ((23 + ((((!(arr_9 [i_7 + 1] [i_7 + 1] [i_7] [i_7])))))));
                    var_22 = (var_1 - var_8);
                }
            }
        }
    }
    var_23 = ((((-(max(var_5, var_9)))) >= ((((((20 ? 65535 : var_7))) ? ((min(126, var_8))) : var_3)))));
    #pragma endscop
}
