/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1 + 1] [12] [12] = (min((max(var_2, (arr_5 [i_1 + 1] [14] [i_0] [i_0]))), ((min(2507080161152664178, -32761)))));
                    arr_7 [i_0] [i_1 - 1] [i_1] [i_1] = var_3;
                    arr_8 [6] |= ((~(arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1] [16])));
                    arr_9 [i_1] = max((max((~-32761), ((var_5 >> (var_1 + 68))))), 32760);
                }
            }
        }
    }
    var_18 = var_5;
    var_19 = ((((((-1206859371 ? 1196503475 : 1)))) ? -32761 : 0));
    #pragma endscop
}
