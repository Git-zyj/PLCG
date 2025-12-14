/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((min((((((max(var_11, var_10))) ? 1 : 206))), (max((max(var_0, var_12)), (((var_4 ? var_9 : var_11))))))))));
    var_20 *= (((~1920967124) | ((var_6 ? -var_6 : (!var_2)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 = (max(var_21, var_14));
        arr_4 [i_0] = var_1;
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            {
                var_22 = (max(var_22, (((3718560104 ? ((((max(29370, 17974986951241327463))) ? var_15 : (min(var_15, 2199023255551)))) : (((((var_9 ? 14236876054700515865 : var_5))))))))));
                arr_10 [i_1] = (min(-1920967125, ((-(var_6 || 9505)))));
            }
        }
    }
    var_23 = 5012465036125527016;
    #pragma endscop
}
