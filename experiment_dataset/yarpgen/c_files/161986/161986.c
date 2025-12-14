/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((((9 ? 5 : 576390383559245824))) ? ((max((((arr_3 [i_0] [i_1]) >= 250)), 1))) : ((max(((((arr_2 [i_0] [i_1]) < (arr_3 [i_0] [i_1])))), (max(40, (arr_1 [8]))))))))));
                var_19 = (max(var_19, 1));
                arr_5 [8] [8] |= (min((max(-839046140, ((var_8 >> (-839046156 + 839046160))))), (arr_1 [4])));
            }
        }
    }
    var_20 = (min(var_20, (((((max(var_14, var_16))) ? (-839046155 - var_4) : var_5)))));
    var_21 = ((var_9 ? var_12 : (max(((max(1, var_17))), ((var_11 ? 216 : var_17))))));
    #pragma endscop
}
