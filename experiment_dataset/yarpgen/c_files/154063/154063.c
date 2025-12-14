/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] = min(((~(((arr_1 [1]) ? var_2 : var_3)))), (((((1 ? var_6 : 13361))) ? ((var_13 ? 2639354862136783770 : (arr_1 [i_1]))) : (!var_8))));
                var_14 = (min(var_14, ((3165 ? (max((max(-1, 1872909217841647318)), (min(-1682386818154602424, var_8)))) : 0))));
            }
        }
    }
    var_15 = (min(var_15, var_12));
    var_16 = var_11;
    var_17 = (min(var_17, (((1175631731350059077 <= (((max(var_6, 7005784423095270663)) % (var_10 ^ var_13))))))));
    #pragma endscop
}
