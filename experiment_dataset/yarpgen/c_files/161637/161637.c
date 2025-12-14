/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((((0 ? 676513522 : 4315313228617563807)) != ((max(0, 3618453761)))));
                var_10 = (max(((3609925049 ? var_5 : (arr_2 [i_0 + 1] [i_0 - 1]))), ((max((arr_0 [i_0 - 2]), 4294967290)))));
            }
        }
    }
    var_11 = var_9;
    var_12 = (3606328453 ? var_6 : (~-var_2));
    #pragma endscop
}
