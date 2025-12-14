/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_20 = var_9;
        var_21 += (min((min(var_4, (var_16 / -1112314712288808247))), ((min((arr_2 [i_0 + 1] [i_0]), ((-1 * (arr_2 [i_0] [i_0]))))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            {
                arr_8 [i_1] [i_1] = (4189696808868062474 <= 3493235584);
                var_22 = (((arr_3 [i_1] [i_2 - 1]) & (arr_4 [i_2 - 1] [i_1])));
            }
        }
    }
    #pragma endscop
}
