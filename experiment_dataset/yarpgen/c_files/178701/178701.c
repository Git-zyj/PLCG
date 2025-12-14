/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0 + 1] [i_1] = (min((min((arr_2 [i_1 + 1] [i_0 + 1]), (arr_0 [i_0 - 1]))), (255 > 1589524184)));
                arr_7 [i_0] [i_0] = ((~((~(arr_4 [i_1] [i_1 + 1])))));
            }
        }
    }
    var_11 = (min(var_11, (((var_5 ? (min(((max(var_0, var_6))), var_9)) : var_9)))));
    #pragma endscop
}
