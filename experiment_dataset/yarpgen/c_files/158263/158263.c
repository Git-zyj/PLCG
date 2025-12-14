/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = (max((max(var_7, (max(35, (arr_2 [i_0] [i_0]))))), -32435));
                arr_4 [i_0] [i_0] [3] = ((((5458814067635722959 ^ 6330) ? (((arr_1 [i_0] [i_0]) | (arr_3 [i_0] [12] [12]))) : -1916802888)));
                var_17 = (-(arr_3 [i_0] [i_0] [i_0]));
            }
        }
    }
    var_18 = ((((max((min(91, 35279)), (var_4 > var_11)))) ? (max(var_3, var_14)) : (((var_11 ? ((var_11 ? 2898446064 : 224)) : 2209254345)))));
    var_19 = (min((min(((var_12 ? var_9 : -67108864)), -var_4)), (!var_11)));
    #pragma endscop
}
