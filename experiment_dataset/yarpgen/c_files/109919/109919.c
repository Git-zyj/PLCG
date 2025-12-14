/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_20 &= (((~(arr_2 [i_0] [i_1] [i_1 - 2]))));
                var_21 = (min(((min((arr_1 [i_1 + 1]), (arr_3 [i_0] [i_1])))), (min(61145, 61145))));
                var_22 = (arr_1 [1]);
            }
        }
    }
    var_23 = var_5;
    var_24 = (min(((61145 ? (~var_8) : var_12)), (~var_6)));
    var_25 += (max(((min(var_4, ((61127 ? 61145 : 0))))), (min((max(var_16, var_15)), ((min(var_3, 247)))))));
    #pragma endscop
}
