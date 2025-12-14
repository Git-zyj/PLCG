/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (max(((min(var_4, ((max(1, 127)))))), (((!65535) ? var_5 : (var_6 >> var_9)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = var_11;
        var_14 = 57688;
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_8 [i_1 - 1] = arr_6 [i_2] [i_1 - 1];
            var_15 ^= (((min(1, (arr_5 [i_1]))) - (((-(!3752))))));
        }
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            var_16 ^= ((-(arr_5 [i_1])));
            var_17 = (min((((((65523 * (arr_9 [12])))) ? (!11510) : (((arr_7 [1]) ? 6 : var_6)))), 1));
            arr_11 [i_1 - 1] = arr_3 [i_1];
            var_18 -= 1;
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 16;i_6 += 1)
                {
                    {

                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            arr_23 [12] [i_4] [i_4] [i_4] [i_5] = ((((max((arr_21 [i_6 + 2] [i_6] [i_6] [i_6 + 1] [i_6 + 2]), (arr_16 [i_6 + 1] [i_6 + 1] [i_6] [i_6])))) + ((max((arr_16 [i_6 - 2] [i_6] [i_6] [i_6]), (arr_16 [i_6 + 2] [i_6 + 3] [i_6 + 3] [i_6]))))));
                            var_19 = var_11;
                            var_20 = (min(var_20, (arr_4 [13] [i_4])));
                        }
                        for (int i_8 = 2; i_8 < 15;i_8 += 1)
                        {
                            arr_28 [i_1 + 2] [i_5] [i_5] [i_5] [i_1 + 2] = (((arr_21 [i_1 + 2] [i_1] [1] [i_1 + 2] [i_1]) ? (arr_15 [i_6 - 2] [i_4]) : (((arr_26 [i_6 - 1] [i_6] [i_6 - 2] [i_6 - 1] [i_6 - 2]) & (((var_8 ? (arr_12 [i_5 + 1] [i_5 + 1] [i_5 + 1]) : (arr_24 [i_1] [i_4] [i_4] [i_5] [4] [i_5] [i_8]))))))));
                            var_21 = ((((max((((var_10 <= (arr_15 [i_4] [i_4])))), (max(var_5, (arr_24 [i_1 + 1] [i_1] [i_1 - 1] [i_1] [i_1] [i_5] [i_1])))))) && -11535));
                        }
                        var_22 = ((((min(14156, 2833489220))) && 1));
                        arr_29 [i_1] [i_1] [i_1] [i_5] = ((((((arr_6 [i_1 - 1] [i_6 + 3]) ^ (arr_6 [i_1 + 2] [i_6 - 2])))) && ((((arr_6 [i_1 + 2] [i_6 - 1]) * (arr_6 [i_1 + 2] [i_6 + 2]))))));
                    }
                }
            }
            var_23 *= (arr_16 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1]);
        }
        var_24 = ((-(arr_10 [i_1 + 1] [i_1 - 1])));
    }
    #pragma endscop
}
