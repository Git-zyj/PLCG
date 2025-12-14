/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (min((((arr_3 [i_0] [i_0 + 3] [i_0]) ^ 1)), 1));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_15 = (((arr_0 [i_0]) ? (((!(arr_3 [i_0 + 4] [i_1] [i_0])))) : ((min((arr_0 [i_0]), (arr_3 [i_0] [i_1] [i_0]))))));
                    var_16 = (min(var_16, 2));
                }
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    var_17 = (arr_0 [i_0]);
                    arr_9 [i_0] [1] = ((4161550704 ? 240 : 49));
                }
                for (int i_4 = 3; i_4 < 11;i_4 += 1)
                {
                    arr_12 [i_0 - 1] [i_0] [i_0] [i_0] = (((min((arr_7 [i_0 - 3] [i_0]), (min((arr_4 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_0])))))) > (max((((arr_11 [i_0] [i_0]) ? 97 : (arr_1 [i_4]))), var_3)));
                    arr_13 [i_0] [i_0] [i_0] [i_1] = ((var_5 <= (max(-528012258, 196))));
                    arr_14 [i_0] [i_0] [i_4] [i_4] = var_0;
                    var_18 = (min(((max((arr_6 [i_4] [i_4] [i_4] [i_4 - 2]), 1))), (min(517268517, 9462))));
                    arr_15 [i_0] [i_0] [i_0] = 253;
                }
            }
        }
    }
    var_19 = ((var_11 ? var_7 : var_1));
    #pragma endscop
}
