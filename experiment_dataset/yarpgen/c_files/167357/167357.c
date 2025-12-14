/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_4 ? var_9 : (var_8 - var_8)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((((max((-7750 > 7), (min(-7741, 107))))) ? (min(var_9, (min((arr_0 [i_0] [i_0]), var_4)))) : (((var_7 > 2857772056) ? var_3 : (min(var_4, var_8))))));
        var_11 = var_2;
        var_12 = (!115);
        var_13 *= (((((2159828938 ? (arr_1 [i_0] [i_0]) : 7750))) ? (arr_1 [i_0] [i_0]) : ((var_5 ? var_8 : (arr_1 [i_0] [i_0])))));
        arr_4 [i_0] = ((-12000 ? var_0 : (((var_4 ? (arr_1 [i_0] [18]) : 7355178147371171651)))));
    }
    var_14 = (((107 >> (var_4 - 4925905557231481231))));
    var_15 = (min(var_3, var_9));
    #pragma endscop
}
