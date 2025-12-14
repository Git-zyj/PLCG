/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (var_3 == var_8);
                var_13 = (min((arr_3 [i_0] [i_1]), (-4912 != 193)));
                var_14 = ((var_6 ? -4930 : ((((min(var_8, var_1))) ? ((-4912 ? var_11 : var_9)) : (arr_4 [i_0])))));
                arr_5 [i_0] [i_0] [i_1] = var_10;
            }
        }
    }
    var_15 = (min(((((((-4912 + 2147483647) << (((-4912 + 4929) - 17))))) * var_1)), var_8));
    var_16 = var_6;
    #pragma endscop
}
