/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_0 || var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (!((((arr_4 [i_0]) ? (arr_1 [i_1] [i_0]) : ((((arr_0 [i_1]) || (arr_5 [i_1]))))))));
                var_21 = ((-(max((arr_4 [i_1]), ((min(var_6, (arr_1 [i_0] [i_1]))))))));
                var_22 = (((arr_0 [i_1]) ? ((min((arr_5 [i_0]), var_0))) : ((max((arr_0 [i_0]), (arr_0 [i_0]))))));
            }
        }
    }
    var_23 = ((-((((((27100 ? var_17 : var_1))) || -var_9)))));
    #pragma endscop
}
