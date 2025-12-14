/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((~var_0) ? var_14 : (min(var_9, var_11)))) < var_10));
    var_19 -= ((var_11 ? 2492009983 : -var_4));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = ((((!(arr_2 [i_0] [i_0 - 1])))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_21 = (min((arr_1 [i_0 + 1]), ((((arr_1 [i_0 + 1]) < (arr_6 [i_2]))))));
                        var_22 = ((~((((min((arr_0 [i_0]), (arr_7 [i_0] [i_0] [i_2])))) * (!var_0)))));
                        var_23 ^= ((((((arr_2 [i_1] [i_3]) ? ((max((arr_3 [i_0]), 1))) : (arr_4 [i_0 - 1])))) ? (min(-40746, -8)) : ((((((min((arr_5 [i_1] [i_2] [i_3]), (arr_0 [i_0 - 2])))) + 2147483647)) << (1 - 1)))));
                        var_24 ^= (arr_1 [i_0 - 1]);
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        arr_10 [i_0] [i_1] [3] [i_0] [i_2] = (max((arr_4 [i_2 + 1]), (max(((var_3 ? (arr_2 [i_0] [i_2 - 2]) : 0)), (((arr_3 [i_0]) ? (arr_5 [i_0] [i_1] [1]) : (arr_4 [i_1])))))));
                        arr_11 [i_0] [i_1] [i_2] [i_1] [i_4] = (-((-(((arr_9 [i_0] [i_2]) ? 1 : 1)))));
                        arr_12 [i_2] [i_4] = var_13;
                    }
                    var_25 = (max(var_25, (((1353863782 == ((1212177650 % (((arr_9 [i_0] [8]) & 2492009963)))))))));
                }
            }
        }
    }
    #pragma endscop
}
