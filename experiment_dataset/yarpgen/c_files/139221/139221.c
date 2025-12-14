/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = ((40566 ? (-127 - 1) : 16818));
        arr_3 [i_0] = (((((var_2 ? 48743 : var_10))) ? ((54661 ? 46748 : 18787)) : ((25 ? -69 : -28))));

        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_21 = (min(var_21, var_19));
                            var_22 ^= ((65535 ? (arr_6 [i_1 + 1] [i_1 - 1] [i_3]) : (arr_14 [i_0] [i_1 + 2] [i_1] [i_1 - 3] [i_2] [i_4] [i_4])));
                            arr_17 [i_0] [12] [i_2] [i_0] [i_0] [i_2] = (((arr_6 [i_0] [i_0] [i_0]) == ((24091 ? var_5 : var_15))));
                        }
                    }
                }
            }
            var_23 = (((arr_7 [i_1] [i_1] [i_0]) ? 31554 : ((46761 ? 14 : 54396))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    {
                        arr_23 [i_6] [i_0] [i_0] = (((arr_6 [i_1 - 1] [i_1 + 2] [i_0]) ^ (arr_7 [i_1] [i_1 + 2] [i_0])));
                        var_24 = (max(var_24, (((((18768 ? 2694 : 13667)) > 7161)))));

                        for (int i_7 = 1; i_7 < 20;i_7 += 1)
                        {
                            var_25 += (((((10270 ? 32768 : -79))) ? (!16307) : 913));
                            var_26 = ((!(-127 - 1)));
                            arr_26 [i_0] = (((arr_19 [i_1 - 4] [i_6 + 4] [i_7 + 1]) >= (arr_19 [i_1 - 4] [i_6 + 4] [i_7 + 1])));
                        }
                        for (int i_8 = 4; i_8 < 20;i_8 += 1) /* same iter space */
                        {
                            arr_31 [i_0] [i_1] [i_5] [i_6] [i_8 - 1] [i_5] [14] = ((var_9 ? ((-(arr_7 [i_1 - 3] [i_5] [i_0]))) : ((var_10 ? 9 : (arr_30 [i_0] [i_1] [i_5] [15] [i_8 - 2])))));
                            var_27 = (((((118 ? 11247 : 109))) ? (arr_27 [4] [i_1 - 3] [i_1] [i_1] [i_1 - 3]) : (((arr_25 [i_8] [i_1 - 3] [i_0]) ? (arr_8 [i_0]) : 47077))));
                            var_28 = (max(var_28, (((125 ? 3997 : 26341)))));
                            var_29 = (max(var_29, (arr_10 [i_6 + 1] [i_1])));
                            arr_32 [1] [i_0] [i_5] [i_5] = (-1 / 43552);
                        }
                        for (int i_9 = 4; i_9 < 20;i_9 += 1) /* same iter space */
                        {
                            var_30 = (!32768);
                            arr_35 [i_9 - 3] [i_6 + 1] [i_0] [i_5] [i_0] [i_1 + 2] [i_0] = 65535;
                        }
                        var_31 = 6186;
                    }
                }
            }
        }
        var_32 = (min(var_32, ((((((arr_11 [i_0] [i_0] [i_0]) ? (arr_1 [18] [18]) : var_3)) & -var_5)))));

        for (int i_10 = 1; i_10 < 19;i_10 += 1)
        {
            arr_39 [i_0] [i_0] = (((!127) + (10840 * -59)));
            var_33 = (((((5196 ? 7339 : 35750))) ? 32768 : ((var_13 >> (var_19 - 42536)))));
            var_34 = (min(var_34, (arr_30 [i_10 + 2] [i_10 + 2] [i_10 - 1] [i_10 + 2] [i_10 + 2])));
        }
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        arr_42 [i_11] = ((58 >> (7441 - 7419)));
        var_35 = (-99 ^ 17166);
    }
    var_36 = (min(30134, (max(((max(var_11, var_8))), ((var_15 ? -17 : var_10))))));
    var_37 = (min(var_37, ((max((((((-47 ? 37 : 127))) ? ((min(var_18, var_5))) : (~var_1))), (var_18 ^ var_13))))));
    #pragma endscop
}
