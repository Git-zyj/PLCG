/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_11 = ((-((((max(var_9, var_0))) ? (var_2 | var_4) : 53704))));
                arr_6 [i_0] [i_0] [i_1] = (min((((!(arr_5 [i_0] [i_1])))), (arr_3 [i_1])));
                var_12 -= arr_2 [i_0] [i_0];
                arr_7 [i_0] [14] [14] = min(var_1, (min(((53704 ? 4294967271 : 53704)), 11832)));
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_13 &= 11840;
        arr_12 [i_2] = 49500;
    }
    #pragma endscop
}
