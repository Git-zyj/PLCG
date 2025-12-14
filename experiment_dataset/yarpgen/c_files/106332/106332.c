/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_10 ^= -225;
                    var_11 *= 1623905829;
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                {
                    var_12 -= (-((var_4 ? (65535 / var_6) : var_1)));
                    var_13 = ((-var_6 ? (((((max(var_2, var_4))) ? 22769 : (arr_6 [i_0] [i_0] [21])))) : 1));
                    var_14 = ((max((-2147483647 - 1), 65535)));
                }
                for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                {
                    var_15 -= ((((max(101, 1))) && (((((min(var_3, 65535))) ? (((var_5 - (arr_6 [17] [i_1 + 1] [i_4])))) : (max(var_8, 0)))))));
                    var_16 = (max(var_16, (((max(1623905829, (arr_0 [16])))))));
                    arr_12 [i_0] [7] [i_4] = ((((65528 ? 0 : 8644374725144052329)) * (((7 ? (arr_2 [i_0] [i_0] [i_4]) : (2 / 208))))));
                }

                /* vectorizable */
                for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_5] = (155 ? var_6 : 101);
                    arr_17 [i_5] [i_1] = ((1 ? (-5315571932780570881 + 1623905839) : -1));
                    arr_18 [1] [i_1] [i_5] = ((!(((65519 << (((((arr_0 [i_1]) + 72)) - 8)))))));
                }
                for (int i_6 = 1; i_6 < 23;i_6 += 1) /* same iter space */
                {
                    var_17 = (((0 ? var_0 : 21)));
                    arr_23 [i_0] [i_0] [i_6] [i_0] = (((32617 ? 3351494592 : var_6)));
                }
                arr_24 [i_0] |= (0 ? (((((153 >> (65522 - 65495)))))) : (((((1 << (-7458388658570079675 + 7458388658570079686)))) | 1)));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            var_18 = (var_3 != var_2);
                            arr_30 [i_0] = (((-(arr_8 [13]))));
                            arr_31 [1] [i_1] [1] [1] = (((arr_11 [i_0] [i_1] [12] [i_1]) ? (max(181654274, ((((arr_28 [8] [i_1] [8] [16] [i_1 + 1] [16]) ? 68 : var_6))))) : ((((1 || (var_0 || var_2)))))));
                            var_19 |= (arr_26 [i_1] [i_1 - 1] [i_1 - 1] [4]);
                        }
                    }
                }
                var_20 |= (((arr_1 [8] [2]) << (((0 && (6817 % 181654274))))));
            }
        }
    }

    for (int i_9 = 2; i_9 < 17;i_9 += 1)
    {
        arr_35 [2] = ((((max((arr_0 [i_9 - 2]), (((arr_29 [i_9] [i_9] [i_9] [i_9]) ? var_4 : (arr_4 [i_9] [23] [i_9] [i_9])))))) ? var_7 : 27420));
        var_21 ^= (((65280 ? 1 : 1)));
        var_22 *= ((((((((max(var_9, 1)))) & (~14123387787919488869)))) ? (arr_33 [i_9] [i_9 + 1]) : ((max((~1), ((1045975745632042229 ? (arr_13 [22]) : var_1)))))));
    }
    #pragma endscop
}
