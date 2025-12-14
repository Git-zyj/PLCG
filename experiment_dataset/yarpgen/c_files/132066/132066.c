/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = (((var_0 == (max((arr_1 [i_1] [i_1]), (arr_5 [i_0]))))));
                    arr_6 [i_2] [i_0] [i_0] [i_0] = (arr_2 [i_2]);
                    arr_7 [i_0] [i_1] [i_0] [i_0] = max((arr_5 [i_0]), (min((min((arr_5 [i_0]), (arr_1 [i_0] [i_1]))), ((max(-1, 54))))));
                    arr_8 [i_0] = ((~(max((arr_1 [i_0] [i_2]), ((max((arr_3 [i_1] [i_1] [i_2]), var_14)))))));
                }
            }
        }
    }
    var_19 = ((-((max(var_9, (min(-107, -59)))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            {
                var_20 = ((((max((arr_15 [i_4 + 1] [i_4 - 2]), 0))) ? var_5 : (max((arr_15 [i_3] [i_3]), (arr_13 [i_3])))));
                var_21 = var_9;
                var_22 = (min(var_22, ((min((arr_15 [i_3] [i_3]), (((arr_10 [i_4 + 3] [i_4 - 1]) ? (max((arr_10 [i_3] [i_4]), var_7)) : (min(var_1, var_7)))))))));
            }
        }
    }
    #pragma endscop
}
