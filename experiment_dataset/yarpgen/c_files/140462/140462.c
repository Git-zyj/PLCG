/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((max(var_9, var_2)) < ((max(var_7, (!-31129))))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_12 ^= (!(((1 ? var_9 : var_8))));
        arr_4 [i_0] = (!1);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_13 = (~var_2);
        arr_7 [i_1] = (min(((((!(arr_6 [i_1]))) ? ((922556336 / (arr_2 [i_1]))) : ((max(var_7, 25365))))), ((~(~var_0)))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    {
                        var_14 = (min(var_14, (((!((min(((15 ? 1073741823 : 1)), ((max(var_10, var_0)))))))))));
                        var_15 += ((((120 ? (arr_9 [i_1]) : var_6))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_16 = (max(((((max(1073741849, -13))) ? (min(-922556333, (arr_19 [i_5] [i_5]))) : (min(-838886552, 1)))), (var_10 != var_9)));
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 23;i_8 += 1)
                {
                    {
                        var_17 = (min(var_4, (~-15)));
                        var_18 = ((((~((var_2 ? 1 : var_0)))) < (((!((min(var_4, 1))))))));
                        var_19 = ((((arr_26 [i_6 - 1] [i_8 + 2] [i_8] [i_7] [i_8 + 2] [i_8 - 2]) || (((15 ? 18446744073709551604 : 2928058325))))));
                    }
                }
            }
        }
    }
    var_20 *= (!17);
    var_21 = (max(var_21, (((var_0 ? ((((!(((1 ? 1 : var_9))))))) : (((((9223372036854775807 ? var_1 : 1073741801))) ? ((min(-2147483627, 12))) : ((192 ? -1611388579 : 14659231617014431008)))))))));
    /* LoopNest 2 */
    for (int i_9 = 4; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            {
                var_22 = (max(var_22, ((((((((10 || (arr_24 [4]))) ? ((var_4 ? var_8 : -41)) : (~46)))) || ((((((var_2 / (arr_29 [1] [1])))) ? (((arr_28 [i_9]) ? var_4 : 196)) : -31131))))))));
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 19;i_13 += 1)
                        {
                            {
                                var_23 = 192;
                                var_24 = (min(var_24, (((~(~-39))))));
                                arr_41 [i_9] [i_10] = min(((~(max((arr_23 [i_12]), (arr_0 [i_9 - 4]))))), ((((((4748 ? (arr_24 [i_10]) : 31125))) + ((-32741 ? 11 : -1907721965))))));
                                var_25 = (~(max((~-9223372036854775803), (arr_28 [i_9 - 4]))));
                            }
                        }
                    }
                }
                var_26 = (max(var_26, (((!(((4853827191361081457 ? (1 % -31103) : ((~(arr_39 [i_10] [i_10] [i_10] [16] [i_9] [i_9] [i_9])))))))))));
            }
        }
    }
    #pragma endscop
}
