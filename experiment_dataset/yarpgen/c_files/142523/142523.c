/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((min((129 / 3684252427), 1071032932)), var_7));
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = ((((min(56909, 3684252427))) || ((max(56906, (arr_0 [i_0 - 1]))))));
                var_12 = var_9;
            }
        }
    }
    #pragma endscop
}
