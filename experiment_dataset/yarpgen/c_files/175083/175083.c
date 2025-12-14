/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = (max(274861129728, 56));
        var_18 += ((((((56 ? var_1 : 2265692826)) - 71)) <= ((((arr_0 [i_0]) & 2029274467)))));
        var_19 = (((-(arr_0 [i_0]))));
        var_20 = (min(var_20, (((-(((arr_3 [i_0]) + (arr_3 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_8 [i_1] = ((min(((var_4 << (var_12 - 2179475341)), -var_16))));
        var_21 = var_13;
    }
    var_22 &= (((((-(!2265692839)))) & (~2029274451)));
    var_23 = ((var_10 << (((4294967295 / var_8) - 21913079))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_24 = ((max(55, ((4294967295 ? 4294967282 : (arr_15 [i_2] [i_3] [i_3]))))));
                var_25 &= arr_15 [i_2] [i_3] [i_3];
                var_26 = ((268173312 || ((max((arr_9 [i_2] [i_3]), -var_14)))));
                var_27 = (!38);
            }
        }
    }
    #pragma endscop
}
