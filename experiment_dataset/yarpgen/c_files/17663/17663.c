/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = ((~(max(var_10, (arr_0 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_13 = (min(((var_10 ? 18446744073709551615 : (arr_6 [i_2]))), ((min((arr_6 [i_2]), -105)))));
                        var_14 = ((1086389141689766643 ? (((~((-620137384 ? var_3 : 262143))))) : (var_5 ^ var_11)));
                        var_15 -= ((arr_1 [i_1 + 1]) && (30563 | 13761857940016636602));
                        var_16 = (min((arr_6 [i_2]), (((arr_7 [i_2]) ? var_10 : var_8))));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_17 = ((!((var_8 || (arr_12 [15] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_2])))));
                        var_18 = ((!((((arr_14 [i_1 + 1] [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_1 - 2]) ? (arr_14 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : var_1)))));
                        var_19 = ((2 ? 7343493799777596007 : 11718));
                    }

                    for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        var_20 = 58115;
                        var_21 = ((var_8 + (arr_12 [i_2] [i_2] [0] [i_0] [i_2])));
                    }
                    for (int i_6 = 1; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        var_22 ^= (min((~-1412959425), (((1882750664 && (arr_11 [i_0] [22] [22] [4] [i_6]))))));
                        var_23 = ((~((58 ? var_1 : 0))));
                        var_24 |= (max((max(-102, var_8)), ((~((~(arr_4 [i_0])))))));
                    }
                    for (int i_7 = 1; i_7 < 21;i_7 += 1) /* same iter space */
                    {
                        arr_23 [i_2] [i_1] [5] [i_7] = ((((-131072 != (!1))) ? (!var_6) : (-419344265 / -1309741197)));
                        var_25 = (((((-((var_2 - (-9223372036854775807 - 1)))))) ? ((~(arr_12 [1] [i_1 - 2] [19] [i_1] [i_2]))) : (~-5814)));
                        var_26 = ((((~(arr_8 [i_1 - 2]))) / (min(10, -968194895))));
                    }
                }
            }
        }
        arr_24 [i_0] [3] = (max((~var_2), 121236649));
        var_27 = -887789691;
        arr_25 [16] = (min((((var_4 ^ 1) && (0 && 2610624707))), ((!(((var_11 ? var_4 : (arr_7 [i_0]))))))));
    }
    var_28 = (~682663637);
    var_29 = var_11;
    #pragma endscop
}
