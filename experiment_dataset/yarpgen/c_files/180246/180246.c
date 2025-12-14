/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 954250902;
    var_13 = (var_2 / var_9);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (((arr_2 [i_0 - 1]) ? ((((((var_4 ? var_5 : var_5))) ? 3337383888 : (var_9 != var_4)))) : (((arr_0 [i_0 + 1]) ? ((var_6 ? var_5 : 0)) : 532676608))));
                var_15 = (max(var_15, (((((((3532899968 ? (-9223372036854775807 - 1) : var_7))) ? ((((arr_1 [i_1 + 1]) ? (arr_1 [i_1]) : (arr_4 [20] [i_0] [i_1 + 1])))) : -6871173513468043055))))));
            }
        }
    }
    #pragma endscop
}
