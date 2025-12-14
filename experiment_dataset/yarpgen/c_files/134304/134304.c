/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((25265 ? (min(var_11, 40272)) : (!-32766))) != ((~(min(var_0, var_2))))));
    var_17 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (arr_4 [i_0] [i_1] [1])));
                arr_5 [i_0] = 1310746871829443233;
                var_19 = (max(var_19, var_9));
            }
        }
    }
    #pragma endscop
}
