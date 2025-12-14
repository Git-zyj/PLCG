/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [6] = -var_4;
                    arr_10 [i_1] [i_2] = (((((var_2 ? (arr_3 [i_2] [i_0 - 1] [i_0 - 1]) : (arr_3 [i_1] [i_0 - 3] [i_0 - 3])))) * (arr_1 [i_2] [i_0 - 2])));
                    arr_11 [i_2] [4] [i_0] = (((arr_1 [1] [i_0 - 4]) >> 0));
                }
            }
        }
    }
    var_15 = (((((1 ? 1261835200 : 4503599626846208))) ? var_12 : (!2)));
    #pragma endscop
}
