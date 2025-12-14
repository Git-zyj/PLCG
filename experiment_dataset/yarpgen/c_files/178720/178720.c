/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(1, -115)))));
    var_21 -= ((((var_12 ? ((var_9 ? var_11 : 1)) : var_4)) / (((((917101614 ? -166909268 : 14)) - (var_12 / var_15))))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_22 &= (min((((~(((arr_2 [i_0] [i_0]) ? (arr_0 [1]) : var_6))))), (min(((~(arr_4 [i_0]))), (arr_2 [i_0] [i_0])))));
                    var_23 = (min(var_9, (((89 ? var_4 : var_4)))));

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        var_24 = ((var_17 + 2147483647) << (((((-138393954 ? (arr_4 [i_2]) : (arr_0 [i_0])))) ? (((var_10 ? (arr_7 [i_2] [i_0] [i_2] [i_2] [i_1] [i_0]) : (arr_8 [i_2] [i_1])))) : (((arr_0 [13]) ? -7593688695641616633 : var_2)))));
                        var_25 = (((((arr_5 [i_0]) - 18418)) >> (((!(arr_4 [12]))))));
                    }
                }
            }
        }
        var_26 &= var_15;
        var_27 |= (arr_4 [i_0]);
        arr_9 [4] &= (-(arr_8 [12] [12]));
        var_28 = (((-(arr_7 [i_0] [i_0] [16] [i_0] [1] [16]))) ^ -22005);
    }
    var_29 = (max(var_29, -9223372036854775786));
    #pragma endscop
}
