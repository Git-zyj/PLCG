/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((max(2565745136397626130, ((8934877570082031670 ? (arr_2 [i_0]) : (arr_1 [i_0])))))) ? 3 : (((arr_4 [i_1]) ? 65515 : (arr_2 [i_0]))));
                arr_6 [i_1] [i_0] = ((((-90 != (arr_3 [i_1]))) ? ((9786 ? (arr_2 [i_0 + 1]) : (arr_4 [i_1]))) : 33546240));
            }
        }
    }
    var_14 = var_8;
    var_15 = (max(var_15, (((((max(var_12, var_6))) ? var_0 : 1686353382)))));
    #pragma endscop
}
