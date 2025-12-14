/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (min(var_13, (var_5 % var_6)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_11 [i_2] = (((((0 ? 11610 : ((28 ? 106880730 : -598316530678159968))))) ? (min(-106880725, 53925)) : ((min(var_13, (arr_9 [i_0] [i_1] [i_2]))))));
                    arr_12 [i_0] [i_1] = ((min((((24083 || (arr_10 [i_0] [i_0] [i_0])))), -53926)));
                    var_15 = 89;
                    arr_13 [i_0] [i_1] [i_0] = min((arr_1 [i_2]), (2379928507 == 53248));
                }
            }
        }
    }
    #pragma endscop
}
