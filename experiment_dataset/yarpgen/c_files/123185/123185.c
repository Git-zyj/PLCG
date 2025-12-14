/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = ((((((arr_1 [i_1]) ? (arr_2 [i_0]) : ((max((arr_3 [2] [2]), (arr_3 [i_0 + 1] [i_1]))))))) ? var_3 : ((((arr_5 [i_0]) < (-856425686 >= var_6))))));
                var_15 = ((var_3 ? ((max(((var_4 ? (arr_0 [i_0]) : 56)), var_10))) : ((~(((arr_5 [i_0]) ? 2928813557034063945 : (arr_2 [i_0])))))));
            }
        }
    }
    var_16 = (((var_13 & var_11) + var_13));
    #pragma endscop
}
