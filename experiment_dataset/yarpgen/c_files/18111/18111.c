/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((((arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? 221 : (((!((max((arr_0 [i_1] [i_0]), var_4)))))))))));
                arr_7 [i_0] [i_1] [i_1] = (max((((arr_6 [i_0 + 1] [i_0 + 1]) ? (arr_6 [i_0 + 1] [i_0 + 1]) : (arr_6 [i_0 + 1] [i_0 - 1]))), ((~(arr_6 [i_0 - 1] [i_0 + 1])))));
                var_21 = ((((((max(var_15, -3))) && (!var_0))) ? (((max(11, var_12)))) : ((~((max(-108, 61)))))));
            }
        }
    }
    #pragma endscop
}
