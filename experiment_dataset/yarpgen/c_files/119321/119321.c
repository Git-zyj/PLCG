/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((var_3 != (-81 < 46545))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((~(((!39467) & var_6))));
                var_18 = ((((arr_3 [i_0] [i_1]) < (arr_3 [i_0] [i_0]))));
            }
        }
    }
    #pragma endscop
}
