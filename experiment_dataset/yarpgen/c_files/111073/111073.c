/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (((min(((2773734721 ? var_11 : var_3)), var_8)) << ((1 >> (((min(var_7, var_16)) - 635))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] = (!-var_2);
                arr_7 [i_0] [10] [i_0] = ((((min((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_0])))) ? var_14 : (((arr_1 [i_0] [i_1]) ^ (arr_1 [i_0] [i_1])))));
                arr_8 [i_0] = (~64404);
                arr_9 [i_0] [i_0] [i_0] = ((((max((min(var_6, var_18)), (arr_0 [i_0])))) * (max(var_13, var_7))));
                arr_10 [i_0] [1] = (((((arr_1 [i_0] [i_0]) && (arr_1 [i_0] [i_1]))) ? (~-1) : var_9));
            }
        }
    }
    #pragma endscop
}
