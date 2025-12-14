/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((-((((max(var_0, var_14))) ? (max(16, -1)) : (((var_14 ? 16 : 32483)))))));
                arr_6 [i_0] [i_1 - 3] [i_1] |= ((~(min((((arr_3 [6]) | (-32767 - 1))), (arr_2 [i_1])))));
            }
        }
    }
    #pragma endscop
}
