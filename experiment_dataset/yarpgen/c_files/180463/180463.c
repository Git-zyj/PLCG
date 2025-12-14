/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((20187 ? ((min(var_4, (((1 ? var_0 : var_0)))))) : (min(8670806320687739017, (((127 ? 241 : 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0 + 2] [i_1] = var_7;

                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    arr_8 [i_2] = ((!(((((min(168, 1))) ? ((min(32753, 1))) : (~66))))));
                    arr_9 [i_2] [i_2] [i_0 + 2] [i_2] = min((((!((min(23895, -70)))))), ((-(max((arr_4 [i_0] [i_1]), var_2)))));
                }
                arr_10 [i_0] [i_0] = min(41743, ((((max(-2469849448570931847, 47579))) ? -var_2 : (min((arr_4 [i_1] [i_0]), var_7)))));
                arr_11 [i_1] [i_0] [i_0] = (max(41738, ((-32767 ? (arr_7 [i_1]) : 15145294084219786987))));
                arr_12 [i_0] [i_0] = ((-(((arr_2 [i_0 + 1]) / 1230896138))));
            }
        }
    }
    #pragma endscop
}
