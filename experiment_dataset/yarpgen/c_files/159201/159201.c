/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = (arr_3 [i_0] [2] [21]);
                arr_4 [i_0] [13] [8] = ((-(min((arr_0 [i_1 - 3] [i_1 - 1]), -2147483638))));
            }
        }
    }
    #pragma endscop
}
