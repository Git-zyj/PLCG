/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_10 &= (max((arr_9 [i_0] [i_4] [i_4] [i_3]), (((((min(var_1, -1))) ? 1732013125 : (!1001574318))))));
                                var_11 = ((((min((arr_0 [i_3 - 1]), var_9))) & ((((max(var_2, 4479995847091488928))) ? (arr_10 [i_3] [i_3 - 2] [i_3] [i_3]) : (min((arr_11 [i_4] [i_4] [i_4] [i_4] [i_4]), 3214))))));
                                var_12 = var_7;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_17 [i_2] [i_1] [i_1] |= var_2;
                        arr_18 [i_0] [i_1] [i_2] [i_5] [i_1] [i_2] = (!3211);
                        var_13 += (((arr_4 [i_5] [i_2] [i_1] [i_0]) / (0 - 451866911)));
                        var_14 = ((var_3 ? -1732013126 : var_6));
                        arr_19 [i_0] [i_1] [i_2] [i_5] [i_5] |= (arr_3 [i_2] [i_5]);
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_23 [i_6] [i_6] [i_1] = (((max((max((arr_13 [i_1]), var_5)), (arr_6 [i_2] [i_2]))) != (~var_0)));
                        arr_24 [i_6] [i_6] [i_6] [i_1] [i_6] = arr_14 [i_6];
                        var_15 = (arr_1 [i_2]);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_16 = 8388607;
                        var_17 &= -265203437;
                        var_18 = 2147483647;
                        var_19 = (~-6128960978218383621);
                        var_20 = (arr_7 [i_0] [i_0] [i_1] [i_2] [i_2] [i_7]);
                    }

                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        arr_31 [i_0] [i_1] [i_2] [i_8] = (((arr_1 [i_0]) ? (arr_13 [i_1]) : ((max(((1446 ^ (arr_9 [i_0] [i_0] [i_2] [i_8]))), var_2)))));
                        arr_32 [i_1] [i_8] [i_2] [i_8] [i_8] [i_1] = (((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_7 [i_0] [i_0] [i_1] [i_1] [i_2] [i_8]))) * (arr_1 [i_0])));
                        var_21 = ((((((arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_8 [i_0] [i_1] [i_1] [i_8] [i_1] [i_0]) : (min(var_3, 3443497570))))) || (((+((((arr_13 [i_1]) != var_2))))))));
                        arr_33 [i_1] [i_1] [i_8] [i_8] = ((((-((max(0, (arr_8 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0])))))) << (1150112508 - 1150112489)));
                    }
                    for (int i_9 = 3; i_9 < 16;i_9 += 1)
                    {
                        arr_36 [i_0] [i_1] [i_0] = 265203437;
                        var_22 = 1125899906580480;
                        var_23 = 1473;
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        arr_40 [i_0] [i_1] [i_0] [i_10] = ((288230358971842560 >= (arr_8 [i_0] [i_1] [i_1] [i_1] [i_2] [i_10])));
                        arr_41 [i_0] [i_1] [i_2] [i_2] [i_10] |= -274388381;
                    }
                }
                for (int i_11 = 3; i_11 < 17;i_11 += 1)
                {
                    var_24 *= ((((-103 ? 18303 : -1183027721)) + (arr_7 [i_11] [i_11] [i_11] [i_11 - 3] [i_11] [i_11])));
                    var_25 = var_4;
                    var_26 -= ((-((min(59637, 40276)))));
                }
                var_27 = (max(var_27, ((min(((min((arr_38 [i_0] [i_0] [i_0] [i_1]), 123))), (max((((-9223372036854775807 - 1) % var_7)), 2437777110)))))));
            }
        }
    }
    var_28 = 2437777110;
    #pragma endscop
}
