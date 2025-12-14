/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1 - 1] [i_0] [1] = (((arr_8 [i_1] [i_1] [i_1 - 1]) ? (arr_9 [i_1 - 1] [i_0 + 1] [i_0]) : ((((((min((arr_2 [i_3]), var_3))) || -1705703329))))));
                        arr_11 [i_0] [i_2] [11] = (((((-(arr_3 [i_0] [i_3 + 2])))) ? (arr_3 [i_0] [i_3 + 3]) : (((arr_3 [i_0] [i_3 + 3]) + (arr_3 [i_0] [i_3 + 3])))));
                        arr_12 [i_0] [11] [i_0] [i_0] [13] [7] = max(((~(~var_8))), var_7);
                        var_12 = ((~(arr_9 [i_1 - 1] [12] [i_0])));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_15 [i_0] [i_4] = ((min(var_0, var_3)));
            arr_16 [i_0] [i_0] [i_0] = ((((((!(arr_0 [i_0]))))) > (min((arr_14 [i_0] [i_4]), (arr_0 [i_0])))));
            var_13 = ((((min(0, (arr_13 [i_0] [i_0])))) & ((((min(var_0, (arr_5 [i_4])))) ? var_9 : ((-(arr_4 [i_0] [i_4])))))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                var_14 = ((!(((min((arr_7 [i_0] [i_5]), var_10)) < -1791556292))));

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_15 = ((~1) ? (((~(arr_13 [i_0 - 1] [i_0 + 2])))) : (((arr_13 [i_0] [i_5]) ? (!var_1) : (min(var_10, (arr_0 [i_0]))))));
                    arr_24 [i_0 + 4] [i_0] = var_3;
                }
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    var_16 = (min(var_16, (((-(arr_27 [i_0 + 3] [i_5] [i_6] [i_8]))))));
                    var_17 = (max(var_17, 14156224522255884645));
                }
            }
            var_18 = var_10;
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            var_19 *= ((~((((arr_27 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 4]) < (arr_29 [i_0 + 4] [i_0 + 2]))))));
            arr_31 [i_0] = ((-(min((arr_22 [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0 + 3]), (((arr_9 [i_0] [i_0] [i_0]) ? (arr_5 [i_9]) : var_2))))));
        }
        var_20 = ((-(arr_1 [i_0])));
    }
    var_21 = (max(var_21, ((((var_1 ? ((var_7 ? var_3 : var_6)) : (-79 ^ var_0)))))));
    var_22 = (min(var_22, ((((var_10 ? (max(var_6, 763224848721224283)) : (var_3 ^ var_7))) <= (((((var_1 ? var_6 : 251)) & (var_11 - var_6))))))));
    var_23 ^= var_11;
    var_24 = (((-((var_5 ? 169 : var_8)))) <= (((var_1 ? ((var_0 ? var_11 : var_0)) : (var_11 | var_6)))));
    #pragma endscop
}
