/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-((((var_5 ? var_1 : var_5))))));
    var_20 = var_7;
    var_21 = var_10;
    var_22 -= var_14;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((((((3847198732321849847 && var_12) | (((arr_4 [i_0 - 1] [i_1] [i_2] [i_2]) ? (arr_6 [i_0] [i_1] [i_2] [i_2]) : var_2))))) ? (arr_1 [i_2]) : (((!14599545341387701769) ? (max(14599545341387701768, (arr_3 [i_0]))) : var_18))));
                    arr_9 [i_2] [i_1 - 3] [i_2 + 2] [6] = ((((max((arr_5 [i_0] [i_2] [i_1] [11]), 3847198732321849857))) ? ((((158 ? var_18 : (arr_4 [i_2] [i_1 + 1] [i_1] [i_2]))) ^ (((~(arr_7 [i_2] [i_1])))))) : -361));
                }
            }
        }
    }
    #pragma endscop
}
