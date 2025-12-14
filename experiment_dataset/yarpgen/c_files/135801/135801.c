/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-((var_10 ? (var_8 + 1) : (var_0 + var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = ((((((arr_3 [i_0 - 2]) && (arr_3 [i_0 - 1])))) + ((max(var_4, 3069181742)))));
                var_13 = (arr_1 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                var_14 = (arr_3 [i_4]);
                                var_15 = (min(var_15, (((max((arr_5 [i_0] [i_1] [i_0 - 1] [i_0 - 1]), var_6))))));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_5] = ((((min((var_9 >= 3069181742), -13839))) ? -var_0 : (((((var_10 ? var_1 : (arr_11 [i_1] [i_2] [i_2] [i_2] [i_0]))) <= (var_2 && 11735032433787167395))))));
                                arr_17 [i_0] [i_0] [i_1] [i_2] [i_3] [i_5] [i_5] = ((~((~(arr_8 [i_0] [i_1] [i_2] [i_3] [i_5])))));
                            }
                            for (int i_6 = 3; i_6 < 9;i_6 += 1)
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((arr_0 [i_0]) / (arr_1 [i_2])))) ? 3552349565 : (((((8559103260446482725 % 3060364237) || (((var_1 ? var_1 : 1225785541)))))))));
                                var_16 |= 29998;
                                arr_21 [i_1] |= (((65535 ? 3488653823832054949 : 1096784781)));
                                var_17 = ((!(arr_6 [i_0 - 2] [i_0 - 1] [i_0] [i_0])));
                            }
                            var_18 = (min(var_18, (((((max(26392, 21155))) ? (arr_3 [i_0 + 1]) : ((((!(arr_3 [i_0 - 1]))))))))));
                        }
                    }
                }
            }
        }
    }
    var_19 = (min(var_19, (!var_3)));

    for (int i_7 = 4; i_7 < 12;i_7 += 1)
    {
        arr_25 [i_7] [i_7] = ((((((((arr_22 [i_7]) ? (arr_24 [i_7]) : var_6)) & (var_10 < -11234)))) ? (var_5 | var_6) : var_0));
        arr_26 [i_7] = 1877261875030706349;
    }
    var_20 = 3;
    #pragma endscop
}
