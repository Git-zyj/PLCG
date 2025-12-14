/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (max((((((((arr_5 [i_1] [i_1]) || (arr_3 [i_1] [i_1] [i_0]))))) - (((arr_0 [i_0] [i_1]) ? (arr_4 [i_0]) : var_10)))), (((max(12, (arr_3 [i_0] [i_1] [i_0])))))));
                arr_6 [i_0] [i_1] = (((((-29 ? -1489273784 : (-2147483647 - 1))) + 2147483647)) >> ((((arr_2 [i_1]) || (arr_2 [i_0])))));
                var_13 = (min(var_13, (arr_4 [i_1])));

                for (int i_2 = 4; i_2 < 12;i_2 += 1)
                {
                    var_14 = (max(var_14, 2147483647));
                    var_15 = (arr_3 [14] [i_1] [i_2]);
                }
            }
        }
    }
    var_16 = (min(var_16, var_5));
    var_17 = min(var_10, (((min(245, 609087840)))));
    #pragma endscop
}
