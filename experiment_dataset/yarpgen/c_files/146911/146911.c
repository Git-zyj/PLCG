/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = 710075705;

                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    var_16 = 23657;
                    var_17 = (min(var_17, 710075690));
                    var_18 = (max(var_18, (((~(arr_2 [i_1 - 1]))))));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    arr_11 [i_0] [i_0] [i_0] = (min((!1), 1048575));
                    var_19 = 710075706;
                    arr_12 [i_0] [22] [i_0] = 41892;
                    var_20 = ((((((max(23657, 710075709))) ? ((var_1 ? (arr_7 [i_1] [i_3]) : var_7)) : (((var_7 ? 710075690 : (arr_6 [i_3] [i_1] [i_0 + 2] [i_0]))))))) ? ((((~(arr_7 [i_1] [20]))))) : (arr_8 [i_0]));
                }
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_21 += 918128975;
                        arr_17 [i_0 + 1] [i_1] [i_4] [i_5] = (max((((arr_16 [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_1 - 1]) ? var_4 : 173)), (!710075690)));
                        var_22 = (arr_6 [i_0] [i_1] [i_1 - 3] [i_0]);
                    }
                    var_23 |= (max(((var_1 ? (arr_2 [i_1 - 1]) : (min((arr_16 [i_4] [i_4] [i_4] [i_4]), 1453028997)))), (arr_15 [i_0] [i_1] [i_1] [i_4])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_24 = ((~((337086631 ? (!var_1) : (arr_6 [i_0] [i_4] [i_6] [i_7])))));
                                arr_22 [i_0 + 1] [i_6] [i_6] = (arr_3 [16] [i_0] [i_6]);
                                var_25 = (((((7 ? (arr_1 [i_0] [i_0]) : ((((arr_2 [i_4]) ? 43325088 : 9261)))))) ? ((min((((arr_20 [i_0] [i_0] [i_6] [i_6] [i_0 - 1]) ? 92 : (arr_3 [i_7] [i_4] [i_0]))), (((arr_2 [i_0 + 2]) * (arr_4 [i_7] [i_7 - 1] [i_7])))))) : ((-15 - (((23655 ? 68 : (arr_9 [i_4] [i_0 + 2]))))))));
                            }
                        }
                    }
                }
                var_26 *= (max(-100, 710075705));
                arr_23 [i_0] [i_1 + 1] [i_1] = -43325088;
                var_27 = (max(var_27, ((((((var_6 >> ((((23630 ? 38 : 1)) - 24))))) ? (-22991 < 1) : ((min(-112, 15))))))));
            }
        }
    }
    var_28 = ((var_2 >> ((((((max(var_0, 27435))) >> ((43325084 ? 0 : 4)))) - 27423))));
    #pragma endscop
}
