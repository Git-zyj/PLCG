/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = (((arr_3 [i_0 + 2] [i_0]) / (arr_4 [i_0])));
                    var_21 = ((~(arr_2 [i_1])));
                    var_22 = (max((min((((arr_5 [i_0]) / var_17)), (arr_6 [i_1 + 2] [i_0 + 2]))), (arr_3 [i_0 + 1] [i_2])));
                    arr_7 [i_0] [i_1] [i_2] [i_0] = 85;
                    var_23 = ((~(var_1 < var_13)));
                }
            }
        }
    }
    var_24 = (~var_5);
    var_25 = (var_4 > var_2);
    #pragma endscop
}
