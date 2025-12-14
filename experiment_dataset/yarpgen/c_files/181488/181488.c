/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (min((arr_4 [i_0] [i_0] [i_0]), ((var_9 ? (~var_0) : (arr_0 [i_0 + 1] [7])))));
                arr_7 [2] |= ((((((min(-1, (arr_1 [i_1])))) || (((4 ? 3280509728949582588 : (arr_3 [0] [i_0])))))) ? (arr_1 [i_1]) : ((max(((~(arr_2 [i_0 - 1]))), var_11)))));
                arr_8 [i_1] [i_1] = ((+(max((((arr_1 [0]) * -11)), (arr_1 [i_0])))));
            }
        }
    }
    var_16 = (max((min((max(var_5, var_14)), var_10)), ((min(var_11, (5521212782299739256 >= var_2))))));
    var_17 = -13;
    #pragma endscop
}
