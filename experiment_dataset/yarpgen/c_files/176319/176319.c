/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((var_6 ? var_9 : var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((((min((max(-9126553876514099452, 9126553876514099440)), (((-(arr_1 [2]))))))) ? (+-5) : ((var_5 ? (((-(arr_1 [i_1])))) : var_12))));
                var_19 = (max((min(((min((arr_2 [i_1]), (arr_3 [i_0] [i_0] [i_1])))), -9223372036854775788)), ((((max((arr_1 [i_0]), (arr_0 [i_0] [i_0])))) ? -1498207056883275247 : (((max((arr_4 [i_0] [i_0] [i_0]), (arr_2 [16])))))))));
            }
        }
    }
    #pragma endscop
}
