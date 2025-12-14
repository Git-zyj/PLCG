/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_10;
    var_14 &= (max(-65529, (((((var_10 ? 9 : var_7))) ? (var_0 & 30166) : 30166))));
    var_15 = (max(var_5, 30140));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] |= -var_12;
        var_16 = (max(var_16, (((((arr_0 [i_0] [i_0]) | ((min(53891, (arr_1 [3]))))))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_17 *= var_6;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] [i_1] = (max((~var_8), ((((arr_12 [i_1] [2] [i_1]) <= 1)))));

                    for (int i_4 = 3; i_4 < 8;i_4 += 1)
                    {
                        arr_16 [i_1] [i_1] = (((-1 % 1) & ((var_12 << (-286047091083540308 - 18160696982626011278)))));
                        var_18 = (((((~((max((arr_12 [i_1] [i_2] [i_3]), 0)))))) ? 0 : (arr_1 [3])));
                        arr_17 [i_4 - 3] [i_1] [i_2] [i_1] &= ((-(min(-4708, -var_10))));
                    }
                    for (int i_5 = 1; i_5 < 8;i_5 += 1) /* same iter space */
                    {
                        var_19 = (max(var_19, -30166));
                        var_20 = (min(18446744073709551615, (((~(~30156))))));
                        var_21 = var_1;
                    }
                    for (int i_6 = 1; i_6 < 8;i_6 += 1) /* same iter space */
                    {
                        var_22 = (((arr_22 [i_1] [i_2] [i_6 + 2] [i_6] [i_2] [0]) ? ((((max((arr_14 [i_1] [i_1] [i_2] [i_1] [i_3] [i_6]), (arr_10 [i_1] [i_1])))) ? (min(0, var_2)) : 741)) : 3777255402));
                        var_23 = (min(var_23, (((~(arr_20 [i_1] [i_1]))))));
                        var_24 = ((((~(-32761 + 12380181121434324868))) < 32744));
                        var_25 = ((((((arr_23 [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 2]) ? -26314 : (arr_23 [i_6 + 1] [i_6] [i_6] [i_6 + 1])))) ? (arr_23 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]) : (!1)));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_30 [i_1] [i_1] [i_3] [i_7] [i_7] [i_8] [i_8] |= ((((((((126100789566373888 ? 32760 : (arr_6 [i_2] [i_8])))) ? ((18446744073709551614 ? 21842 : (arr_0 [i_2] [i_1]))) : (((!(arr_5 [i_3] [i_8]))))))) ? (((((arr_6 [i_7] [i_8]) && (arr_24 [i_1] [i_1]))))) : (arr_18 [i_1] [i_2] [i_3] [i_7] [i_8] [i_8])));
                                arr_31 [i_1] [i_8] [i_3] [i_2] [i_1] [0] [i_2] = ((-(~var_7)));
                            }
                        }
                    }
                }
            }
        }
        var_26 = (~50511);
        var_27 += var_5;
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
    {
        var_28 = (min(2117860948, 31937));
        var_29 = ((((~(30180 < var_5))) | ((max(((!(arr_9 [i_9] [i_9] [i_9]))), 1)))));
        arr_34 [i_9] = 1655713344;
        var_30 ^= ((!((max((((14476829651394487582 ? 31927 : 37914))), -var_3)))));
        var_31 = ((var_12 ? ((max((((arr_28 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) >> (((arr_0 [i_9] [i_9]) + 28500)))), (var_0 <= 19901)))) : var_3));
    }
    var_32 = (((~(var_6 <= var_1))) != (((~57500) ? (~1) : var_11)));
    #pragma endscop
}
