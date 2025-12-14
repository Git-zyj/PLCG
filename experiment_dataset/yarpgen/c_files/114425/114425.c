/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_15 ? ((((var_14 / 42259) <= var_7))) : ((((!var_15) || (((65535 ? 2030677182 : -19946))))))));
    var_19 = (min(var_19, var_11));
    var_20 = ((((var_17 ? (((var_11 ? var_2 : var_5))) : 3396725044015992587))) ? (min((65024 / 3396725044015992611), 143974450587500544)) : -var_7);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [7] [i_2] = ((517 ? (max((arr_2 [i_0 - 1] [i_1]), var_1)) : (((arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (((arr_1 [i_0] [i_1]) ? var_10 : var_16)) : ((min((arr_3 [i_1] [i_2]), (arr_2 [8] [i_1]))))))));
                    var_21 = (max(var_12, var_4));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            arr_18 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2] = ((((((~var_1) ? ((var_2 ^ (arr_13 [i_2]))) : (arr_6 [i_1] [i_1] [i_1] [i_1])))) ? (arr_15 [i_0] [i_0] [19] [i_0] [i_0]) : (((~(arr_7 [i_2]))))));
                            arr_19 [4] [i_1] [i_2] [i_3] [i_2] = (arr_1 [i_0] [i_0 + 1]);
                            var_22 += ((var_10 ? var_1 : 3396725044015992599));
                            var_23 = ((((((arr_0 [i_0 - 1]) ? (arr_10 [i_0 - 1] [i_0 - 1] [21] [21] [21]) : (arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [23])))) ? (((~(arr_7 [i_2])))) : ((var_7 ? ((18302769623122051072 ? -6046286389145695545 : var_8)) : (((arr_1 [i_4 + 1] [i_3]) ? 2030677182 : var_9))))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_22 [i_3] &= ((!(arr_4 [i_0 + 1] [i_0 + 1])));
                            var_24 = (arr_0 [i_0 - 1]);
                        }
                        arr_23 [i_0] [i_1] [1] [i_1] [i_2] = (min((max(2264290114, 1549544537)), var_7));
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        arr_28 [i_0 + 1] [i_2] [i_2] [i_6] = (~((min(var_15, var_5))));
                        var_25 += var_5;
                        var_26 = ((+(((arr_26 [i_0 + 1] [i_2] [i_0 + 1] [i_1] [i_1]) ? (arr_26 [i_0 - 1] [i_2] [i_0 + 1] [i_0 + 1] [i_0]) : (arr_26 [i_0 - 1] [i_2] [i_0 + 1] [i_1] [i_2])))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 14;i_8 += 1)
        {
            {
                var_27 = (min(var_27, ((max(((0 ^ (~255))), 1)))));
                var_28 = ((~(((arr_25 [6] [6]) ? (arr_5 [i_8 - 2] [i_8 + 2] [i_8 - 3]) : 2030677182))));
            }
        }
    }
    #pragma endscop
}
