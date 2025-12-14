/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_11 = (((-1594721716 + 2147483647) >> (-65887057 + 65887063)));
        var_12 = (min(var_12, (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_13 = (min(var_13, (((!((((var_10 && var_5) ? (min(var_6, var_5)) : var_10))))))));
            var_14 = ((+(max((arr_2 [i_2]), (((arr_3 [1]) ? var_4 : (arr_4 [i_1])))))));
        }
        var_15 *= (max(var_2, ((-32764 ? 32754 : 983592406))));
        var_16 = ((min((arr_5 [i_1] [4]), var_4)) < (((var_0 ? (((arr_5 [i_1] [2]) ^ (arr_3 [i_1]))) : (arr_3 [i_1])))));
        var_17 &= (arr_2 [i_1]);
        var_18 = (~((~(arr_3 [i_1]))));
    }
    var_19 = (max(var_19, (((((~((32764 ? -8545 : 2044)))) ^ var_3)))));

    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        var_20 -= (((((!var_10) && ((((arr_7 [i_3] [7]) ? var_8 : var_3))))) || ((min(3883, 32752)))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    arr_13 [i_5] [i_3] [i_3] = (((arr_6 [i_5] [i_4]) ? (arr_11 [i_3 - 1] [i_4 + 2] [i_5] [i_5]) : var_6));
                    arr_14 [i_3] [17] [i_4] [i_5] = ((((min(var_6, (arr_6 [i_4 - 1] [i_3 + 1])))) / (((arr_6 [i_4 - 1] [i_3]) ? var_6 : (arr_6 [i_4 + 1] [i_4 + 1])))));
                    var_21 = (min(var_21, ((min(var_3, var_4)))));
                    var_22 = var_3;
                }
            }
        }

        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_23 = var_6;
            var_24 = (max(var_24, var_10));
            arr_18 [i_6] [i_6] [i_3] = var_0;
            var_25 = (min(((((arr_10 [i_3 + 1]) || var_10))), (max(501426222, 13549))));
        }
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_26 = var_2;
        arr_22 [i_7] = ((-((((max(var_10, var_4)) < (var_2 <= var_5))))));
    }
    #pragma endscop
}
