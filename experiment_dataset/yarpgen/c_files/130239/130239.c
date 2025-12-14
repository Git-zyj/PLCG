/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_13 = min(((~(arr_1 [i_0 - 2]))), (arr_1 [8]));
                var_14 = (((((((arr_2 [i_0 + 1]) == (arr_2 [i_0 - 2]))))) > (max(1237856173, 144))));
                var_15 = ((!(arr_4 [i_0 - 1] [i_1] [i_1 + 2])));
            }
        }
    }
    #pragma endscop
}
