/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    var_21 = (!var_15);
    var_22 = (min(((((var_5 + var_8) && ((min(var_15, var_7)))))), (((((-1715 ? var_8 : -35))) ? var_8 : ((max(209469897, 29)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_23 = var_15;
                    arr_8 [i_1] [i_1] [i_1] = min((max(-1, (min(139, 16619397803551199532)))), ((min(80, ((min(148, var_10)))))));
                    arr_9 [i_0] [i_0] [i_0] |= (~-13603523074715037052);
                }
            }
        }
    }
    #pragma endscop
}
