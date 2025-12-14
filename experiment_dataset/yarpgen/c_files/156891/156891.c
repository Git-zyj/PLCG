/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    var_21 = (max(var_17, ((1 ? 0 : ((var_3 ? var_19 : var_16))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_1 + 1] [i_0] [i_0 - 1] = ((!((max((arr_1 [i_0 - 1] [i_0 - 1]), (arr_1 [i_0 - 1] [i_0 - 1]))))));
                var_22 = (max(((max((arr_4 [i_0 - 1] [i_0 - 1] [i_0]), (arr_4 [i_0 - 1] [i_0 - 1] [i_0])))), (arr_3 [8])));
                var_23 = (arr_4 [i_1] [i_1] [i_0]);
                var_24 = ((((~10718) ? (max(var_4, 2282825850)) : (~var_7))));
            }
        }
    }
    #pragma endscop
}
