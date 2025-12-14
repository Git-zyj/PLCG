/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((-1 & (0 | 1)))) ? 8191 : -var_3);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_16 ^= 1806529704;
                var_17 = (((((((var_11 ? -3165158807354840802 : 14)) >= (-53 >= 158)))) | (arr_3 [i_0])));
                arr_6 [i_1] = ((-(arr_2 [i_1] [i_1 + 2])));
                var_18 = (var_11 + 74939587);
            }
        }
    }
    var_19 = ((((min((~160), -8175))) & ((0 ? (var_11 ^ -2726295129718524638) : var_13))));
    var_20 = (max(var_20, ((max((((97 ? 0 : 3644981198))), (max((~var_9), var_12)))))));
    var_21 = var_0;
    #pragma endscop
}
