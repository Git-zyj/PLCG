/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(-var_13, var_11));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [10] [i_0 - 1] [i_1] = ((((((arr_0 [i_0 + 3] [i_1]) ? (arr_0 [i_0 + 1] [1]) : (arr_0 [i_0 - 1] [1])))) ? (arr_0 [i_0 - 1] [8]) : (arr_0 [i_0 + 2] [8])));
                arr_6 [i_1] = -5457737505467719926;
                var_19 = ((17460803462296372873 ? -1 : (-32767 - 1)));
            }
        }
    }
    var_20 ^= ((((((((var_1 ? var_3 : -1))) ? (~var_0) : (~19)))) ? var_7 : var_10));
    #pragma endscop
}
