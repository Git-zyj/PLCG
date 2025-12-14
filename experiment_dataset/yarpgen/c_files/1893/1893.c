/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (!var_15)));
                    var_19 = (arr_6 [i_0] [i_1] [i_1] [i_1]);
                    var_20 = var_15;

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_0 + 1] [i_3] [i_2] [i_3 - 1] [i_0 + 1] = -847110793;
                        arr_12 [i_0] [i_0] [i_1] [i_0] [i_0] [i_2] = var_16;
                    }
                }
            }
        }
        var_21 += (((arr_6 [i_0] [i_0] [i_0] [7]) > (((!(arr_1 [i_0] [i_0 - 2]))))));
        arr_13 [0] = (((min(0, 746281905))));
        var_22 += (((arr_3 [i_0] [i_0 + 4]) % (max(((var_2 / (arr_0 [i_0]))), (arr_0 [i_0])))));
    }
    for (int i_4 = 2; i_4 < 17;i_4 += 1)
    {
        arr_18 [i_4] [i_4] = (((((min(28, var_0)))) ? (arr_17 [11] [i_4]) : ((((arr_15 [i_4]) ? (arr_14 [i_4]) : var_8)))));
        arr_19 [i_4] [i_4] = ((18038 * ((((arr_16 [i_4] [i_4]) == (((arr_14 [15]) ? (arr_14 [i_4 - 2]) : (arr_14 [i_4]))))))));
        arr_20 [i_4] [i_4] = (arr_14 [i_4]);
        arr_21 [i_4 - 1] = (((arr_14 [i_4 + 1]) ? (((arr_17 [i_4 + 1] [i_4 + 1]) ? (arr_17 [i_4 + 1] [i_4 + 1]) : (arr_17 [i_4 + 1] [i_4 + 1]))) : (((arr_16 [i_4 - 2] [i_4 + 1]) ? (arr_17 [i_4 - 1] [i_4 - 1]) : 1))));
        var_23 = (((arr_14 [i_4]) == ((var_4 ? ((max((arr_14 [i_4]), var_8))) : ((min((arr_16 [i_4] [i_4]), (arr_17 [i_4] [i_4 - 2]))))))));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        var_24 = var_11;
        var_25 = (+-3615144788007130881);
        var_26 = (min(var_26, (arr_16 [i_5] [i_5])));
    }
    #pragma endscop
}
