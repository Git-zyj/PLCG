/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((max(4036680579, var_13)), var_12));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 |= (3127961598 ? ((max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))) : 24);
                var_18 = min((((min(-1210486673, (arr_2 [i_0]))))), (arr_7 [i_0 + 1] [i_0 - 1] [i_0 + 1]));
            }
        }
    }
    #pragma endscop
}
