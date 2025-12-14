/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    var_21 = (min(var_13, (((((1 ? 5951 : -90))) ? ((3 ? 18446744073709551615 : var_8)) : (!var_8)))));
    var_22 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_23 = (((((118 ? (arr_0 [i_0 - 1]) : var_12))) ? ((var_6 | (arr_0 [i_0 + 1]))) : (!8388607)));
                arr_4 [i_0] [i_0] = ((((250 - 8404714425818423562) ? (var_5 / 9210197472951890902) : (((75 ? (arr_3 [i_0]) : 49))))) - -154);
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_24 = (min(var_24, (((((((var_12 ? 168 : 13258)) - (((arr_7 [12]) ? 102 : 0))))) ? (((!85) ? (((18446744073709551615 ? 51 : var_8))) : 18446744073709551615)) : (((((((!(arr_8 [i_2])))) == (arr_10 [6])))))))));
            var_25 = ((((min(((6981 ? 2616237549677764314 : 2030455904)), ((max(154, 75)))))) ? 255 : -1389524165));
        }
        arr_11 [i_2] = 3923231467;
    }
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        var_26 = -var_1;
        var_27 -= arr_6 [20];
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_28 = (max(var_28, ((((~154) | (75 | -10407))))));
        arr_18 [i_5] = (max(((((0 ? 2030455889 : 831145078938618778)) & (((((arr_8 [i_5]) == 65535)))))), (18446744073709551594 & 65535)));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 21;i_7 += 1)
            {
                {
                    var_29 = (max(8753137333325808132, 0));
                    var_30 -= (max(((max(181, 1))), (max(((var_14 ? 18446744073709551610 : -39)), (((18084801001782690139 ? var_1 : 255)))))));
                    var_31 += 0;
                }
            }
        }
        arr_23 [i_5] = (((((var_4 >> (((arr_9 [i_5]) - 139))))) ? (((arr_8 [i_5]) * (arr_6 [i_5]))) : (((((arr_6 [i_5]) || (arr_8 [i_5])))))));
    }
    #pragma endscop
}
