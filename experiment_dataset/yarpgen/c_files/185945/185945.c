/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= 209;
    var_13 += var_10;

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_9 [i_2] [i_2 - 1] [i_2] [i_2] = var_6;

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            arr_12 [i_0 + 1] [i_1 + 1] [i_2 - 1] [i_2] [i_4 - 1] = (arr_5 [i_0 + 1] [i_0 + 1]);
                            var_14 = (arr_11 [i_4 + 2] [i_2 + 1]);
                            arr_13 [i_4 + 1] [i_2] [i_2] [i_2] [i_0 + 1] = (((arr_10 [1] [1] [i_2] [i_3] [i_0 + 1] [i_1] [4]) ? (((-14765 ? (arr_2 [i_3] [i_1 + 1] [i_0 + 1]) : 1307164900))) : (arr_1 [i_1])));
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            arr_16 [i_0] [i_1 + 3] [i_2] [i_2] [i_5] = ((var_2 ? (((267911168 <= 16451175730978672491) ? ((var_8 ^ (arr_5 [i_0 + 1] [i_2 + 1]))) : (((((arr_6 [i_2]) == (arr_7 [i_0 + 1] [i_1 + 1] [i_2 + 1] [1] [i_5]))))))) : (arr_15 [i_0 + 1] [i_1] [i_2] [i_3] [i_1])));
                            var_15 += (((arr_6 [i_1 - 1]) ? (~1917426695809193808) : ((((((((arr_5 [i_1] [i_1]) && (arr_2 [i_5] [i_1] [i_1])))) == (arr_6 [i_0 + 1])))))));
                            var_16 *= (arr_14 [i_0] [i_1 + 3] [i_2] [4] [i_5]);
                        }
                    }
                }
            }
        }
        var_17 = (min(var_17, (((14680 ? 1 : 246)))));
    }
    for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
    {
        var_18 += ((var_6 ? (arr_14 [i_6 + 1] [i_6 + 1] [i_6 + 1] [5] [i_6]) : (((arr_18 [i_6 + 1]) ? (arr_1 [i_6 + 1]) : (((((arr_18 [i_6 + 1]) && var_3))))))));
        var_19 = (min(var_19, var_3));
        arr_19 [i_6] = ((((((((arr_17 [i_6]) ? var_10 : 267911174))) || ((max(18446744073441640428, (arr_0 [i_6] [3])))))) ? (((arr_14 [i_6] [i_6] [i_6] [i_6 + 1] [i_6]) ? (((var_3 ? var_2 : (arr_8 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1])))) : ((267911184 << (-11210 + 11212))))) : (((arr_3 [i_6 + 1] [i_6] [7]) << (arr_14 [i_6 + 1] [3] [i_6] [i_6 + 1] [14])))));
        arr_20 [i_6] = (arr_17 [i_6 + 1]);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
    {
        var_20 = (((arr_10 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]) ? 267911185 : (arr_18 [i_7 + 1])));
        arr_23 [i_7 + 1] [i_7] |= 24923;
        arr_24 [i_7 + 1] = (((-6279 == 996957373765252706) ? (((arr_0 [i_7 + 1] [i_7]) | 127)) : (arr_8 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1])));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
    {
        arr_27 [i_8] = (arr_4 [i_8 + 1] [i_8 + 1]);
        var_21 = arr_0 [i_8] [i_8 + 1];
        arr_28 [i_8] = (var_7 || (arr_25 [i_8]));
        arr_29 [i_8] [i_8] = (~118);
        arr_30 [i_8] = 2216;
    }
    var_22 = (((((var_11 & ((1175243911059262047 ? 12 : 24923))))) ? (var_3 > var_1) : ((((-2140128931 ? var_11 : var_11))))));
    var_23 = ((var_5 & (-var_6 % var_5)));
    #pragma endscop
}
