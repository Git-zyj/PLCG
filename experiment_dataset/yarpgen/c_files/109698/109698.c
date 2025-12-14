/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (arr_1 [i_0]);
        arr_2 [i_0] = ((-(6995016442174385169 || 20)));
        var_21 = (~11451727631535166447);
        var_22 -= -10135717839497062552;
        var_23 = (min((arr_1 [15]), (!var_19)));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            arr_7 [i_1] [i_1] |= (((((~(arr_4 [i_2 - 2] [i_2 - 2])))) || ((max((arr_6 [0] [i_1] [i_1]), -3725120189)))));
            arr_8 [1] = (min(-67, (arr_4 [i_1] [i_2])));
        }
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            var_24 = (max(var_24, (min(246, (-8311026234212489062 % 2534895101)))));
            var_25 = ((~((117 ? 6995016442174385169 : (arr_6 [i_3 - 1] [i_3 - 1] [i_3 - 1])))));
        }
        arr_11 [i_1] [i_1] = (((min((max((arr_6 [i_1] [i_1] [i_1]), (arr_1 [i_1]))), ((min(193, 139))))) / 111));
        var_26 = (186 % 105);
        var_27 = ((3973917950914265772 ? (min((~var_7), (arr_6 [i_1] [i_1] [i_1]))) : ((~(arr_4 [i_1] [i_1])))));
    }
    var_28 *= ((-(var_5 % 345780151)));
    var_29 = 11451727631535166447;
    #pragma endscop
}
