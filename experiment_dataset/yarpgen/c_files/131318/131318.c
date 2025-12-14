/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = ((308316581 ? (((((-15331 ? var_3 : var_14)) > 42204))) : var_8));
                var_19 = ((-((((31755 ? 14336 : 1278978343)) & ((max(5419, (arr_1 [i_0] [i_1 - 1]))))))));
            }
        }
    }
    var_20 = 11418969736753484091;
    var_21 = (min(var_21, var_13));
    #pragma endscop
}
