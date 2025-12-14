/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((3 && 2147483633), 9056));
    var_13 = 220;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (min(56480, 56496));
                var_15 = (((!var_10) << ((((9056 / (arr_3 [i_0] [i_0] [i_1]))) - 75))));
                var_16 = (((max((arr_2 [i_0 + 3] [i_1] [i_0 + 3]), -var_7)) + (40362 * 16)));
            }
        }
    }
    #pragma endscop
}
