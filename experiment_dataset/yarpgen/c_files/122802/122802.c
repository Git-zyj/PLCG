/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_15 = (((((~(arr_1 [i_0])))) ? ((83 ? var_3 : var_13)) : (arr_1 [i_0])));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            var_16 *= 8304193380674514547;
                            var_17 = (var_2 ? (arr_12 [i_3] [i_4 - 3] [i_4 - 3] [i_3]) : var_2);
                        }
                        var_18 = var_7;
                        var_19 = ((-(arr_4 [i_0])));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_20 = 1;

                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            var_21 -= (arr_14 [i_0] [i_1] [i_6 + 3] [i_5] [i_1]);
                            var_22 = (arr_3 [i_5] [i_1]);
                        }
                        for (int i_7 = 4; i_7 < 19;i_7 += 1)
                        {
                            var_23 = ((var_10 ? 1 : 3533738716));
                            var_24 = (max(var_24, (arr_10 [i_0])));
                            var_25 = (arr_2 [i_1]);
                        }
                    }
                    arr_21 [i_2] = ((-((79 ? 140 : 7578))));
                    var_26 = ((-10 && (arr_3 [i_0] [i_1])));
                }
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    var_27 = ((var_14 ? 221617561503931919 : var_8));
                    var_28 = ((!(((11285849505286386626 ? (((-(arr_19 [i_0] [i_0] [i_0] [i_8])))) : ((-(arr_8 [i_8] [i_8] [i_8] [i_8] [i_8]))))))));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    var_29 = ((~(var_0 >> 1)));
                    var_30 = ((221617561503931907 ? 233 : 40));
                    var_31 = 40;
                }
                var_32 = 9007164895002624;
                var_33 ^= ((var_2 ? 2305702271725338624 : ((max(-1317342654, var_9)))));
            }
        }
    }
    var_34 = (~var_5);
    var_35 = 98;
    var_36 = (~var_12);
    #pragma endscop
}
