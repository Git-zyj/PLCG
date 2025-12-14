/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((127 ? ((min((arr_4 [i_0] [i_0] [i_1]), ((var_15 << (var_11 - 221)))))) : ((var_5 ? (((var_4 ? -1884819522 : 1884819539))) : 0)))))));
                var_20 = 1884819532;
            }
        }
    }
    var_21 = (min(-var_0, (min(((255 ? 16 : 1938841228)), ((4143638036497065236 ? 17459 : -909616323))))));
    var_22 = var_1;
    var_23 -= ((((var_6 ? (!-2002617760) : var_7)) < (((!(((var_3 ? -28 : var_6))))))));
    #pragma endscop
}
