/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_0, ((((min(var_4, 0))) ? ((max(var_3, var_8))) : var_7))));
    var_11 = (max(var_11, (((var_6 ? var_8 : (~-1465834668))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((min((((-((-5 ? 3336389326 : var_1))))), (max(15719426988339334473, 18446744073709551609)))))));
                var_13 = (min(var_13, (((!(((var_3 ? 15 : var_4))))))));
                var_14 = ((-((-((-(arr_3 [i_1])))))));
            }
        }
    }
    var_15 = var_4;
    #pragma endscop
}
