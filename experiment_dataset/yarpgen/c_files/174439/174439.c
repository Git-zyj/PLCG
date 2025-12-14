/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = ((((min(var_0, (arr_0 [i_1])))) > ((max((arr_2 [i_0] [i_2] [i_0]), (arr_2 [i_0] [i_0] [i_0]))))));
                    var_20 = max(1, ((1 && (!-126))));
                    var_21 = (max(var_21, -1));
                    arr_6 [i_1] [i_2] = (((((((7258922914555295601 ? 86 : 84)) & var_8))) ? (((~-7) | (max(var_14, var_9)))) : (arr_3 [i_2] [i_1] [i_0])));
                }
            }
        }
    }
    var_22 = var_13;
    #pragma endscop
}
