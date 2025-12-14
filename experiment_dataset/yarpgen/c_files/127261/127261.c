/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, 5895530159613554028));
    var_20 = ((!((((!var_14) ? (-126 > var_13) : (85 + 1472795839))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, ((((((arr_4 [i_0 - 1] [i_0 + 2]) ^ (arr_4 [i_0 - 1] [i_0 + 2]))) ^ ((~(arr_4 [i_0 - 1] [i_0 + 2]))))))));
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((((~((~(arr_5 [i_0 - 1]))))) % (arr_0 [i_0 + 1])));
                    var_22 = (min(var_22, (((((max(var_2, ((var_9 ? var_13 : var_14))))) ? (arr_6 [20] [i_1] [i_1]) : var_3)))));
                    arr_9 [i_0] [i_1] [i_0] = ((((max((arr_0 [i_0 - 1]), (arr_0 [i_0 + 2])))) ? -var_8 : (((min((arr_0 [i_0 + 2]), (arr_0 [i_0 - 1])))))));
                }
            }
        }
    }
    #pragma endscop
}
