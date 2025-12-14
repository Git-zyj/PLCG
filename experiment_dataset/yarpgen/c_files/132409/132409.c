/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((524288 ? 524277 : 524259)))));
                arr_6 [i_0] [3] = ((-524295 != (arr_2 [i_1 - 3])));
            }
        }
    }
    var_20 = var_13;
    var_21 = ((524276 ? ((524276 ? -524295 : ((524291 ? 524274 : 524276)))) : ((-(524275 > -524275)))));
    #pragma endscop
}
