/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_4 ? ((1450285618609206560 ? 1450285618609206553 : 1)) : var_12));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_15 ^= ((!((min((min((arr_3 [4] [i_1]), (arr_1 [i_0]))), ((max(var_5, 0))))))));
            arr_7 [i_0] [i_1] [i_1] = (1450285618609206532 < 9223371487098961920);
        }

        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [11] = var_12;
            var_16 = (((((max(16996458455100345084, var_8))) ? (!var_4) : 371992900)));
            var_17 -= var_1;
            var_18 = (max(var_18, (arr_3 [10] [10])));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
        {
            var_19 = 2147483647;

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_20 = (((((var_6 - (((arr_14 [i_4] [i_3]) / (arr_3 [1] [i_3])))))) ? (((arr_15 [0]) ? 1450285618609206524 : (arr_6 [i_4]))) : ((max((!18), 72)))));
                var_21 = -86;
                var_22 = (((arr_16 [i_0] [i_0 + 3] [i_0] [6]) * (((((min(32767, 65535))) | ((min(var_9, var_8))))))));
                var_23 ^= (min((max(7, 523776)), ((min(((min(-70, 1))), 41)))));
            }
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            arr_20 [2] [i_5] [i_0] = (((arr_18 [i_0 - 1] [i_5]) ? 1534084752433881671 : (((var_3 ? 30 : var_6)))));
            var_24 = (min(var_24, (arr_1 [12])));
        }
        var_25 = var_3;
        arr_21 [i_0 + 3] = 92;
        var_26 ^= 17;
    }
    for (int i_6 = 1; i_6 < 8;i_6 += 1)
    {
        var_27 ^= (min((((~((min(var_9, var_13)))))), ((((min(var_13, var_8))) ? (arr_23 [2]) : var_3))));
        var_28 = (~65528);
        var_29 = 16996458455100345092;
        var_30 -= (!253);
    }
    var_31 = 162;
    #pragma endscop
}
