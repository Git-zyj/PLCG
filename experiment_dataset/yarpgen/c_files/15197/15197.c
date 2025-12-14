/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_13 = (min(var_13, ((min(3010405917, 1)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_14 = (max(var_14, (((-978354532 ? 23024 : 0)))));
                        var_15 -= ((~(arr_3 [i_0] [i_1 - 1])));
                        arr_10 [0] [0] &= (((194 && 0) ? (((arr_8 [1] [i_2] [0]) * -17319)) : (0 >= 1562635810239431533)));
                        arr_11 [1] [i_1] [1] &= (arr_1 [i_0] [i_1 - 1]);
                        var_16 ^= ((1 ? (arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 1]) : var_6));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        arr_14 [2] [2] [i_1] [i_2] [i_2] = ((((max(115, 0))) ? ((((arr_4 [6] [i_1] [i_2]) + (var_6 <= 0)))) : (min(-116, (((var_8 ? 31094 : 8192)))))));
                        arr_15 [i_0] [i_0] [i_1 + 2] [i_2] [i_2] [i_4] = (((((1284561383 ? (22 * 59) : (arr_5 [i_4] [i_1 + 1] [i_1 + 1])))) ? ((((min(var_6, 59))) ? ((var_5 ? (arr_5 [i_0] [i_0] [7]) : 1)) : (max((arr_0 [i_4]), 56848)))) : (((arr_5 [i_1] [i_1 + 2] [i_1 - 1]) ? (arr_5 [i_1] [i_1 + 2] [i_1 - 1]) : (arr_5 [i_1] [i_1 - 1] [i_1 + 1])))));

                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            arr_18 [i_2] = ((((min((arr_16 [i_0] [i_0] [4] [i_2] [i_4] [6]), (arr_5 [3] [i_1] [i_2]))))) ? ((var_7 ? (arr_17 [i_1 + 1] [i_1 + 1] [i_2]) : var_8)) : 1648247645);
                            arr_19 [i_0] [i_0] [i_2] [i_0] [i_0] = ((30253 << (906451853 - 906451851)));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_17 ^= (arr_4 [i_0] [i_6] [i_2]);
                            var_18 = (min(var_18, 61));
                            var_19 *= (min((35283 << 1), (!3453640642)));
                            var_20 = (((min(9223372036854775807, 433527819))) ? ((min(1, 11))) : 8678);
                        }
                        var_21 = ((-((+(max((arr_7 [i_0] [i_1] [i_2] [i_2]), (arr_7 [i_0] [i_0] [i_0] [i_2])))))));
                    }
                    var_22 -= 32766;
                    arr_23 [i_0] [9] [i_2] = (min((arr_20 [i_1 - 1] [i_1 - 1] [i_2] [i_1 + 1] [i_1 + 1] [i_1 + 2]), ((var_3 ? (arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1]) : 194))));
                }
                var_23 -= ((~((~((-1 ? (arr_4 [i_0] [i_0] [i_1]) : var_2))))));
            }
        }
    }
    #pragma endscop
}
