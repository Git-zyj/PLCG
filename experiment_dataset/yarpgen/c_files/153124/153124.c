/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = (min(var_12, 18446744073709551594));
                arr_4 [i_0] [i_0] = (max((min((max(-1149038383, var_8)), 230)), ((((-21961 > 64) < (max(3184724715845273636, (-9223372036854775807 - 1))))))));
                arr_5 [i_0] [23] = (((min(13773569414814250167, (((1 ? 12 : (arr_1 [i_0] [i_0])))))) + (((-var_17 - ((max(var_15, (arr_1 [2] [i_0])))))))));
            }
        }
    }
    var_19 = var_4;
    var_20 = (((min((max(var_12, var_12)), 1))) || 127);
    #pragma endscop
}
