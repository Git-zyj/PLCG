/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (!var_10);
    var_13 = (min((var_4 || var_4), ((!(!var_2)))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_10 [i_0 + 3] [i_1] [i_2] [i_0 + 3] = max((min(0, var_5)), (((((max(14, -2435))) / (((arr_5 [i_0] [i_2] [i_3]) ? 26531 : 230))))));
                        var_14 &= (max(((max(-64, (!187)))), var_1));
                        var_15 &= ((127 ? ((((max(var_3, var_11))) ? ((var_8 ? var_5 : 0)) : (var_7 & var_2))) : (arr_6 [18])));
                        var_16 = (min(var_16, (-2147483647 - 1)));
                    }
                    arr_11 [i_0] [i_0] = ((~(arr_2 [i_0])));
                    var_17 = ((3 ? ((((max((arr_3 [0]), 200))) ? (var_10 == var_0) : var_1)) : 1));
                    var_18 = var_4;
                    var_19 = (((arr_0 [i_0 + 1]) + -1));
                }
            }
        }
        arr_12 [i_0] |= (max(1, ((120 ? (arr_7 [1] [i_0 + 2] [1] [1] [1]) : 1))));
    }
    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        var_20 = (max(var_6, (((!((min(2197854624, -86))))))));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_21 = (min(var_21, ((((var_7 || (arr_14 [i_4] [i_4]))) ? (((29278568973758908 || (!var_2)))) : ((max(0, (!805306368))))))));
            var_22 *= (((min(var_0, (!var_6))) & (!230)));
            var_23 = (((arr_18 [i_4 + 2] [i_4 + 1] [i_4 - 2]) ? (min(var_2, (arr_1 [i_4 - 1]))) : var_9));
            var_24 = (max(1, (max((arr_15 [i_4 + 1] [i_5]), ((186 ? var_8 : (arr_6 [i_4])))))));
        }
        arr_20 [i_4] &= (max(18446744073709551610, (max((arr_4 [i_4 - 2] [i_4 + 2]), var_4))));
        var_25 -= ((((((!var_7) ? 18417465504735792707 : var_9))) ? (((26670 ? -28588 : -10719))) : (~9223372036854775801)));
        var_26 ^= (arr_15 [i_4] [i_4]);
    }
    var_27 = ((~((-(var_5 <= var_1)))));
    #pragma endscop
}
