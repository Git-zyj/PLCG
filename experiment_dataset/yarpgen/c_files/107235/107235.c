/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((-(((1 & var_9) % (max(1, 6365864284553337025))))));
    var_21 = (max(var_21, ((((min((max(var_7, var_13)), var_1))) ? (!-74) : ((var_2 ? var_13 : 6365864284553337053))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_22 = (min(var_22, ((max(var_14, ((1424499492 ? 402430514 : 1457532)))))));
                var_23 *= (min((((var_3 ? var_3 : var_4))), (((4293509763 % (var_18 || 4294967273))))));
                var_24 = (max(var_24, ((((((max(1, var_11)))) <= (var_0 | 788047573))))));
                var_25 = (max(var_25, ((((3924660184 % 6365864284553337053) % (((17177772032 ? 12620 : 40))))))));
            }
        }
    }
    var_26 += (((((((var_13 ? 13918 : 6365864284553337025)) <= var_10))) ^ var_11));
    #pragma endscop
}
