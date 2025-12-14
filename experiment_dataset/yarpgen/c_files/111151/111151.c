/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0 - 1] = (((arr_1 [i_0] [i_0 - 1]) != (~-25640)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_0] = ((((max((max((arr_0 [i_2]), 1373726381)), ((min(1, var_15)))))) && var_9));
                    var_18 = ((!((max((var_1 != var_4), (~212197693))))));
                    arr_9 [i_0 - 1] [i_1 + 1] [i_2 + 1] = ((!(((var_0 ? 699000784 : (arr_1 [i_0] [i_0 - 1]))))));
                }
            }
        }
    }
    var_19 -= var_7;
    var_20 &= (var_13 > var_7);
    var_21 = var_7;
    #pragma endscop
}
