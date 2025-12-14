/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0 + 1] [i_1] [i_0 + 1] [i_2] = ((var_3 > (((4294967295 ? (arr_0 [i_0 + 1]) : 12)))));
                    var_11 = (max(var_11, ((((var_10 ? (~4294967284) : (((~(arr_5 [i_0] [i_1] [i_2]))))))))));
                    var_12 = (((((((80 ? 1 : 60))) ? (4294967292 / var_6) : (var_3 + 0))) - 4294967291));
                }
            }
        }
    }
    var_13 = 182;
    var_14 = ((((min(var_4, ((176 ? 4294967267 : var_7))))) ? (min(((max(-1943647787, 20025))), ((var_7 ? 8 : var_7)))) : (((var_4 ? ((0 ? 45041 : 237)) : var_4)))));
    var_15 = ((((min(var_0, 4294967295))) ? 4294967295 : ((var_0 ? 250 : (var_5 | var_3)))));
    var_16 = var_4;
    #pragma endscop
}
