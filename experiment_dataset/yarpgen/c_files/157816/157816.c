/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((-(((var_15 >= (var_16 || 175))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 = (((178 ? var_14 : (arr_6 [i_0] [i_2]))));
                    arr_8 [i_1] [i_2] = (min((arr_3 [i_1] [4]), ((178 ? (!-26042) : var_4))));
                }
            }
        }
    }
    #pragma endscop
}
