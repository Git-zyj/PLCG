/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_20 = (((-(arr_1 [i_0] [i_0]))));
        var_21 = (min(var_21, (arr_0 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((!((((var_13 ? 64 : var_10)) > (((1 >= (-9223372036854775807 - 1))))))));
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] = ((!(((-(((arr_0 [i_0] [i_1]) ? var_19 : 1)))))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] = (((((13 ? 42689 : 9223372036854775807))) ? ((2131463288 ? var_10 : ((var_16 ? var_18 : 0)))) : (min((arr_10 [i_0] [i_0] [4] [i_0]), (2131463288 / var_13)))));
                        arr_14 [i_1] = arr_8 [i_0];
                        var_22 = (min(var_22, ((min((arr_4 [i_0] [10] [i_0]), (-2131463275 > -466355958))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = var_0;
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_23 = (arr_21 [i_4] [i_6]);
                        arr_27 [i_4] [i_5 + 2] [i_6] [i_7] = (arr_6 [i_4] [i_4] [i_4] [10]);
                    }
                }
            }
        }
    }
    var_24 = 2373709857;
    var_25 ^= ((-8868 ? 1 : var_14));
    #pragma endscop
}
