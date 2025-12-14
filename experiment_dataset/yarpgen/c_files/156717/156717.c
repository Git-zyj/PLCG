/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, -var_13));
                    var_20 = max(var_17, (arr_2 [i_0 - 1] [i_0 - 3] [i_2]));
                    arr_7 [i_2] [i_1] [i_0 - 2] = (((((((((-(arr_1 [i_0 - 2] [i_2]))) + 9223372036854775807)) >> ((((var_13 ? (arr_3 [i_0 - 2]) : 126)) + 4227))))) ? (((~(var_8 / 5290057623552910827)))) : (arr_0 [i_1] [i_2])));
                }
            }
        }
    }
    var_21 = var_2;
    var_22 = (min(var_22, (((~(~var_17))))));
    var_23 = var_4;
    #pragma endscop
}
