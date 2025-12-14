/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (max((((!((min((arr_2 [i_0] [i_1] [i_1]), var_0)))))), (!6557855242071460872)));
                arr_4 [i_0] [i_1] [i_1] = (((var_8 * (!3402486911))));
                var_16 = (!var_7);
            }
        }
    }
    var_17 = ((max(((var_1 ? 0 : var_14)), (~var_9))));
    var_18 = ((~((var_7 ? (min(var_8, var_7)) : (max(3101947540, var_7))))));
    var_19 = (((-6557855242071460873 ? 6557855242071460863 : ((13224 ? 9223372036854775790 : var_8)))));
    var_20 = ((((var_0 << (((var_2 - var_9) - 1538829724))))) ? ((var_4 % ((var_9 ? var_6 : var_14)))) : (!var_13));
    #pragma endscop
}
