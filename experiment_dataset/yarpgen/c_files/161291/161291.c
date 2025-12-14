/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!(!var_13)));
    var_18 = (max(var_13, ((((((var_13 ? var_8 : var_3))) ? var_4 : var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_19 -= (arr_2 [i_0] [i_1] [i_0 - 3]);
                var_20 = (var_2 + 2012371270);
                var_21 = (((((arr_1 [i_0 - 2]) || ((max(var_8, var_6))))) ? (((((arr_1 [i_0 - 2]) || (arr_1 [i_0 - 2]))))) : ((((max((arr_3 [i_0 - 1] [i_0]), var_3))) ? (max(250, 560590554)) : ((((var_12 && (arr_3 [i_1] [i_0])))))))));
            }
        }
    }
    var_22 = (min(var_22, (((((((var_10 == var_0) << ((((max(var_6, var_11))) - 9045))))) ? var_6 : var_8)))));
    #pragma endscop
}
