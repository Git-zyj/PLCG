/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_12, var_15));
    var_18 = (((!2910141846) && var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (var_1 ^ var_0);
                arr_6 [i_0] [i_1] = ((((((var_11 ? var_7 : (arr_1 [i_0] [i_0])))) ? ((1384825471 ? (-9223372036854775807 - 1) : 1043379344)) : ((((arr_3 [10] [10] [10]) ? var_9 : var_11))))));
                arr_7 [i_0] [i_0] = ((var_15 != (arr_1 [i_0] [i_1])));
                var_20 = (arr_5 [i_1]);
                arr_8 [i_0] = ((var_7 <= (min(13531335838399120412, (((arr_1 [i_1] [i_1]) - (arr_3 [i_0] [i_1] [i_1])))))));
            }
        }
    }
    var_21 += var_5;
    #pragma endscop
}
