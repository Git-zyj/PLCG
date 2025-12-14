/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((!var_6) <= (~46117)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [18] |= ((((max(-10998741710883368505, var_2))) ? ((max(1515063741, (((-(arr_2 [8]))))))) : 10998741710883368511));
        var_12 = (!-8762939589363756477);
        arr_4 [i_0] [i_0] = 120;
        var_13 = (max(var_13, 18446744073709551602));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_14 *= ((!(((~((10998741710883368512 ? (arr_5 [i_1] [i_1]) : 65535)))))));
        arr_9 [i_1] [i_1] = (~var_6);
        arr_10 [i_1] [i_1] = (((7448002362826183102 == 18446744073709551615) - 16445));
        arr_11 [i_1] = (min(7448002362826183111, (~7448002362826183110)));
        arr_12 [i_1] = (((~(~var_7))) << (7448002362826183121 - 7448002362826183117));
    }
    var_15 = (min(var_15, ((max((((7448002362826183121 % 7448002362826183095) | (var_4 | var_6))), 10460657856953001336)))));
    var_16 = ((var_9 ? (((-(var_0 * 255)))) : var_7));
    #pragma endscop
}
