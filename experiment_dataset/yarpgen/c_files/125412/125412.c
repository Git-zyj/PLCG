/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (max((var_0 >= var_4), (max(var_5, ((var_0 ? var_4 : var_2))))));
    var_11 = (max(var_11, var_2));
    var_12 = var_8;
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = ((((-(arr_2 [i_0 - 2] [i_1 + 2] [i_1 - 3]))) - ((201538194 * (arr_2 [i_0 - 2] [i_1 + 2] [i_1 - 3])))));
                var_15 = var_1;
            }
        }
    }
    #pragma endscop
}
