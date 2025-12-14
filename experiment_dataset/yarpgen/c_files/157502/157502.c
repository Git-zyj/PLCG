/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (-1088859873056314758 ^ -1088859873056314758);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((min(9223372036854775807, -1088859873056314758)));

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    arr_9 [i_0] = (max(((max(((9223372036854775807 ? 9223372036854775807 : 7328826866962284940)), (!16383)))), ((~(((-9223372036854775807 - 1) ? 8991842055605897208 : 0))))));
                    arr_10 [i_0] [i_1] [i_2] = 117;
                    arr_11 [i_0] [i_1] [14] [i_0] = (~(max((-9223372036854775792 != 48628), (-218747960129600465 / -16758))));
                }
                var_11 = (~(max(((~(-9223372036854775807 - 1))), (~16772))));
            }
        }
    }
    #pragma endscop
}
