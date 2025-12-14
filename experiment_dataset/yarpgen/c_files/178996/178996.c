/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    var_17 = ((((min(-0, (max(0, var_13))))) ? ((max(var_5, ((min(0, var_15)))))) : (max(65535, (((3537986697 ? 65535 : 65535)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0] = 127;
                var_18 = -57;
            }
        }
    }
    var_19 -= max(((max((max(var_7, 7)), var_13))), ((-((min(var_0, 65529))))));
    #pragma endscop
}
