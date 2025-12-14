/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_19 = ((((((((9223372036854775807 << (((((arr_4 [11]) + 29202)) - 37))))) / 4221011771917335780))) ? -var_17 : (((((-1 == (arr_1 [10] [i_0]))) && (arr_4 [i_1 - 1]))))));
                var_20 = (((((max((arr_4 [i_1 + 4]), (arr_1 [i_1 + 3] [i_1 + 4]))))) * ((((var_5 + 2147483647) >> (var_18 + 93))))));
            }
        }
    }
    var_21 = (min(var_21, -5342867419830334287));
    var_22 = (((((((!5342867419830334280) <= var_7)))) | ((((5342867419830334285 ? var_15 : var_15)) >> ((((32757 ? var_13 : -5342867419830334287)) + 5387913244883465784))))));
    #pragma endscop
}
