/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = (min(var_18, -45));
                arr_6 [i_1] = (((max((var_12 * 9435942548518197017), 255)) / (((((((arr_4 [i_1]) ? 44 : var_4))) ? (!var_16) : (!var_9))))));
                var_19 = ((max(var_0, var_0)));
                var_20 = ((!((max((min(var_11, var_9)), (max(var_10, (arr_0 [i_0]))))))));
            }
        }
    }
    var_21 = (max(31812, (max(var_13, -29696))));
    var_22 = var_10;
    var_23 = var_15;
    #pragma endscop
}
