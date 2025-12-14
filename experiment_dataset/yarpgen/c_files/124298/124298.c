/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_1 ? ((((((var_10 ? 1934461854 : 1369205513))) ? ((var_11 ? 2925761755 : -16)) : (((var_8 ? var_3 : 29543)))))) : (((!var_1) ? (min(10177079371340150998, var_4)) : var_8))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = (min(-1312116132, (-29564 || var_9)));
                    arr_10 [i_1] [i_1 - 1] [2] = ((!((min(4, var_10)))));
                    arr_11 [i_0] [i_2 - 1] = ((~(1 || var_10)));
                    var_15 = ((!((max((32745 != 32757), (~var_5))))));
                    var_16 = (min(var_16, (((((((((255 ? (arr_8 [i_0] [5]) : -527946719))) ? 29532 : var_1))) ? ((1369205539 << (1369205518 - 1369205488))) : (((2147483647 >> (217 - 207)))))))));
                }
            }
        }
    }
    #pragma endscop
}
