/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = ((((!(arr_2 [i_1]))) ? (arr_2 [i_0]) : (~255)));
                var_14 = ((((((((arr_0 [i_0]) ? (arr_5 [6]) : (arr_5 [8])))) ^ (2313562936 ^ 3303040564117517409))) & ((-((6 ? (arr_3 [1] [1]) : -3303040564117517410))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_15 = ((((max(var_11, (arr_9 [i_0])))) ? ((var_10 ? 1445658293 : (arr_9 [i_4]))) : (((arr_9 [i_0]) ? (arr_9 [i_4]) : (arr_9 [i_0])))));
                                var_16 &= (min(0, 1));
                                var_17 *= (((arr_7 [i_0] [i_0] [i_3]) * ((((1165490976 && ((max(6, 0)))))))));
                            }

                            for (int i_5 = 1; i_5 < 17;i_5 += 1)
                            {
                                arr_17 [i_5] [i_3] [i_3] [i_0] [4] [i_0] [i_0] = (max((((!(arr_10 [i_5] [i_1] [i_5 + 1] [i_5] [i_5])))), (max((!1764594964), (arr_2 [i_5])))));
                                var_18 = (arr_0 [i_2]);
                                var_19 ^= (arr_14 [i_0] [i_1] [0] [i_1] [7] [i_5] [i_5]);
                            }
                            for (int i_6 = 2; i_6 < 19;i_6 += 1)
                            {
                                var_20 = (arr_3 [i_0] [i_6 + 1]);
                                var_21 = (min(var_21, (((((((arr_13 [i_6 + 1] [i_1] [i_2] [1] [i_6]) - (arr_13 [i_6 - 2] [16] [16] [i_3] [i_6])))) ? (arr_14 [i_6 + 1] [19] [i_2] [i_3] [0] [13] [i_3]) : (((((arr_13 [i_6 - 1] [i_6 + 1] [i_2] [i_2] [i_6]) + 9223372036854775807)) >> (var_2 - 481021612))))))));
                                var_22 &= arr_0 [i_6 - 1];
                                arr_20 [11] [11] [11] = (arr_3 [i_0] [i_1]);
                                var_23 *= (max((((((arr_15 [i_3]) ? -3303040564117517410 : var_6)) + (arr_18 [i_0] [4] [i_1] [i_1] [i_1] [i_3] [i_6 - 1]))), ((((((arr_10 [i_0] [i_0] [i_0] [0] [1]) ? 8407322946785428718 : 1))) ? 8407322946785428718 : (((var_4 ? (arr_0 [i_2]) : 255)))))));
                            }
                        }
                    }
                }
                var_24 = var_9;
            }
        }
    }
    var_25 = (min(var_25, ((((((var_1 ? ((69 ? var_5 : var_5)) : ((1 >> (var_10 - 442298168)))))) ? var_11 : (min(var_6, ((-3303040564117517410 ? 8466422762946347355 : 1445658293)))))))));
    var_26 = max(10162640324718073990, (((~(~var_9)))));
    var_27 = 253;
    var_28 = var_6;
    #pragma endscop
}
