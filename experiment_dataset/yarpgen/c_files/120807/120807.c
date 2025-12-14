/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (max((399497279 * -var_4), var_11));
                var_21 -= (((min(-399497279, ((max(var_8, var_10)))))) ? (((((211 & (arr_3 [i_1])))) ? ((4121439760 ? 20896 : -7964868130572644381)) : (((max((arr_3 [i_0]), (arr_3 [i_1]))))))) : (~83));
                arr_6 [i_0] [i_0] [i_0] = ((-(arr_3 [i_0 + 1])));
                var_22 = (max(var_22, (((~(((arr_4 [12]) ? (max(var_1, (arr_4 [8]))) : (arr_5 [i_0 - 2] [i_0 - 2]))))))));
                var_23 += ((4730 ? 661808170 : 0));
            }
        }
    }
    var_24 = (max(var_24, var_10));
    #pragma endscop
}
