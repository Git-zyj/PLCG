/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        var_11 = (((min(-205635189, (arr_2 [i_1 - 1]))) > (arr_4 [i_3 + 1] [i_1 + 1])));
                        var_12 = var_3;
                        arr_9 [i_3] = -15861;
                        var_13 = (max(var_13, (((~(arr_1 [i_1 - 2]))))));
                        var_14 = ((((max(((14309405313865407890 << (var_9 + 1741601651))), ((((arr_5 [0] [i_1] [i_2] [1]) ? var_4 : (arr_2 [i_0]))))))) ? (min((var_9 | var_7), (-1424126048 | var_4))) : (((1 | (max((arr_3 [i_0]), var_6)))))));
                    }

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_15 = (((arr_0 [i_4]) ? var_8 : var_9));
                            arr_14 [15] [i_5] [18] [1] [16] [i_5] [i_4] = (max((((((2154860208 ? var_4 : 1898))) ? (((-205635189 | (arr_3 [i_4])))) : (var_7 ^ -431513949))), ((((max(0, 5893299777310052855)) != (arr_7 [17] [i_1 - 2] [i_1] [i_1 + 4] [i_1]))))));
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            arr_18 [0] [2] [3] [i_1] [i_1] [i_1] [i_4] = 2140107112;
                            arr_19 [i_4] [i_4] = (((arr_12 [17] [i_1] [i_2] [i_4] [i_6] [i_1 - 1]) < (-1805650672 ^ var_6)));
                            var_16 &= (max(var_6, (-3382347613409995248 / 3382347613409995247)));
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_4] [i_2] [i_0] [i_4] [1] [i_2] = ((-((-1937474267 - (arr_1 [i_7])))));
                            var_17 = ((var_5 ? (((((var_8 ? var_1 : (arr_16 [i_0] [10] [18] [i_4] [i_7]))) != (((~(arr_15 [i_4] [1] [i_1] [i_2] [i_4] [i_4] [i_7]))))))) : ((((max(1, var_5)) != -723282863)))));
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                        {
                            var_18 = (-((max(0, -39))));
                            arr_27 [i_0] [i_4] [i_1] [i_2] [i_2] [i_4] [i_8] = ((1 ? ((var_1 ? ((var_1 ? (arr_22 [i_8] [i_4] [3] [i_4] [i_0]) : 0)) : ((var_7 ? (arr_1 [i_0]) : 42496)))) : -431513935));
                            var_19 -= (-9223372036854775807 - 1);
                        }
                        arr_28 [i_0] [1] [i_1] [i_2] [i_2] [i_4] |= (min(((min((arr_13 [i_1 - 2] [i_1] [2] [i_1]), (var_5 <= -20439)))), 20440));
                        var_20 = (max(var_20, (((((-((var_9 ? (arr_10 [i_4] [i_2] [i_1] [10]) : var_5)))) / 108)))));
                    }
                    arr_29 [i_0] [1] [i_2] [i_2] = var_6;
                    var_21 += (min(((22706 - (arr_5 [18] [i_1 - 1] [i_1] [i_1 + 2]))), (((var_0 % var_1) >> ((-205635192 ? var_3 : (-2147483647 - 1)))))));
                }
            }
        }
    }
    var_22 = ((var_4 && ((((((var_1 ? var_7 : 1))) ? (var_6 % 3382347613409995247) : 146605552)))));
    var_23 += -var_0;
    var_24 = ((var_1 + (min((min(-32767, var_7)), var_4))));
    #pragma endscop
}
