/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [13] [13] [1] &= ((!(arr_0 [3] [8])));
                arr_6 [1] [4] [1] = ((((max(((min(43, var_2))), (((arr_2 [0]) % (arr_1 [i_0])))))) ? 0 : ((((0 >> (var_9 - 379957994)))))));
            }
        }
    }
    var_14 = (max(var_11, -var_11));
    var_15 = (max(-44, -2));
    var_16 = (min((max((var_7 | var_7), (var_3 < var_8))), (max((((0 ? 0 : 125))), ((17 ? var_5 : 1))))));
    #pragma endscop
}
