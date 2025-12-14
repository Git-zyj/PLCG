/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_14 |= ((-(arr_3 [i_0 + 2])));
                arr_4 [i_0] [i_1] = ((((max((arr_0 [i_0] [i_1]), ((-83 ? -26273 : (arr_1 [i_0] [i_0 + 2])))))) ? (arr_1 [2] [i_1 + 1]) : var_12));
                arr_5 [i_0] = (arr_3 [i_0]);
            }
        }
    }
    #pragma endscop
}
