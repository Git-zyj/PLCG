/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (((!var_8) | (~var_0)));
    var_16 = (var_12 > var_11);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = arr_3 [i_1 - 2] [i_0 + 1];
                var_18 = ((7289328010581645268 < (var_13 - -var_11)));
                var_19 = ((!((!(arr_5 [i_1] [i_0] [i_0])))));
                var_20 = (max(32, 32760));
            }
        }
    }
    #pragma endscop
}
