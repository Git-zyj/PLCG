/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_12 = ((!(((+((((arr_9 [10] [i_1] [i_2] [i_3]) == 315489460))))))));
                                var_13 = (((arr_5 [i_0]) * ((((((-32767 - 1) ? var_5 : (-32767 - 1)))) ? (((arr_11 [i_4]) & (-32767 - 1))) : (var_10 <= var_5)))));
                                var_14 = (arr_8 [i_0] [i_3] [i_0] [i_0]);
                            }
                        }
                    }
                    var_15 = (((((((((-32767 - 1) * var_1))) || (arr_1 [i_0] [i_0])))) * ((-264479016 * (arr_6 [i_0] [i_1])))));
                }
            }
        }
    }
    var_16 += ((((((((var_5 ? var_0 : 32767)) >= var_1)))) * (min(var_8, ((max(var_2, 255)))))));
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 23;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_17 = var_6;
                                var_18 = ((((min(var_8, (min((arr_19 [i_5]), (-32767 - 1)))))) ? (((((((arr_18 [i_6]) / 173))) ? ((32764 / (arr_14 [i_5] [i_5]))) : 64))) : ((((max((arr_21 [i_5]), (arr_14 [i_5] [i_5])))) * (((arr_13 [i_9]) / (-32767 - 1)))))));
                                arr_27 [i_5] [i_5] [i_9] [i_5] [i_5 - 1] |= 96;
                            }
                        }
                    }
                }
                arr_28 [i_6 - 1] [i_5] = (max((((arr_20 [i_5 + 1] [i_5 + 1] [i_5 + 1]) ? (arr_24 [i_5] [i_6] [i_5 + 1] [i_6] [i_6] [i_6 + 1]) : (arr_20 [i_5] [i_5] [i_5 + 2]))), (arr_20 [i_5] [i_5] [i_5 + 1])));
            }
        }
    }
    #pragma endscop
}
