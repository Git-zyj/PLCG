/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_9 / var_7);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_15 *= (((((-12393 ? (arr_4 [i_0 + 2] [i_0 + 2]) : 12393))) / 15873258337923346350));
                arr_5 [i_0 + 3] [i_0] [i_1 - 3] = (((((-(!var_3)))) ? (min((max(15873258337923346350, var_11)), var_8)) : (((((arr_3 [i_0]) && ((var_1 || (arr_1 [i_0] [i_1])))))))));
                var_16 = arr_0 [i_1] [i_0 - 1];
            }
        }
    }
    var_17 += ((var_5 ? ((12392 * (var_4 * var_10))) : ((max(1, (~var_13))))));
    #pragma endscop
}
