/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 = -113;
    var_14 = ((var_2 ? ((((var_11 ? var_10 : var_9)) + var_9)) : (((var_10 ? 22867 : (var_8 + 2874028187))))));
    var_15 = (((((-8149237565370644886 ? var_10 : ((var_8 ? -6193538793573842670 : 33588))))) ? var_1 : var_6));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = -6193538793573842670;
                    arr_6 [i_0] [i_1] [i_0] [i_0] = (((arr_0 [i_0 + 4]) - (((arr_4 [i_0] [7] [i_2]) ? (var_5 && var_5) : ((((arr_2 [i_0] [i_0] [i_0]) || (arr_3 [3] [8]))))))));
                }
            }
        }
    }
    #pragma endscop
}
