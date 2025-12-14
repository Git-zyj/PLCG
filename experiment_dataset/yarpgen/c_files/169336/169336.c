/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                var_10 = (max(((26 ? (~87) : (min(-1, 2899)))), ((max(59, (arr_0 [i_0 + 2] [i_1 - 1]))))));
                arr_4 [i_0 - 1] [i_1 - 3] [i_1] = ((((((max(-22, 62640))) > (~62636))) && 2896));
            }
        }
    }
    var_11 = (max(11, -1));
    #pragma endscop
}
