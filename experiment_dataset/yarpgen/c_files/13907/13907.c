/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 ^= (((((((max(var_1, 18446744073709551615))) || var_13))) <= (((121 && (arr_1 [i_3] [i_3]))))));
                                var_18 = (min(var_18, (arr_6 [i_2] [i_2] [i_3 + 2] [i_4])));
                            }
                        }
                    }
                    var_19 = ((((arr_11 [i_2 + 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_0 + 3]) > (arr_0 [i_0 - 1] [i_0]))));
                    arr_12 [13] [i_0] [i_2] [i_2 + 1] = ((((((59095 & var_3) ? (~var_9) : (((arr_5 [i_0 + 2]) ? 18446744073709551607 : (arr_8 [10] [i_1] [i_1] [i_0] [i_1])))))) || ((((arr_7 [i_2 - 1] [i_1] [i_2] [i_2] [i_1] [i_1]) ? ((max(-122, var_3))) : var_10)))));

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        arr_15 [i_5] [i_1] [i_2] [i_0] = var_6;
                        var_20 += (((((-(arr_0 [i_0 + 2] [i_2 - 1])))) ? ((~(((arr_1 [i_5] [i_1]) ? 32519 : -7196375519761002983)))) : var_8));
                        var_21 &= 42671;
                        var_22 = (min(var_22, (((((((arr_1 [i_1] [i_1]) ? (arr_1 [i_1] [i_5]) : (arr_1 [i_1] [i_1])))) ? (((!(arr_6 [0] [i_1] [i_1] [i_5])))) : ((13 ? (arr_1 [i_1] [i_1]) : (arr_1 [i_1] [i_1]))))))));
                    }
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        arr_18 [i_6] [i_0] [i_0] [6] = (arr_7 [1] [i_0] [i_1] [i_1] [i_2] [i_1]);
                        var_23 = (min(var_23, (arr_7 [0] [i_1] [i_2] [i_2] [i_2] [i_6])));
                    }
                }
            }
        }
    }
    var_24 = var_3;
    #pragma endscop
}
