/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 ^= (max((~5798), ((-((max((arr_1 [i_0]), var_16)))))));
                var_18 = ((max(-17684, (~19))));
                var_19 = (max(((((arr_3 [i_0 - 1]) ? (arr_3 [i_0 + 1]) : 41))), ((var_15 & (max(2892482657863749747, var_16))))));
            }
        }
    }
    var_20 -= (~197);
    var_21 = (min((max(((-6136527135286628810 ? 3804 : var_3)), (var_4 & var_3))), var_3));
    #pragma endscop
}
