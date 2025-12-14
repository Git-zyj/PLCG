/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = ((min((0 + 8248688907092912094), ((min(0, var_9))))) / 58032);
                arr_8 [i_0] [i_0] [i_0] = var_2;
                var_10 = (max((((arr_0 [i_0 - 2]) ? (arr_3 [i_0 - 4]) : (max(7503, (arr_4 [i_0] [i_0] [i_1]))))), (((((max(1, 0))) / (min((arr_2 [i_0]), 1)))))));
                arr_9 [i_0] = (((min(var_3, var_7)) | ((var_5 ^ ((min(1, 58032)))))));
                var_11 = (arr_0 [i_0]);
            }
        }
    }
    var_12 += ((-var_3 - (max(var_5, var_6))));
    #pragma endscop
}
