/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = ((((max(0, var_1))) ? ((max(0, var_7))) : ((((1 ? 1 : -22466))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_13 *= (-101857574 / -22466);
                arr_5 [i_1] = (min(((max(0, 0))), (-1158914833 / 16383)));
                var_14 -= (var_6 - 41395);
            }
        }
    }
    var_15 = (max(var_15, (((((min(1, 1))))))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_16 = (max(var_16, ((min((((((0 ? 331 : -1))) ? (min(1158914832, -60780900)) : ((2 ? var_5 : 1)))), ((max(var_7, var_5))))))));
                arr_11 [i_3] = (((((0 ? 4096 : ((var_9 ? 19993 : 3126))))) ? (min((min(1158914832, var_10)), ((var_2 ? 45543 : 203429550)))) : -1922176771));
                var_17 += max((min(0, -1422720005)), (~var_3));
            }
        }
    }
    #pragma endscop
}
