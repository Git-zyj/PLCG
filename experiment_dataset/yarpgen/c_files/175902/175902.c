/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((((var_7 ^ var_9) | (max(var_5, (var_1 % var_1))))))));
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 *= (((((arr_2 [i_1]) ^ (arr_2 [i_1]))) / ((max((-400205081 == -400205081), (var_0 || -7972401142999324262))))));
                var_20 |= 41496;
                var_21 = arr_4 [10];
            }
        }
    }
    var_22 = (min(400205083, ((400205076 ? -1685301598 : 3674))));
    var_23 = (max((((((var_9 ? 29417 : var_14))) ? ((min(var_0, var_11))) : (var_4 / 29414))), var_14));
    #pragma endscop
}
