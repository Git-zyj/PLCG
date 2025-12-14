/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1 - 4] = max((9445 & var_5), (max(var_15, (arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]))));
                arr_8 [i_0] [i_0] [i_1 - 4] = (((((var_19 ? ((56090 ? 9472 : (arr_2 [i_0] [i_0]))) : (max(var_12, var_2))))) ? ((max((arr_2 [i_0] [7]), var_14))) : ((min(((min(-20022, var_14))), ((var_2 ? var_4 : var_5)))))));
            }
        }
    }
    var_20 = (((!9472) ? ((((min(var_9, -114))) ? var_4 : (min(var_10, var_15)))) : (~var_6)));
    var_21 = (min(var_15, 56071));
    var_22 = (-var_18 != 154);
    #pragma endscop
}
