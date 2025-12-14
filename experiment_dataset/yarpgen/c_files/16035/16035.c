/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((((((var_5 % var_9) ? (((min(var_16, var_7)))) : var_9))) ? (!var_18) : ((~(!var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [1] = (min(5070527254918239545, ((min(2781851641, (13376216818791312071 == -79))))));
                arr_6 [i_0] [i_1] = (((((~(arr_4 [i_0 - 2])))) ? (((-127 - 1) / (arr_4 [1]))) : (((min((arr_2 [i_0 - 2]), (arr_2 [i_0 + 1])))))));
                arr_7 [i_0] = (((((arr_1 [i_0 - 1] [i_1]) >> ((((-(arr_1 [i_0] [i_0]))) - 4198145074)))) << ((((1 ? (~5070527254918239538) : 25)) - 13376216818791312059))));
                arr_8 [i_0] [2] = arr_4 [i_1];
            }
        }
    }
    var_20 = var_1;
    var_21 = var_13;
    #pragma endscop
}
