/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1 + 1] = (max((((arr_3 [i_1 + 2] [i_1 - 2]) ? 128 : 128)), (~0)));
                arr_5 [i_0] [i_0] [i_0] = (max((arr_3 [i_1 + 2] [i_1 - 1]), (((arr_3 [i_1 + 2] [i_1 - 1]) ? (arr_3 [i_1 + 2] [i_1 - 1]) : (arr_3 [i_1 + 2] [i_1 - 1])))));
                arr_6 [4] [i_0] [10] = ((((((-(arr_0 [i_1]))))) | ((~(((arr_2 [i_0]) ? -8102392818975532271 : var_11))))));
            }
        }
    }
    var_15 = (min(-var_3, var_9));
    var_16 = var_1;
    var_17 = (max(((max((min(0, 2741178114)), (var_8 ^ var_13)))), (max((var_12 ^ var_11), (((-29976 ? var_12 : var_3)))))));
    #pragma endscop
}
