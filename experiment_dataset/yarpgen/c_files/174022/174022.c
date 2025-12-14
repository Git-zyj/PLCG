/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = 191;
                    arr_8 [i_0] [i_1] [i_0] = (((~var_1) && (((~(var_1 / var_3))))));
                    var_13 &= max((max((max((arr_2 [4]), (arr_6 [8] [i_2] [i_0] [8]))), (((0 ? var_6 : var_6))))), ((min(((38 ? var_10 : 37)), (arr_5 [i_0] [6] [i_1] [i_0])))));
                }
            }
        }
    }
    var_14 |= (min(var_4, var_4));
    #pragma endscop
}
