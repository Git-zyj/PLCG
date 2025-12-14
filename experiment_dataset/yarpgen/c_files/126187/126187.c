/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((!(((120 ? var_0 : 115)))))) > (!-121)));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_20 = ((~(min((var_17 & var_12), (arr_0 [i_0 + 3])))));
        var_21 = (max(var_21, (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_22 = (max(var_22, ((((((-112 ? ((112 ? (arr_4 [i_2] [1] [i_1] [i_0]) : (arr_1 [i_1]))) : ((((arr_1 [i_1]) == 120)))))) ? (~var_13) : ((((!-120) ^ ((min((arr_4 [i_0 + 3] [i_1] [i_1] [i_0 + 3]), 112)))))))))));
                    var_23 |= ((~(arr_4 [i_0] [i_1] [i_1] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
