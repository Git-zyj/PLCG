/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 2107307231;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        var_17 = (((((18346891122228937477 == (8341 < 12278427628297536122)))) > ((((!2107307231) && ((((arr_1 [i_0]) ? (arr_9 [i_0] [i_0] [i_1] [i_1]) : 2187660065))))))));
                        arr_12 [i_1] [i_1 + 2] [i_3 + 1] [i_3 + 1] = ((((((min((arr_4 [i_1]), (arr_1 [i_0 - 1])))) ? (min(18446744073709551612, 18446744073709551589)) : ((min((arr_1 [8]), (arr_9 [6] [6] [i_1] [6])))))) > (arr_5 [i_1])));
                        var_18 &= 2187660065;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_18 [i_0 - 1] [i_1] [i_2] [i_4] [9] = (arr_14 [i_4]);
                            var_19 ^= (arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]);
                        }
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            var_20 = (((arr_9 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1]) ? (arr_19 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1] [3] [i_0 - 1] [i_0 + 1]) : 2187660065));
                            var_21 |= (((((2187660065 ? (arr_20 [5] [i_1 - 1] [i_2] [i_4] [5]) : (arr_4 [i_2])))) && (((65535 ? (arr_5 [i_2]) : var_1)))));
                            var_22 = (arr_2 [i_0 + 1]);
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_23 = (arr_23 [i_0 - 1] [i_0 - 1] [i_2] [i_2]);
                            arr_24 [i_0 - 1] [i_0 - 1] [i_0 - 1] [7] [3] [i_0 - 1] [i_1] = (((arr_5 [i_1]) <= (arr_5 [i_1])));
                            arr_25 [i_0] [i_0] [i_0] [i_1] [i_7] = var_8;
                        }
                        arr_26 [i_0] [i_1] [i_1] [i_4] [i_2] = (arr_4 [i_1]);
                        var_24 = (arr_2 [7]);
                        arr_27 [i_1] [i_1] [i_1] [i_4] = ((((!(arr_7 [i_1] [i_1]))) ? 206 : 2107307231));
                    }
                    var_25 = (arr_13 [i_0 + 1]);
                }
            }
        }
    }
    var_26 = (((((~(max(var_6, var_3))))) ? (~var_10) : ((((min(var_8, var_8)) ^ var_7)))));
    var_27 = var_10;
    #pragma endscop
}
