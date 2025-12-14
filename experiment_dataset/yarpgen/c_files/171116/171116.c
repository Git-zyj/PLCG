/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_13;
    var_15 = ((((((~var_3) - -22523))) ? (~61631) : -var_11));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((-((min(var_12, (arr_0 [i_0]))))));
                var_16 = var_4;
                var_17 &= (min((min(((-(arr_1 [i_0]))), 3905)), (arr_5 [i_0] [i_1])));
                var_18 = (max(63712, ((-(var_4 == 127)))));
                arr_7 [i_0] [i_1] [i_1] = ((((max(17568, (arr_1 [i_1 - 4]))))));
            }
        }
    }
    #pragma endscop
}
