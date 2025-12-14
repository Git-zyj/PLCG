/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_21 -= arr_1 [i_0] [i_1];
                var_22 *= (max((min((max(582446495975345184, 65532)), 19)), ((max(((var_0 ? (arr_0 [i_1]) : (arr_1 [i_1] [i_1]))), ((max(96, (arr_3 [i_0] [i_1] [i_1])))))))));
                var_23 = (arr_4 [i_0] [i_1] [i_0]);
                arr_5 [i_0] [i_1] [i_0] |= 16;
            }
        }
    }
    var_24 = ((-85 ? (min((max(var_12, 511)), ((min(var_1, 27))))) : 3968));
    #pragma endscop
}
