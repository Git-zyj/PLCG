/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    var_16 = var_11;
    var_17 = (min(var_8, ((((min(var_8, 20))) ? (var_11 < var_4) : (min(var_3, var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = -735167997;
                arr_6 [i_1] [i_1] = (((arr_4 [i_1] [i_1] [i_0]) ? (((arr_0 [i_0] [i_1]) * 3031026654)) : -735167972));
                arr_7 [i_0] = (((((17 ? 3031026654 : -735167997))) ? ((((((arr_3 [i_0] [i_0] [i_0]) ? var_2 : var_2)) < -735167972))) : ((~((max(96, 65515)))))));
            }
        }
    }
    #pragma endscop
}
