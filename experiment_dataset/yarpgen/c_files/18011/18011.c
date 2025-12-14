/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((!(var_13 - 29321))) ? (min(var_15, 65535)) : var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [6] [17] = var_3;
                    var_18 = (max(13417935497203097223, 49593));
                }
            }
        }
    }
    var_19 = 10;
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_20 = var_1;
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_22 [3] [3] [i_7] [i_7] [i_7] [i_7] = ((((((var_15 - (arr_4 [i_3] [9]))))) < (min((arr_6 [i_3] [i_5] [i_4] [i_6 - 1]), ((179 ? 179 : 9223372036854775807))))));
                                var_21 = (arr_13 [5] [5]);
                                arr_23 [i_4] [i_7] [0] [i_3] [i_7] = (((max(((-2147483625 / (arr_20 [i_7] [i_7] [i_7] [i_7] [i_7]))), (arr_20 [i_7] [4] [i_3] [i_3 - 1] [i_6 + 1]))) * (((2789379977 == (arr_20 [i_7] [i_3 + 1] [i_3 + 1] [6] [i_6 - 1]))))));
                                var_22 = (min(var_22, (((1505587319 ? 2789379977 : (((1505587312 ? (arr_1 [i_3 - 1]) : (2789380001 == -9223372036854775807)))))))));
                                var_23 = ((!(((((arr_0 [9] [i_5]) ? 76 : (arr_21 [i_3] [i_7] [i_3] [i_7])))))));
                            }
                        }
                    }
                    var_24 += (((var_6 != var_9) ? (((arr_6 [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 1]) ? (arr_6 [i_3 - 1] [i_3] [i_3 + 1] [i_3 + 1]) : var_11)) : (((!(arr_15 [3] [i_4] [i_4] [i_4]))))));
                }
            }
        }
    }
    #pragma endscop
}
