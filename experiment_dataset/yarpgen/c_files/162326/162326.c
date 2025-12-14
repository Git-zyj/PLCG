/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-(((((29 ? 1315719529601045986 : -1))) ? -1 : ((max(26837, 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = var_8;
                arr_7 [i_0] [i_0] [i_1 - 1] = ((!((max(0, (!95799927))))));
            }
        }
    }
    var_20 = ((((max(-26837, 30989))) ? 25354 : 4294967295));
    var_21 = (((((~((-26838 ? var_14 : var_14))))) ? var_14 : var_4));
    #pragma endscop
}
