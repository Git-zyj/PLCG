/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])));
        var_21 = (max(((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))), ((var_7 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        var_22 = (min(((max(var_10, (arr_0 [i_0] [i_0])))), (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));

        for (int i_1 = 2; i_1 < 8;i_1 += 1) /* same iter space */
        {
            var_23 -= ((arr_0 [i_0] [i_1 + 3]) ? (arr_0 [i_0] [i_1 + 1]) : (arr_0 [i_0] [i_1 + 1]));
            var_24 -= (arr_0 [i_0] [i_1]);
            arr_5 [i_0] [i_0] = (max(((min(1536074542, 1536074542))), (arr_0 [i_1 + 1] [i_1 + 3])));
            var_25 = (max(var_25, (arr_4 [i_1])));
        }
        for (int i_2 = 2; i_2 < 8;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_15 [i_0] [i_0] [i_3] [i_3] [i_4] &= var_2;
                        var_26 = ((max((arr_12 [i_2 - 1] [i_3 - 2]), (arr_13 [i_2 + 1] [i_3] [i_3 - 2]))));
                    }
                }
            }
            var_27 = (min((arr_13 [i_2 - 2] [i_2 + 3] [i_2 - 2]), (arr_11 [i_0] [i_0])));
        }
    }
    var_28 -= var_3;
    #pragma endscop
}
