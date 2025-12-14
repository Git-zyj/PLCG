/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = max((arr_5 [13] [13] [13]), (((((var_8 ? 2136041726236032495 : (arr_1 [4] [i_1]))) < (arr_1 [5] [5])))));
                var_21 = min(((((min((arr_3 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) ? (((arr_3 [6] [6]) ? (arr_2 [i_0]) : (arr_6 [i_0] [i_0]))) : 5460651977316794955)), (arr_4 [i_0]));
                var_22 = (((~(arr_4 [i_0]))));
                var_23 = var_16;
            }
        }
    }
    var_24 -= (!var_1);
    var_25 = var_15;
    #pragma endscop
}
