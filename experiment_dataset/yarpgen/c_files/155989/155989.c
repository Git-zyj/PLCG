/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((((9223372036854775807 % -8525329418035959555) >= ((((((arr_2 [6] [i_1] [i_1]) << (((arr_4 [i_0 - 1] [i_0 - 1]) - 2210036235))))) - (min(var_1, 137438952448)))))))));
                arr_5 [i_1] = (min((1834501463920630140 < 137438952435), (((((min((arr_4 [i_0] [4]), -654013160643944861)) + 9223372036854775807)) << (var_11 & var_0)))));
            }
        }
    }
    #pragma endscop
}
