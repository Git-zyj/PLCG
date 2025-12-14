/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((-74 <= 0) ? ((-4984 ? 16766399702006728493 : var_4)) : (min(var_4, 9223372036854775807)))) <= ((((var_6 ? var_4 : var_3)) / (17 && -284036058813751724)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = (max((min((~var_1), ((min((arr_2 [i_1]), 4983))))), ((((!var_8) - (max(var_3, (arr_2 [i_1]))))))));
                    arr_10 [i_0] [i_0] [i_2] [i_1] = ((((-((-(arr_2 [i_1]))))) / ((var_6 ? ((var_4 ? -2082608046 : (arr_8 [i_0] [i_0] [i_0]))) : ((max(var_8, var_5)))))));
                    arr_11 [i_0] [i_0] [i_0] = ((((-((min(-75, -48))))) >> ((((((arr_1 [i_0]) ? 224 : 3151701393))) ? (((arr_5 [i_2] [i_0] [i_0] [i_0]) ? var_9 : 5)) : (!var_7)))));
                    arr_12 [i_0] [i_1] [i_0] = ((~(max((((!(arr_3 [i_0])))), ((var_7 ? (arr_1 [i_0]) : var_2))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_19 [i_0] = ((min((max(-1270937570, var_3), (!var_10)))));
                                arr_20 [i_0] [i_0] [i_2] [i_0] = ((((max((var_10 * -23308), (45 / var_1)))) ? ((((((arr_17 [i_4] [i_0] [i_3] [i_2] [i_0] [i_0]) ? var_4 : (arr_8 [i_0] [i_1] [i_0])))) ? (min(230, -558297727686772621)) : (((1143265902 >> (var_10 - 52389)))))) : ((max(((min(16101, (arr_2 [i_0])))), (min(var_9, var_3)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = (((!var_4) << (((((!var_8) - ((var_8 ? 28 : var_2)))) + 49))));
    var_13 = (max(((max((max(32767, 74)), (29 < var_7)))), ((min(27219, 558297727686772621)))));
    var_14 = ((!((min((var_9 ^ var_9), (min(2147483647, var_0)))))));
    #pragma endscop
}
