/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((~(arr_2 [i_0 - 1] [i_0 + 1])))));
                var_18 = ((+-31438663) ? (!var_16) : (((arr_1 [i_0 - 1]) ? 130023424 : -176263991)));
            }
        }
    }

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_19 = (min(var_19, (((((87 ? (arr_5 [i_4] [i_2]) : (arr_5 [i_2] [i_2])))) ? 310519898 : (((arr_5 [i_3] [i_3]) ? 14499823848801832946 : (arr_5 [i_2] [0])))))));
                    var_20 = (max(var_20, ((((((2011344026 ? 4170173886833825588 : var_2))) ? var_5 : (((((-1295900461 ? (arr_7 [i_4] [i_4]) : 5058918089545285537))) ? 596706966 : var_0)))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_21 *= (((!var_15) ? 1326531085152098406 : ((17194893067079206718 ? var_16 : (arr_12 [i_3] [i_3])))));
                                var_22 = ((7666037724002371504 ? -694064297 : -712927863));
                                arr_20 [i_2] [i_2] [i_2] [i_4] [i_2] = (!var_6);
                                arr_21 [i_2] [i_3] [i_4] [i_3] [6] [i_4] [i_6] |= (((((-(arr_3 [i_2] [i_3] [i_4])))) ? (((arr_13 [i_2] [i_3] [i_4] [i_6]) ? var_2 : (arr_15 [i_3]))) : (((var_4 ? (((arr_15 [i_2]) ? (arr_19 [i_6] [i_5] [i_5] [i_5] [i_3] [i_3] [i_2]) : 1320584393)) : -83928532)))));
                            }
                        }
                    }
                }
            }
        }
        var_23 = (max(var_23, (((-(((arr_0 [i_2]) ? 14802441105504916251 : (arr_0 [i_2]))))))));
    }
    var_24 = var_12;

    for (int i_7 = 1; i_7 < 13;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 13;i_9 += 1)
            {
                {
                    var_25 = (min(var_25, ((((((+((var_13 ? (arr_29 [12]) : (arr_0 [i_7])))))) ? 913357313 : (~var_1))))));
                    arr_30 [i_7] = (((((var_1 ? 536870908 : 1868395112))) ? (~6201546876863788359) : ((~(arr_26 [i_7 + 1] [i_8 + 1])))));
                }
            }
        }
        var_26 = (~((var_15 ? -736393729 : (arr_2 [i_7 - 1] [i_7 + 1]))));
        var_27 = ((+((+(((arr_3 [i_7] [i_7] [i_7]) ? -2937974515133012680 : 3945590242))))));
        var_28 = (min(var_28, ((((((2467139559 ? (arr_27 [i_7 + 1] [8]) : var_8))) ? (~-2072207277) : 1)))));
    }
    #pragma endscop
}
