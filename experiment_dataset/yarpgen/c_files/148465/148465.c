/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 += 3705073227034272554;
                                var_17 = 128;
                                arr_12 [13] [13] [i_2 - 1] [i_3] [13] = arr_5 [10] [10] [i_2 - 1] [i_3];
                                arr_13 [i_3] = (arr_1 [i_3] [i_1]);
                            }
                        }
                    }
                    arr_14 [16] [15] [i_2] = arr_3 [i_0];
                    var_18 *= (((-(arr_4 [12] [i_0] [i_1] [i_0]))));
                    arr_15 [i_0 - 2] [i_1 + 2] = (((!14741670846675279062) ? ((31 ? 4169708613150205385 : (arr_3 [2]))) : ((((((arr_3 [i_0]) ? 14741670846675279062 : (arr_0 [i_0]))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_19 = ((+((((min((arr_19 [i_5] [3] [i_7]), (arr_23 [i_7] [17] [i_5 + 1] [1])))) ? ((((arr_21 [i_5] [i_6] [i_7] [i_7]) ? 1 : (arr_22 [i_5] [i_6] [i_7])))) : ((10742863558929739066 ? (arr_22 [i_6] [i_6] [i_6 + 1]) : (arr_18 [i_7])))))));
                    arr_24 [i_5 + 1] [i_6] [i_7] = 0;
                    arr_25 [i_5] [i_5] [i_5 + 1] = (arr_20 [i_7] [3] [4]);
                    var_20 = (arr_20 [i_5] [i_6] [8]);
                    arr_26 [i_5] [i_6] [i_7] = (((arr_18 [i_7]) ? 1 : 3705073227034272554));
                }
            }
        }
    }
    #pragma endscop
}
