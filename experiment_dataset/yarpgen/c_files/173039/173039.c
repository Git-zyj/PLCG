/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 += (-14490 < ((((arr_2 [i_0 + 1] [i_0 - 1]) < 1516341454))));
                arr_4 [i_0] [i_0] [i_1] = (24 < 10562332328590114395);
            }
        }
    }
    var_15 = (((((var_7 < (var_12 < var_9)))) < var_3));
    var_16 = var_0;
    #pragma endscop
}
