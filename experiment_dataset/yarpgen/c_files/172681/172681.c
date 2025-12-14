/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((-127 - 1), (min(var_5, var_7))));
    var_20 -= (min((min(var_0, var_0)), var_2));
    var_21 = (((((min(5310469460791946835, var_11)))) ? (((min(1144, -1702820736)) - var_16)) : var_0));
    var_22 = (min(7, -3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_23 = ((((min((1390766643 != 2904200652), 3102)))) % (((arr_2 [i_0]) ? (1390766643 | var_17) : 2904200653)));
                    arr_6 [i_0] [i_1] [i_2] = (!1086283178);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_24 = 255;
                                var_25 = (arr_8 [i_0] [i_4]);
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = ((1390766651 ? (arr_9 [i_0] [i_1] [i_2]) : ((((min(var_9, 16384)) * (arr_1 [i_4]))))));
                                var_26 = ((-2013271400 <= (((arr_5 [i_3] [i_2] [i_1]) ? -117 : (1390766651 && -766835841)))));
                                var_27 = (min(var_27, ((((((+(min((arr_5 [i_0] [i_1] [i_2]), 67108863))))) && (((((((arr_0 [i_4]) ? (arr_0 [i_1]) : (arr_13 [i_0] [i_1] [i_2] [i_3] [i_4])))) & (arr_7 [i_3])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
