/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1;
    var_12 = ((var_0 || (((~((max(16352, 99))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((((min((arr_1 [i_0 - 1]), (arr_3 [i_0] [i_1] [i_1 - 1])))) <= ((((1 ? -16353 : 109)))))))));
                var_14 = ((((max(((min(0, 0))), ((var_2 ? 0 : var_9))))) ? (((!((!(arr_3 [9] [i_1] [1])))))) : ((((arr_1 [i_0 - 1]) && (!1))))));
            }
        }
    }
    #pragma endscop
}
