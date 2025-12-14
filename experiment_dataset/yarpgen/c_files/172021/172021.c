/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = ((((((~(arr_2 [13] [10] [i_1 + 1]))))) != (max(((((arr_0 [6] [6]) ? 4294967295 : 9))), 0))));
                var_15 = ((((max(-27, 31))) / ((14 ? (arr_3 [7] [i_0] [i_1 + 1]) : (arr_0 [8] [i_1 - 2])))));
                var_16 = ((max(9, (arr_3 [i_1 - 2] [i_1 - 2] [i_1 + 2]))));
                var_17 = (min(var_17, -1));
                var_18 = (max(var_1, (arr_3 [i_0] [i_1] [i_1])));
            }
        }
    }
    var_19 = var_6;
    #pragma endscop
}
