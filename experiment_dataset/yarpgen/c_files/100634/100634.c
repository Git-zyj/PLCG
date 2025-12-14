/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((var_8 / (max(var_14, var_14))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 18;i_3 += 1)
                {
                    {
                        var_16 = ((((max(230, (arr_1 [i_3 - 3] [i_3])))) + ((max((arr_1 [i_3 + 2] [i_3]), (arr_1 [i_3 - 1] [i_3 - 1]))))));

                        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                        {
                            var_17 += (((((var_12 ^ var_2) - (var_3 ^ 0))) << (((max((arr_3 [i_1]), (arr_5 [i_2] [i_4] [i_2]))) - 3537736273))));
                            var_18 = (min(((min(((min(var_1, 255))), var_5))), (((arr_8 [i_2] [i_2] [i_3 + 1] [i_1]) ? 9223372036854775802 : var_0))));
                            var_19 = (max((arr_2 [i_1]), ((var_10 ? ((var_10 & (arr_0 [i_2]))) : ((max(var_0, 4294967295)))))));
                            var_20 += var_6;
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_21 = var_14;
                            arr_16 [i_0] [i_1] [i_2] [i_2] [i_5] = var_13;
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            var_22 = (min(((-var_7 ? (arr_9 [i_1] [i_1]) : (arr_11 [i_0] [i_1] [i_2]))), ((((((var_2 ? var_4 : 0))) - (((arr_12 [i_1]) ? var_13 : (arr_11 [i_1] [i_1] [i_1]))))))));
                            arr_19 [i_0] [i_1] [i_2] [i_2] [i_6] &= (arr_2 [i_0]);
                        }
                        var_23 = max(var_7, (((arr_3 [i_3 - 3]) << (((arr_3 [i_3 + 2]) - 108703177)))));
                        arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((min(-126, var_0))) ? ((((arr_14 [i_1] [i_3 - 1] [i_3] [i_3 - 2] [i_3 - 1] [i_3 + 1] [i_1]) <= var_13))) : (var_7 | 0)));
                    }
                }
            }
            var_24 = (((-(arr_12 [i_1]))));
            arr_21 [i_0] [i_1] = ((((((arr_14 [i_1] [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]) || var_4))) & (((!(arr_10 [i_1] [i_1] [i_0] [i_1] [i_0]))))));
        }
        arr_22 [i_0] &= ((((var_11 > (arr_7 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
    {
        arr_25 [i_7] = (!4294967295);
        var_25 = (arr_10 [i_7] [i_7] [i_7] [i_7] [i_7]);
    }
    var_26 ^= var_8;
    #pragma endscop
}
