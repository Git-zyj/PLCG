/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = var_15;
                    var_21 = ((~((var_19 ? 1 : (arr_2 [i_2])))));
                    var_22 = (min(var_22, ((min((((arr_3 [i_0 - 1] [i_0 - 1]) ? (arr_3 [i_0 - 1] [i_0 - 1]) : 0)), 89)))));

                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        arr_12 [i_0 + 2] [i_1] [i_0] [i_3 + 1] [14] [6] &= (arr_4 [i_0] [11] [i_2]);
                        var_23 = var_13;
                        arr_13 [i_0] [i_3] [0] [i_0] [i_0 + 2] = 65523;
                    }
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        arr_17 [i_0 + 2] [i_0 + 2] [i_2] &= var_2;
                        arr_18 [i_0] [10] [i_0] [i_4] = (((+(max((arr_2 [i_2]), 1099511627744)))));
                        var_24 = (max(var_24, 161));
                    }
                    var_25 = (max(var_25, (arr_15 [13] [i_0 + 2] [i_0 - 1])));
                }
            }
        }
        var_26 = (min(var_26, (((((((var_8 & (arr_2 [i_0]))) ^ (arr_14 [i_0 + 2] [i_0 + 1] [10] [i_0])))) ? (((((min(89, 188))) || (~193)))) : (max(167, (arr_14 [i_0 - 2] [i_0] [4] [i_0 + 1])))))));
        var_27 = (min(var_27, (((!(183 | 1))))));
    }
    var_28 = var_8;
    var_29 = (((min((var_5 ^ 13), var_4)) == (((~(!var_9))))));
    #pragma endscop
}
