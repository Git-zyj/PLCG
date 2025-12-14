/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = ((((min(209, (var_2 * var_14)))) ? (max((arr_5 [i_1 + 1] [i_2 - 1] [i_2]), var_3)) : var_9));
                    var_16 = (min(var_16, ((((((var_3 ? 4449 : 246))) && ((((arr_1 [i_0]) | var_11))))))));
                    var_17 = (~12805610468502359893);
                    var_18 = (~-56);
                    arr_8 [i_0] = max((~-6), (((arr_6 [14] [i_1 + 2] [i_2] [i_2 - 1]) ? 788676051 : 63210)));
                }
            }
        }
    }
    var_19 += ((!((var_4 != (var_7 * 18446744073709551615)))));
    var_20 = (((~(~var_13))) ^ 7562);
    #pragma endscop
}
