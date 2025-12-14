/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 = (max(((min((~var_9), (arr_1 [i_0])))), (((min(13757848576731427183, (arr_4 [i_0] [i_0]))) - (max((arr_5 [i_0] [i_1] [i_1 - 1]), (arr_8 [i_0] [i_1 + 1] [i_2] [3])))))));
                    arr_9 [i_0] [1] [8] = ((((((var_11 ? 127 : (arr_6 [i_0] [4] [9] [1]))))) & 1));
                    var_16 = (min(var_16, ((((arr_5 [i_0] [i_1] [i_2]) >> (((min(-var_1, 8673)) - 8666)))))));
                }
            }
        }
    }
    var_17 = (min(var_17, var_10));
    var_18 = ((((-30608 ? var_6 : 1)) > var_4));
    var_19 = var_0;
    #pragma endscop
}
