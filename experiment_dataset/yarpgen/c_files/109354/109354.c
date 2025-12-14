/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = 7620626073810037098;
                arr_5 [1] [i_1] [i_1] = (((((-(arr_0 [i_1])))) ? ((-(max((arr_1 [i_0]), (arr_2 [i_0] [5] [5]))))) : (min((arr_4 [i_1 + 2] [i_1 + 1]), (arr_4 [i_1 + 2] [i_1 + 1])))));
                var_17 = (arr_3 [i_0] [12] [i_1]);
            }
        }
    }
    var_18 = ((var_9 ? 1 : (min(13627, 2001047040))));
    #pragma endscop
}
