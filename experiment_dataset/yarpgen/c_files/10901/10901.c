/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_15 *= ((-2147483647 - 1) ? 4294967295 : 27300);
                        var_16 = ((((1 ? 1073733632 : 0))));
                    }
                }
            }
        }
        var_17 = ((((max((arr_11 [i_0 - 4] [i_0 + 2] [i_0 + 2]), (arr_11 [i_0 + 1] [i_0 + 1] [i_0])))) == ((((arr_7 [i_0] [i_0] [i_0 + 2]) > var_14)))));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_18 |= (arr_13 [i_4] [i_4]);

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_19 = min(((-(min(1, 2785710399)))), ((max((!1509256896), ((32767 >> (((arr_13 [i_4] [i_4]) - 2966492566))))))));
            var_20 -= var_8;
            arr_16 [i_4] [i_5] [i_5] &= ((var_2 == (1844581199 & var_13)));
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            var_21 = (arr_15 [i_4] [i_4]);
            arr_19 [i_4] [i_6] = var_9;
        }
        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {
            var_22 = (max(var_22, (((((arr_20 [i_7 + 1]) ? (arr_15 [i_7 - 2] [i_7 - 1]) : var_4))))));
            var_23 &= ((((((arr_12 [i_4]) | (arr_12 [i_7])))) ? (((!(arr_13 [i_4] [i_4])))) : (arr_17 [10])));
        }
        var_24 += (~(((~var_11) ? (1509256896 + 1509256896) : (!var_5))));
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 18;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            {
                var_25 -= -2120015477;
                var_26 = (min(var_26, ((min((((((((32 > (-9223372036854775807 - 1))))) + (1073676288 + 1)))), ((1 ? -2120015477 : 9262365138694788758)))))));
                var_27 ^= (66 >= var_11);
                var_28 = (max((var_11 & var_9), (1509256897 <= var_10)));
            }
        }
    }
    var_29 = var_3;
    var_30 = (max((-1678925935067625757 <= 18446744073709551609), (var_4 + 56)));
    #pragma endscop
}
