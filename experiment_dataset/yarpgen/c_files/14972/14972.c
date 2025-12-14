/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] |= var_5;
                var_16 = ((-((9 ? var_1 : ((min(var_14, (arr_0 [i_0]))))))));
                var_17 = (max(var_17, 8452));
                arr_6 [i_1] = (((4427649221094890569 - 14645411874849218478) ? ((-((min(var_13, var_13))))) : ((min((arr_2 [i_0] [i_1 + 1] [i_0]), (arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
            }
        }
    }
    var_18 = var_3;
    var_19 = var_3;
    #pragma endscop
}
