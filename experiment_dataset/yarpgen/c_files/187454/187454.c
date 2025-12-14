/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (((max(var_6, ((var_0 ? 149 : 155)))) <= ((~(~var_8)))));
    var_12 = (((((~168) + 2147483647)) << (85 - 85)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = ((((((arr_1 [i_0]) ? (((arr_0 [i_0] [i_0]) ? 10121 : 165)) : (min(var_3, var_0))))) ? var_10 : ((var_1 / (arr_1 [i_0])))));
        arr_4 [i_0] [i_0] = (max(111, (((arr_2 [i_0]) ? -1290056967 : (arr_2 [i_0])))));
    }
    var_13 += ((((max((88 != 4279587022451906045), -105))) ? (((((185 ? var_2 : var_8))) - ((9 ? var_8 : 4279587022451906045)))) : (((-(!var_9))))));

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] = ((((((max((arr_2 [i_1]), 1032010017)) & (((arr_6 [i_1]) ? 13223 : var_10))))) ? (((((((arr_5 [i_1] [i_1]) / var_5))) ? (arr_2 [i_1]) : -10107))) : ((((max(-123, var_2))) ? (((-585732873 ? var_1 : 11))) : (min(-4279587022451906050, var_1))))));
        arr_8 [i_1] [i_1] = (((((-24991 ? (arr_1 [i_1]) : (arr_1 [i_1])))) ? (((max(var_1, 8569)))) : 4294967295));
        var_14 -= (((4070108714127096121 ^ 4305420878546475180) ^ -2132938234));
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            var_15 = (min(var_15, (((~((-((max(160, var_7))))))))));
            var_16 = (arr_12 [i_3 + 3] [i_2] [i_2]);
        }
        var_17 = (!87);
        var_18 = (((((((max(13967, 1))) ? var_4 : (arr_1 [i_2 - 1])))) + ((((-98 ? 9223372036854775797 : var_9)) << (((((arr_10 [i_2]) + 84)) - 22))))));
    }
    #pragma endscop
}
