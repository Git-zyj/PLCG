/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_1 + ((var_2 ? (-2147483647 - 1) : var_7))))) ? ((((((min(var_6, var_2))) > -var_1)))) : (min((var_1 && var_7), var_2))));
    var_11 = (min(var_6, (((var_7 - var_2) ^ var_6))));
    var_12 = (!23195);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [1] [1] [5] = (arr_0 [11]);
                var_13 *= (min(179, 41227));
            }
        }
    }
    var_14 = (var_5 ^ ((-(!76))));
    #pragma endscop
}
