/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_5 / var_7) > (var_5 * -var_10)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((((min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))) * (((-1468 && var_4) / ((min((arr_5 [i_0] [i_0 - 1]), -1468)))))));
                var_14 = (max(var_14, (((-((((max((arr_0 [i_1]), var_1))) ? (~var_2) : ((((arr_2 [i_1] [i_0]) > (arr_1 [i_0])))))))))));
            }
        }
    }
    #pragma endscop
}
