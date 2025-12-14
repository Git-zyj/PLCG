/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] = (~var_15);
                var_17 -= (((((+((1658674960028729421 ? (arr_0 [i_0]) : var_3))))) ? (((1 ? 79 : -1726152475260587146))) : ((((!(var_8 / var_12)))))));
                arr_7 [i_0] [i_0] = (!var_10);
                var_18 = ((~(min(-1726152475260587159, 13124))));
                var_19 = (max(var_19, var_16));
            }
        }
    }

    for (int i_2 = 4; i_2 < 17;i_2 += 1)
    {
        var_20 = 1726152475260587146;
        var_21 = 255;
        arr_11 [i_2] = (((((var_16 ? var_2 : var_5))) ? (!var_8) : (((!(arr_9 [i_2 - 4] [i_2 - 4]))))));
    }
    var_22 *= var_11;
    #pragma endscop
}
