/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-var_3 ? (((~var_8) & 14019712193782360451)) : var_5));
    var_11 *= (-((max(var_3, var_5))));
    var_12 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0] = 1614512361716039106;
                    arr_10 [i_0] &= (((((arr_3 [i_0] [i_1]) ? -17512 : ((-(arr_2 [i_0] [i_0]))))) | (((!(arr_6 [15] [1] [i_1]))))));
                    var_13 += var_8;
                    var_14 = (((~(arr_6 [i_0] [i_1] [i_2]))));
                }
            }
        }
    }
    var_15 = (~14019712193782360480);
    #pragma endscop
}
