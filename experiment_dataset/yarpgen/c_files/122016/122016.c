/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((32 ? 4981438390185966608 : 50));
    var_21 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                var_22 = ((((((arr_3 [i_0]) | -1)) <= (!4195077441011516211))));
                var_23 = (max(((((max((arr_5 [i_0 + 1] [i_1]), (arr_5 [i_0] [i_0]))) <= (max(-657660024, 53645))))), (min((arr_2 [i_0 + 1]), (208 / 177)))));
            }
        }
    }
    #pragma endscop
}
