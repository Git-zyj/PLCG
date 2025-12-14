/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(max((-10042 * -10044), (!var_8)))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 2] |= ((((var_14 ? (min(-30480, (arr_0 [9]))) : (((arr_0 [3]) % var_15))))) ? (max((arr_0 [i_0]), ((min((arr_1 [i_0]), (arr_1 [i_0 + 2])))))) : (((~var_3) | (arr_0 [i_0 + 3]))));
        var_18 = ((~((min(-1, 22711)))));
        var_19 = (max(var_19, (arr_0 [i_0 + 1])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_20 = (arr_1 [i_1]);
        var_21 &= var_14;
        var_22 = ((!((((arr_1 [1]) ? (arr_1 [i_1]) : var_15)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 10;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_3] = ((var_8 % (((arr_10 [i_3]) ? (arr_10 [i_3 + 2]) : var_6))));
                    var_23 += (((arr_9 [i_1] [5]) << ((((var_11 ? var_5 : var_9)) - 3550))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            arr_18 [i_5] [i_5] = (arr_15 [i_5]);
            var_24 = ((var_10 ? (arr_13 [i_5 + 3]) : (arr_13 [i_5 - 1])));
            var_25 = (max(var_25, (arr_16 [i_4])));
            var_26 = (max(var_26, ((-10068 ? (arr_17 [i_4] [i_4] [14]) : var_14))));
            arr_19 [i_5] [14] [i_5] = (!2207336991);
        }
        var_27 = ((!((((var_0 + 2147483647) << (((var_10 + 18) - 3)))))));
        var_28 = (max(var_28, ((((arr_17 [i_4] [i_4] [i_4]) * (arr_16 [i_4]))))));
        arr_20 [5] = (~var_15);
    }
    #pragma endscop
}
