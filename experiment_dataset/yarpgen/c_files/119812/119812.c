/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_18 = (3663319697 && 15965);
                    var_19 = (min(var_19, (min(((((4611123068473966592 & 631647599) != (min(0, (arr_6 [i_0] [10] [i_0])))))), (((arr_1 [i_0]) % (arr_1 [i_2])))))));
                    arr_7 [i_0] = (min(((((((arr_5 [7] [19] [5] [18]) * (arr_3 [i_0])))) ? var_0 : (min(631647599, -111)))), (((((((arr_4 [i_2] [15]) ? 1 : (arr_0 [18])))) && (arr_0 [16]))))));
                    var_20 = (min((min((min((arr_6 [i_2] [3] [i_0]), -25967)), (((arr_3 [i_1]) ? var_7 : (arr_1 [i_0]))))), ((((arr_2 [i_0] [4]) ? ((((arr_4 [i_0] [8]) / (arr_3 [4])))) : ((var_6 ? var_6 : (arr_4 [7] [7]))))))));
                }
                for (int i_3 = 4; i_3 < 19;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_15 [1] [9] [8] [4] [16] = arr_5 [i_5] [8] [i_3 - 4] [i_1];
                                arr_16 [1] [i_1] [1] [i_3 - 2] [1] [i_5] [i_5] = (arr_6 [i_0] [13] [16]);
                            }
                        }
                    }
                    var_21 = (max(var_21, ((min(((((((arr_8 [i_0] [2] [i_0]) - (arr_10 [i_3])))) ? (min(13118, (arr_6 [i_0] [i_0] [i_0]))) : (arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 1]))), ((((65515 ? 4294967295 : 2308205736674987825)))))))));
                }
                var_22 = ((((min((min((arr_2 [2] [2]), 9223372036854775807)), (!1)))) ? ((min((arr_5 [i_0] [i_0] [i_0] [i_0]), ((((arr_11 [i_0] [7] [7]) && -47)))))) : (((min(186, 26930))))));
                arr_17 [i_0] = (((((arr_14 [1] [i_1]) < (arr_14 [i_0] [i_0]))) ? ((((arr_3 [7]) > (arr_0 [i_0])))) : (((arr_3 [i_0]) ? (arr_14 [i_0] [i_1]) : (arr_3 [i_1])))));
            }
        }
    }
    var_23 = (min(((0 ? 60949 : 0)), var_5));
    #pragma endscop
}
