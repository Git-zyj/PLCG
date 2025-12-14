/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    var_16 = (((((var_13 << (var_12 - 135)))) < var_2));
    var_17 = ((7032 == -7033) ? var_2 : ((max(((max(var_12, var_4))), var_5))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 = (((arr_4 [3] [i_1]) ? (-7033 < -30719) : (arr_6 [i_0] [i_0] [i_0] [i_0])));
                    var_19 = max((((((-1315334181302050827 ? 22461 : 0)) | (((arr_2 [i_0]) ? var_0 : (arr_5 [i_0] [i_1] [i_0] [i_2 + 3])))))), (min(((max(var_5, 127))), ((6932633827987019835 ^ (arr_3 [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
