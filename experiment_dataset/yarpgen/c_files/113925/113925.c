/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = ((((((arr_6 [i_2 - 1] [i_2] [i_0] [i_2]) ? (arr_6 [i_2 - 3] [i_2] [i_0] [i_2]) : var_0))) ? (~255) : ((var_2 ? 14984 : 14993))));
                    var_12 += (((var_9 * 1) ? (arr_3 [i_2 + 1] [i_2 + 1] [i_2]) : (arr_3 [i_2 - 3] [i_2] [i_2])));
                    var_13 = (((min((var_10 * var_3), var_3)) * ((2131137752 ? var_10 : (arr_5 [i_0] [i_2 - 1] [i_1] [i_0])))));
                }
            }
        }
    }
    var_14 = (max((min(var_5, (max(var_9, -1239549726)))), (~var_10)));
    #pragma endscop
}
