/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((~(max(var_1, -359602227)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((((arr_3 [i_1 + 4]) ? (arr_3 [i_1 + 1]) : (arr_3 [i_1 + 1]))));
                var_13 = ((!((max(var_3, -7)))));
                var_14 = (max(var_14, (arr_1 [i_0])));
            }
        }
    }
    var_15 = var_0;
    #pragma endscop
}
