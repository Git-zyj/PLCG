/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] [i_1] = (((((15360 | 0) ? var_9 : (((arr_2 [i_0]) | 118))))) & ((~((var_7 ? var_6 : (arr_0 [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] = ((-15360 ? 6458877999247297121 : -15360));

                            for (int i_4 = 1; i_4 < 10;i_4 += 1)
                            {
                                var_10 = (((-var_1 > ((-8 ? 4294967285 : 65535)))));
                                arr_18 [i_0] = (((((max(var_2, (arr_6 [1]))))) ? ((((arr_5 [i_4 + 1] [i_4 + 2] [i_4 + 3]) == (var_7 && -1326317018403109471)))) : 0));
                                arr_19 [i_0] [i_0] [i_3] = ((-1584559378223735680 < (((~((((arr_1 [i_2] [i_3]) < (arr_13 [i_0] [i_0] [i_0] [i_0])))))))));
                            }
                            for (int i_5 = 0; i_5 < 13;i_5 += 1)
                            {
                                arr_22 [i_0] = ((-((-(arr_10 [i_0] [5])))));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = var_5;
                            }
                            for (int i_6 = 0; i_6 < 13;i_6 += 1)
                            {
                                var_11 = ((!(arr_3 [i_6])));
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max((((((arr_11 [i_0] [i_0] [i_6]) && -2826359140733881458)))), (((((14938655461909246936 ? var_6 : var_9))) ? -var_6 : (var_5 != var_4)))));
                                var_12 = ((1 - 56502) / var_6);
                            }
                            arr_27 [i_0] [i_0] [i_0] [i_0] = var_6;
                            var_13 = var_1;
                            arr_28 [i_0] [i_1] [i_0] [i_3] = (max(((((var_4 ? var_0 : (arr_25 [i_0] [i_0] [7] [i_0] [i_0] [i_0]))) - var_0)), (0 & -318352422)));
                        }
                    }
                }
            }
        }
    }
    var_14 = (224 != 128);
    var_15 = var_4;
    #pragma endscop
}
