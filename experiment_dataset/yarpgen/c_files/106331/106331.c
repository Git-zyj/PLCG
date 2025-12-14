/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((var_0 ? ((var_2 ? var_4 : var_9)) : var_0)), (((((var_6 ? var_7 : var_9)) != (var_3 | var_7))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_11 ^= (arr_0 [i_0]);
                    var_12 = (max(var_12, var_8));
                    arr_8 [i_1] [i_1] [i_1] = min((50331648 && 4294967276), ((!((min(var_8, var_8))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [3] [i_3] = (arr_4 [i_2]);
                        arr_12 [i_1] [i_2] = (var_4 ? (arr_0 [1]) : (!var_7));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_13 = (min(((max(var_6, (arr_2 [i_1])))), (arr_14 [i_0] [i_0] [i_1] [i_0])));

                        for (int i_5 = 3; i_5 < 23;i_5 += 1)
                        {
                            var_14 ^= (arr_13 [i_5 - 1]);
                            var_15 += (arr_16 [i_2] [12]);
                            arr_18 [17] [i_1] [i_2] [i_2] [i_1] [i_1] [i_0] = (min((arr_6 [i_5 - 2] [i_5 + 1] [i_5 - 1] [i_5 + 1]), (var_4 ^ var_6)));
                            var_16 ^= (arr_13 [i_0]);
                            arr_19 [i_1] [i_1] = (((var_6 != (arr_5 [i_0] [i_0]))));
                        }
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            arr_22 [i_1] [i_1] [i_2] [i_2] [20] = ((var_1 / ((((((arr_14 [i_2] [i_1] [i_1] [i_4]) ? var_4 : (arr_13 [i_0])))) ? var_7 : var_9))));
                            var_17 = (((26170 | 86) ? (~var_5) : (((arr_3 [i_0] [i_4]) ? (arr_13 [i_0]) : ((var_2 ? (arr_17 [i_0]) : var_0))))));
                        }
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            var_18 ^= (((arr_24 [1] [i_7 - 1] [i_7 + 2] [i_7 + 2] [16]) || (((((arr_13 [i_7 + 3]) || var_3)) && ((var_1 || (arr_1 [i_0])))))));
                            arr_25 [i_0] [i_1] [i_1] [i_2] [i_4] [i_7 + 3] = ((((((max((arr_20 [i_0] [i_1] [i_1]), (arr_20 [i_1] [i_2] [i_1])))) << ((((max((arr_13 [i_2]), var_5))) - 15916)))) * (((!var_7) & (arr_24 [i_0] [i_1] [i_2] [7] [0])))));
                            arr_26 [i_7] [i_1] [i_1] [i_0] = ((((var_0 * ((var_7 ? var_8 : (arr_14 [i_0] [12] [i_1] [7]))))) * var_5));
                            var_19 = min((max(((max((arr_7 [i_1]), var_1))), (min(var_1, var_2)))), (((var_3 ? ((var_8 ? (arr_20 [i_0] [18] [i_1]) : var_0)) : var_9))));
                        }
                    }
                }
            }
        }
    }
    var_20 = (((var_3 ^ var_8) ^ (var_5 != var_8)));
    var_21 += var_7;
    #pragma endscop
}
