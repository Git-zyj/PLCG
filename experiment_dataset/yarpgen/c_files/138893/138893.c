/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max((~var_6), (var_0 ^ var_6)))) ? (((max(-6937493191428724970, 9)))) : var_3));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [5] = 840729101;
                var_11 &= ((~((((arr_2 [i_0] [i_0 - 1] [i_1 - 1]) && (arr_2 [i_0] [i_0 - 1] [i_1 + 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [2] |= (~var_0);
                            var_12 = (max((((((var_1 ? (arr_3 [i_2] [i_0]) : (arr_9 [10] [i_3] [i_3] [i_3] [i_3] [i_3])))) ? 6937493191428724970 : (!9223372036854775803))), ((((arr_0 [i_3]) <= (arr_2 [7] [i_1] [7]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 9;i_5 += 1)
                    {
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0] = (((((2337227408 ^ ((9223372036854775793 ? 35212908 : (arr_8 [i_5] [2])))))) | (max((max((arr_16 [5] [i_4] [5] [i_4] [0] [i_0]), var_2)), (arr_8 [8] [i_1 - 1])))));

                            for (int i_6 = 0; i_6 < 12;i_6 += 1)
                            {
                                var_13 = ((((!((max((arr_8 [i_0] [i_1]), (arr_9 [i_6] [i_5] [7] [i_1] [i_0 + 1] [4])))))) ? (((max(9223372036854775803, 12)) << (((((arr_8 [i_0] [i_0]) ^ var_7)) - 1661179753)))) : (arr_8 [i_0 + 1] [i_5 + 2])));
                                arr_24 [i_5] [i_4] [2] = (((max((max((arr_9 [i_0] [i_0] [i_1] [i_4] [1] [4]), var_8)), var_8)) - ((((65531 <= var_9) ? ((8368209498977429118 ? (arr_6 [i_0] [0] [i_4]) : -11)) : 88)))));
                                arr_25 [i_4] = ((45924 ? ((((!-31) + ((-(arr_22 [1] [0] [7])))))) : (max(16, var_9))));
                                arr_26 [i_6] [7] [7] [i_6] [i_6] = (((max(((4259754374 - (arr_7 [i_4] [6]))), 255))) ? (((arr_2 [i_0] [i_1] [i_0]) - (max(9, (arr_9 [i_6] [i_5] [i_4] [i_1] [i_0] [i_0]))))) : (65522 != 30181));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 &= var_2;
    var_15 ^= -50;
    var_16 &= ((((!-54) - ((var_0 ? 0 : var_5)))) <= (((var_1 ? (9 || var_8) : var_2))));
    #pragma endscop
}
