/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (225 + 4294967287);
    var_21 = var_2;
    var_22 = (max(var_22, (((var_2 | ((max(var_0, var_8))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_23 = (~1);
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4 + 1] [i_4 + 1] = ((-((3365052799 ? -8390954325465730227 : 2))));
                                var_24 += var_16;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_25 = (min(var_25, (((((min((arr_9 [i_2 + 2] [i_2 - 1] [i_2 + 1]), 48))) && (arr_9 [i_2 - 1] [i_2 + 1] [i_2 + 2]))))));
                        arr_17 [i_0] [i_1] [i_2] [i_2] = var_15;
                        arr_18 [i_0] [i_0] [i_0] [i_2] [i_0] = ((~(((arr_16 [i_2] [i_2 + 2] [i_2 + 2]) ? (42 - 61) : (((arr_13 [i_2]) ? var_4 : (arr_0 [i_0] [i_0])))))));
                        arr_19 [i_0] [i_0] [i_2 + 2] [i_2] [i_5] = ((186 >> (max(1, 16))));
                        var_26 = (min((arr_13 [i_2]), (arr_3 [i_0] [i_0] [i_0])));
                    }
                    arr_20 [i_0] [i_0] [22] [i_2] = 15;
                    arr_21 [i_0] [i_2] [i_2] = (var_7 ? ((((((6341 ? var_4 : (arr_8 [13] [i_2] [20] [i_1] [i_0])))) ? (arr_13 [i_2]) : (var_10 | -31852)))) : ((min((arr_5 [i_0] [i_1] [22] [i_1]), 20))));
                }
            }
        }
    }
    var_27 = -18446744073709551614;
    #pragma endscop
}
