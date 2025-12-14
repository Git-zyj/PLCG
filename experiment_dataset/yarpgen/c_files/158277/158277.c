/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = (min(-81, -65));
    var_12 = (var_0 ^ var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [15] [i_2] [22] [9] = ((((arr_7 [i_2]) ^ ((min(-32, (arr_7 [i_2])))))) + ((min((arr_7 [i_2]), var_2))));
                    arr_10 [i_2] = (+(min(-39156, (min((arr_4 [14]), var_6)))));
                }
            }
        }
    }
    var_13 = -81;
    #pragma endscop
}
