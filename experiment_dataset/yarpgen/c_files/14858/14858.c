/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_7 ? -var_10 : ((-(-32767 - 1)))))) + ((2355487546 ? ((var_5 ? var_6 : var_5)) : var_8))));
    var_20 = var_14;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [3] = (((max(106, 2355487546))) >= ((((var_14 == (arr_1 [i_0 - 2]))))));
        arr_3 [i_0] [i_0 + 1] = ((18423560080788896386 | (var_13 && 2374890121156507868)));
        arr_4 [i_0 - 1] = (min(-70, 1939479750));
        var_21 = (max(var_21, var_2));
        var_22 = (min(var_22, ((((((((min(21632, 4227))) >= (((arr_1 [i_0]) ? var_0 : 28057))))) << (((max((var_8 ^ var_14), -85)) + 86)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_23 = (min(var_23, (((~(1939479739 >= -2048))))));
        arr_8 [i_1] = ((var_9 ? (arr_5 [i_1]) : -28062));
        arr_9 [i_1] = (!23183992920655230);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_24 *= ((7399780407723642331 ? -6007 : 1));
        var_25 = (((arr_6 [1] [5]) | var_6));
    }
    var_26 = var_2;
    #pragma endscop
}
