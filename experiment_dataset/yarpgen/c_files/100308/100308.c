/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((!((max(var_8, 1187649650))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_11 = ((((min((max((arr_4 [i_0]), var_9)), (arr_1 [i_0 - 1])))) ? ((((((-14390 < (arr_1 [i_1]))))) & (~1719050347))) : ((((min(1187649647, 2147483647)) % ((-1343557375 ? (arr_3 [i_0] [i_0]) : 14368)))))));
                var_12 = (max(var_12, (arr_1 [i_1])));
            }
        }
    }
    var_13 = (var_8 < var_4);
    #pragma endscop
}
