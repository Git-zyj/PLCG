/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_1 ? (-1 >= -1171804560283866803) : -1))) ? ((((!(((var_2 ? -1 : -2))))))) : ((((max(var_14, var_5))) ? var_1 : var_8))));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 = (((((arr_7 [i_1] [i_1] [i_2]) ? var_9 : var_3))));
                    var_17 = (max((4294967295 | var_3), (((arr_5 [11] [i_1] [i_2]) ? (var_0 / var_2) : (arr_4 [i_0 - 2] [i_1] [i_1])))));
                    var_18 = ((~(arr_2 [i_1])));
                }
            }
        }
        var_19 = ((-0 && (~var_12)));
    }
    var_20 = ((+(((!var_2) ? -var_10 : var_9))));
    #pragma endscop
}
