/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (arr_1 [i_1]);
                arr_4 [i_1] [13] = ((((((-4762014262749369154 ? 0 : 7272233638834054134)) > 4762014262749369146)) ? (max((min(261, 4762014262749369141)), ((min(1, 1))))) : ((((2633634904 || ((min((arr_3 [i_0] [i_1]), var_9)))))))));
            }
        }
    }
    var_15 = (7272233638834054103 <= 1);
    #pragma endscop
}
