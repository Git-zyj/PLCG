/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((((max((min(var_10, var_16)), (arr_4 [i_0] [i_1])))) ? ((((var_11 ? var_17 : 1015754227)))) : (((((1 ? (arr_4 [i_0] [i_1]) : (arr_1 [i_1])))) ? ((var_1 ? 1 : 1)) : (arr_3 [i_0] [i_1] [i_1])))));
                arr_7 [i_0] [i_0] = 255;

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 = ((!((((((var_16 ? (arr_4 [i_2] [i_0]) : var_16))) ? (arr_8 [i_4 + 1] [i_4] [i_4 - 2]) : ((1 ? 769825839 : 1)))))));
                                var_20 += var_14;
                                var_21 = (min(var_21, ((6722419774138363105 ? (min(var_3, 1)) : var_3))));
                            }
                        }
                    }
                    var_22 = (((arr_13 [i_2] [i_0]) ? ((var_9 ? (((var_17 ? var_6 : var_15))) : (arr_12 [i_2] [i_2] [i_1] [i_0] [i_0] [i_0]))) : (arr_11 [i_0] [i_1] [i_2])));
                }
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    arr_18 [i_0] [i_1] [i_0] [i_0] = var_17;
                    var_23 = ((!(((var_1 ^ (arr_11 [i_5 + 1] [i_1] [i_5]))))));
                    var_24 = 32767;
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_25 = ((-1715820104 ? (+-1023) : (~1)));
                    var_26 = (min(var_26, (((+((((max((arr_19 [i_1] [i_6] [i_1] [i_1]), var_7))) ? 31738 : (~var_6))))))));
                }
                arr_22 [i_1] = ((((((250 ? 14759897964564391363 : var_0)))) ? var_9 : var_9));
                var_27 = 1610612736;
            }
        }
    }
    var_28 = (min(var_17, (!var_7)));
    #pragma endscop
}
