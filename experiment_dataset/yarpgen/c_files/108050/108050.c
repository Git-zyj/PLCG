/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((max((max(var_13, (min(var_2, var_3)))), ((min(30, (!var_1)))))))));
    var_16 = (((+-3) ? var_3 : (((103 ? var_12 : 0)))));
    var_17 = ((((-((8128 ? 90 : 3463300094))))) ? 8951 : (((((221 ? 1 : 576460752303423488))) ? var_11 : ((65533 ? var_14 : 5471458373733807248)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [1] [i_1] = (min(7, -7));
                var_18 *= (arr_4 [i_0] [i_0] [i_0]);
                arr_7 [i_0] [19] [19] = ((!(arr_4 [i_0] [i_0] [i_1])));
            }
        }
    }
    var_19 -= ((~((5857204733267971673 ? 30761 : (min(-5471458373733807249, -1179420079))))));
    #pragma endscop
}
