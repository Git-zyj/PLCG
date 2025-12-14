/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = ((((~(arr_2 [i_0] [i_1]))) | (arr_2 [i_0] [i_1])));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_8 [6] [i_2] [i_2] [6] = (((arr_4 [i_0] [i_1] [i_2]) ? (((1 ? 36 : 4))) : (((arr_4 [i_0] [i_1] [i_2]) ? var_0 : (arr_4 [i_0] [i_1] [i_2])))));
                    var_12 = (min(var_12, (((-((-(arr_4 [1] [1] [i_0]))))))));
                    arr_9 [1] [1] [i_2] = (arr_1 [i_0] [i_0]);
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    arr_13 [i_0] [23] [24] = var_3;
                    arr_14 [i_3] = (((!(arr_10 [i_1] [i_1]))));
                    var_13 = 36;
                }
            }
        }
    }
    #pragma endscop
}
