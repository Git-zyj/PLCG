/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1;
    var_12 = (max(11019, (((((min(var_5, 30)))) * (min(1869891324407637370, var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 - 1] [i_0 - 1] = ((((((min(7127109093357461576, var_2))) ? 3774649971015565422 : (((1 ? var_1 : var_5))))) < var_2));
                arr_6 [i_1] [8] [i_0] = 944504990;
                arr_7 [i_0] [i_0] = ((555469119 ? 41 : -29253));
            }
        }
    }
    var_13 = ((var_6 > (min((7311953838164498639 == -23), (var_6 & var_3)))));
    #pragma endscop
}
