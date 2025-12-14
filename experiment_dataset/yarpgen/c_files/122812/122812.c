/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~((var_0 ? 1 : 2423033306))));
    var_16 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 6;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 + 1] [i_1] = (max(-var_3, ((max(1, 63)))));
                arr_6 [i_0] [i_0] [i_0] = -16;
                arr_7 [i_1] = (max(1, (((arr_1 [i_0] [i_0]) ? 1023 : (arr_3 [i_0] [i_1] [i_1 - 4])))));
            }
        }
    }
    var_17 = var_13;
    #pragma endscop
}
