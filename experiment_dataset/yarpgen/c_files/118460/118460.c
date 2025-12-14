/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (((((~11904801890287373982) ? 2147483639 : (-127 - 1)))) + var_4);
                var_17 = var_5;
                arr_7 [i_0] = ((+((551503435285444899 ? (arr_4 [i_0] [i_0] [i_0]) : (arr_2 [i_0])))));
                var_18 = (arr_2 [i_0]);
                var_19 = ((244 ? 551503435285444898 : 6541942183422177633));
            }
        }
    }
    var_20 = var_12;
    var_21 += var_12;
    var_22 = ((var_15 & ((var_4 ? var_6 : 1544933588))));
    var_23 = (min(var_23, ((((((var_5 ? var_10 : var_0))) ? ((var_13 ? ((var_7 ? var_5 : var_10)) : ((min(var_13, var_10))))) : (!11904801890287373964))))));
    #pragma endscop
}
