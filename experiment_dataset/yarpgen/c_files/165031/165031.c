/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (((((~(var_0 * -14)))) ? (max((var_12 + -60), (!var_1))) : 16384));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (var_6 ? (~16368) : ((var_3 - (var_1 + var_8))));
                arr_5 [i_0 - 4] [i_1] [i_1] = ((var_17 || (~var_9)));
                arr_6 [i_0 - 2] [i_1] = ((((min((!32), (min(var_11, var_14))))) || (arr_2 [i_1])));
            }
        }
    }
    var_19 *= 658614402;
    #pragma endscop
}
