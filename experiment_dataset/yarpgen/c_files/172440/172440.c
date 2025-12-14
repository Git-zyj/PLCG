/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(var_5, var_4)) == (((max(127, var_13)))))));
    var_19 = (((((var_6 ? ((max(var_10, var_7))) : ((min(111, var_2)))))) != (max(((var_7 ? var_4 : var_17)), var_4))));
    var_20 = (min(var_20, var_11));
    var_21 = 0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_22 -= 110;
                var_23 += (4294967295 - (((-((min(1, 1322)))))));
                var_24 = 0;
            }
        }
    }
    #pragma endscop
}
