/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_2] [i_2] = var_9;
                    var_12 = ((var_6 ? (!3382289017896583307) : ((~(arr_6 [i_1 - 1])))));
                    arr_9 [i_2] [i_2] = ((((arr_7 [i_1 - 1] [i_2] [i_2] [i_1 + 3]) / (arr_7 [i_1 + 1] [i_2] [i_2] [i_1 + 1]))));
                    arr_10 [i_2] [i_1 - 1] [i_2] = ((3575326474570423799 ? ((2488061762 ? (arr_4 [i_0] [i_0] [7]) : (arr_1 [i_0] [i_1 + 3]))) : var_7));
                }
            }
        }
    }
    var_13 = (min(var_13, (((var_9 ? var_4 : 1)))));
    #pragma endscop
}
