/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((-(!var_3)));

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_15 = ((+((((((arr_3 [i_0]) == (arr_2 [11] [11])))) & ((((arr_0 [i_0] [i_0]) >= (arr_2 [11] [i_0]))))))));
        var_16 = ((!(arr_3 [i_0])));
        var_17 += (((arr_2 [i_0 + 1] [i_0 - 2]) | ((-(arr_2 [i_0] [i_0 + 1])))));
        var_18 *= (((arr_2 [i_0] [i_0]) ? ((((!(arr_2 [i_0] [8]))))) : ((((((arr_0 [i_0 - 2] [18]) ? (arr_2 [19] [19]) : (arr_1 [i_0 + 1] [i_0])))) ? (arr_2 [i_0] [i_0]) : (198 % 18446744073709551615)))));
        arr_4 [i_0] = (((((-(arr_3 [i_0])))) ? (arr_3 [i_0]) : (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = (((((arr_6 [i_1] [i_1]) / (arr_5 [i_1])))));
        var_20 = ((-((-(arr_5 [i_1])))));
        var_21 += ((-(((((((arr_3 [20]) != (arr_5 [i_1]))))) - (arr_5 [i_1])))));
    }
    var_22 -= (1 || 17147610935050446228);
    var_23 = var_12;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_24 ^= (((((arr_0 [i_2] [24]) || (arr_0 [1] [1]))) ? (((!(((arr_8 [i_3] [i_2]) || (arr_9 [i_3] [10])))))) : (((!(arr_0 [i_3] [12]))))));
                arr_13 [i_3] = (arr_11 [i_2] [i_3] [i_3]);

                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    var_25 ^= ((((((arr_0 [i_4 - 2] [1]) ? (arr_1 [i_2] [i_2]) : (arr_14 [i_2] [10] [1])))) == (arr_7 [i_4 + 4])));
                    var_26 -= (((-(arr_7 [i_2]))));

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_27 = (((((-(arr_18 [i_4] [i_3] [i_4] [i_4] [i_4] [i_3])))) ? 24201 : (arr_18 [i_4] [i_3] [2] [i_4] [i_4] [6])));
                        var_28 += (+-616638284);
                    }
                }
            }
        }
    }
    #pragma endscop
}
