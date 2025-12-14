/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_1] = var_8;
                    var_18 = (min(var_16, ((((-1242162202 ? -3456688259611346715 : (arr_0 [i_2] [i_0]))) / var_7))));
                    arr_8 [i_0] [i_1] = (max(((max(var_8, (((var_2 != (arr_2 [i_1]))))))), (424590786368682556 ^ -2784231536396676253)));
                    var_19 = (max(((((arr_5 [i_0]) == (arr_5 [i_0 + 3])))), (max((arr_5 [i_1 + 1]), var_4))));
                }
            }
        }
    }
    var_20 -= var_1;
    #pragma endscop
}
