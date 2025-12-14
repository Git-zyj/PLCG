/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_5, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (!var_3)));
                arr_7 [i_0] [i_0] = ((((!((min(13594831229645629520, 9725))))) ? (((~(arr_6 [i_0])))) : (((((arr_3 [11]) ? var_5 : (arr_5 [i_0]))) + (((38 ? 2 : 38521)))))));
            }
        }
    }
    var_13 = var_1;
    var_14 = var_3;
    var_15 = max(((var_6 ? (max(var_2, var_7)) : ((var_0 ? var_7 : var_2)))), (((((min(15458786304925600003, 2))) ? ((var_10 >> (var_3 - 12275))) : (~var_3)))));
    #pragma endscop
}
