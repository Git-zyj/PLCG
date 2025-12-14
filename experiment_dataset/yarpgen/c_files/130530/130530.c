/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                var_11 = ((((((min(520709893, var_9)) ^ ((min((arr_5 [i_1]), var_4)))))) ? ((max(14652, 760412483))) : ((~(max((arr_4 [2] [i_1]), 8188746112378635857))))));
                var_12 = 3774257389;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_13 *= ((!((max((((arr_5 [i_3]) >> (var_7 - 7616373637458247233))), ((-(arr_0 [i_0] [i_0]))))))));
                            var_14 = (((((((arr_5 [i_0]) ? 698742730 : (arr_2 [i_3] [i_1]))))) ? (((arr_6 [i_0] [i_1] [i_0] [8]) ? ((var_9 / (arr_4 [i_3] [i_1]))) : (arr_6 [i_0 - 1] [i_1 + 3] [i_1] [i_0 - 1]))) : (((((var_6 ? var_5 : (arr_2 [i_0] [i_0])))) ? (arr_4 [i_0 - 1] [i_1 + 1]) : (max((arr_6 [i_2] [i_2] [i_0] [i_0]), 3774257379))))));
                            var_15 = (arr_0 [i_0 - 1] [i_0 - 1]);
                            arr_10 [i_3] [i_0] [i_0] &= (arr_3 [i_2] [i_1] [i_2]);
                        }
                    }
                }
                var_16 &= (arr_9 [i_0]);
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 2; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_17 = (((arr_13 [i_4 - 2]) ? (((!(arr_12 [i_4] [i_4])))) : var_4));
        var_18 = (arr_13 [i_4 - 1]);
    }
    for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_19 = (arr_15 [i_5] [i_5]);
        arr_18 [i_5] = (arr_12 [i_5] [i_5]);
    }
    var_20 = ((+((max((!var_3), (min(var_6, var_4)))))));
    /* LoopNest 3 */
    for (int i_6 = 4; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 12;i_8 += 1)
            {
                {
                    var_21 = (max(((((max((arr_21 [i_6]), 3596224559)) > var_4))), (min(var_3, (((!(arr_24 [i_7] [i_7] [i_8]))))))));
                    var_22 *= ((max((~var_4), (!var_7))));
                }
            }
        }
    }
    var_23 = (+(((var_10 >= var_1) << var_10)));
    #pragma endscop
}
