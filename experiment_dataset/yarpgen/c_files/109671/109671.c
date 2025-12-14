/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_2);
    var_14 *= ((max((var_12 || 58488), ((var_2 ? var_8 : -9223372036854775797)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((((var_8 != ((max((arr_6 [i_0]), var_0))))) ? (arr_6 [i_0]) : (max(var_5, var_2))))));
                arr_7 [i_1] [i_1] = (max(9195965107061919235, (arr_6 [i_1 - 3])));
                arr_8 [i_1] [i_1] [i_1] = -4260848090193706760;
            }
        }
    }
    #pragma endscop
}
