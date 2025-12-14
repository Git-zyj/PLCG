/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((max((((!(arr_2 [i_0])))), (((!-112) >> (-4 + 4))))))));
                var_19 = (((((((arr_5 [i_0] [i_0]) && var_4)) ? (arr_5 [i_1 + 1] [i_1 - 1]) : 127)) < ((((738656727 >= ((-16572 ? 112 : -1329874419))))))));
            }
        }
    }
    var_20 = ((-((min((min(var_10, var_2)), var_9)))));
    var_21 = (max(var_21, (((((((max(var_5, -112))) | (min(11704572541551983947, 79)))) * ((9007061815787520 / (~9584275560034579239))))))));
    var_22 = ((-1 ? var_2 : var_1));
    #pragma endscop
}
