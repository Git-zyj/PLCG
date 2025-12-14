/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((min((var_9 >= 7336220724676328282), ((var_12 ? -7336220724676328261 : 64837))))) ? ((((arr_2 [i_1 - 2] [i_1]) << ((((max(var_6, (arr_1 [i_0] [i_0])))) - 26026))))) : (max((var_6 ^ var_2), var_9))));
                var_13 = (max(((var_2 ? ((64848 & (arr_3 [i_0] [i_1] [i_0]))) : ((max(699, (arr_3 [i_0] [i_0] [i_0])))))), (arr_2 [i_0] [i_0])));
                arr_5 [i_0] [i_0] [i_0] = (((((((arr_1 [15] [i_0]) && 600403915)) ? (!7336220724676328305) : var_6)) <= ((7336220724676328303 ? ((min((arr_1 [i_1] [i_1]), var_6))) : (!var_9)))));
            }
        }
    }
    var_14 = var_6;
    var_15 = (6203231840699525566 || 1);
    #pragma endscop
}
