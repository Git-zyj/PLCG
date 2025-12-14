/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((14735 + 171) ^ var_8));
    var_16 = ((max(var_1, ((var_4 ? 171 : var_13)))));
    var_17 = (min(var_17, var_4));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_0 + 1] [i_0] [i_0 + 1] [i_0] = (((((26749 & (arr_5 [i_0 - 1] [i_1 - 1] [i_1 + 2] [i_1 + 2])))) ? (max(var_11, var_9)) : (~65365)));
                    arr_7 [i_0] [i_0 - 1] [i_0] [i_0] = (max(((!(arr_1 [i_0]))), ((!((max((arr_2 [i_0 + 1]), (arr_1 [i_0]))))))));
                    var_18 = (min(var_18, ((((((var_5 ^ (arr_1 [i_2])))) ? ((6291375539980561303 >> (((6291375539980561310 & var_8) - 163062695629119586)))) : (((((var_14 ? -1 : (arr_4 [i_0])))))))))));
                }
            }
        }
    }
    #pragma endscop
}
