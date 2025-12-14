/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, var_7));
                    var_16 = (max(var_16, (((((((((var_6 ? var_6 : var_2))) ? ((min(var_0, (arr_5 [i_0] [i_0] [i_0] [i_0])))) : var_11))) ? ((var_3 ? ((121 ? (arr_2 [i_2] [i_1]) : 8)) : (((arr_5 [i_0] [i_0] [i_0] [i_2]) ? (arr_4 [i_0] [i_2] [i_2]) : var_12)))) : (max((((~(arr_4 [i_1] [i_2] [i_2])))), (arr_0 [i_2] [i_2]))))))));
                    arr_7 [i_0] [i_0] [i_0] = var_10;
                }
            }
        }
    }
    var_17 = max((~1), (min((min(-39, 89484781)), ((11189 ? 65535 : 31)))));
    #pragma endscop
}
