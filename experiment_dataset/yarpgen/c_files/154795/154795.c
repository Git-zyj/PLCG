/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (18 * var_8);
    var_16 -= (min((min((min(var_12, var_12)), (((var_7 ? 2239 : var_11))))), (((((min(197, 1))) ? var_9 : var_6)))));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            arr_7 [i_0 - 1] = (var_12 % var_12);

            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                var_17 = (min(var_17, ((((var_10 || var_7) < var_13)))));
                var_18 = (((1152921504598458368 <= 414592273) * (-3617 < 197)));
                arr_10 [i_2 + 1] [i_1] [1] = var_1;
            }
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_19 = (min(var_19, (((var_10 <= ((150 ? 197 : 65535)))))));
            var_20 = (var_2 ? var_0 : var_3);
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            var_21 ^= ((var_2 ? 34841 : var_11));
            arr_16 [i_0] [i_4] [i_4] = (var_10 % 32767);
        }
        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            arr_19 [i_0] [9] [10] = (197 <= var_3);
            var_22 |= (((((min(var_10, var_7)))) ? ((-((min(-3615, var_1))))) : (var_4 > 152)));
            var_23 = var_1;
            var_24 = (((min(var_12, var_4)) < 9027878387799116278));
        }
        arr_20 [i_0] = (((((var_0 ? var_0 : var_9))) ? var_2 : ((29095 ? var_5 : var_12))));
        var_25 = var_2;
        arr_21 [1] [i_0] = (((((min(var_9, var_9)))) ? (min((min(4467281980088368889, var_8)), 1)) : ((min(241, 2113794099)))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_26 = (max(var_26, var_8));
        arr_24 [i_6] = -57;
    }
    var_27 = ((((((min(1, var_13))) / -8576350579052220571))) ? (-27025 + var_0) : (((var_8 != ((var_2 ? var_2 : 1))))));
    var_28 = (min((var_3 / 26), ((min(1, 130)))));
    #pragma endscop
}
