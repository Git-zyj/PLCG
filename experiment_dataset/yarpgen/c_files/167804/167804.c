/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-1303749415 ? (min(var_11, var_13)) : ((((min(-1303749398, var_7))) ? (~var_9) : (min(var_5, -1303749415))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_15 = (((((min((1303749420 >= -1303749418), var_9)))) < (min((arr_0 [i_1 - 3]), (1303749420 - 2502837476)))));
                arr_4 [i_1] = (((((32767 ? 1 : 1) / (min(-20372, -1303749420))))));
                var_16 = (((((var_3 ? 306243930774760647 : -32757))) ? ((((((1 ? var_1 : var_4)) > (arr_1 [i_1] [7]))))) : (max((var_1 > var_4), var_0))));
                var_17 &= (min((((33554424 != ((var_11 ? var_12 : (arr_3 [i_1] [3] [3])))))), (~1)));
                var_18 *= ((~(((arr_0 [i_0 - 2]) & var_12))));
            }
        }
    }
    var_19 = (min(3287047574, var_7));
    #pragma endscop
}
