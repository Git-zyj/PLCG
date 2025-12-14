/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 4;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = -17;
        var_15 = (max(var_15, var_1));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_16 = (((((arr_3 [i_1] [i_1]) / (min(var_9, (arr_3 [i_1] [i_1]))))) == ((2609624789 / ((~(arr_3 [i_1] [i_1])))))));
        arr_5 [i_1] = ((54560 != (((!((((arr_3 [i_1] [i_1]) ? var_3 : (arr_4 [i_1] [i_1])))))))));
        arr_6 [i_1] [i_1] &= (arr_4 [i_1] [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_17 = ((-((var_11 / (arr_3 [i_1] [i_2])))));
                    arr_12 [i_1] = ((!((!(arr_11 [11] [11] [i_2] [i_3])))));
                    var_18 -= (((arr_9 [i_3] [i_2] [i_3] [i_3]) <= -var_4));

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_17 [i_1] [i_2] [i_2] [i_4] |= ((+(((arr_3 [i_3] [i_3]) ? (arr_7 [i_3] [i_2] [i_1]) : (arr_7 [i_2] [i_3] [i_4])))));
                        arr_18 [i_1] [i_1] = (((((~(arr_7 [i_3] [i_3] [i_2])))) ? ((((-127 ? 123 : 43227)))) : (arr_4 [i_1] [i_1])));
                        arr_19 [i_4] [i_1] [i_2] [i_1] = ((var_13 ? (arr_15 [i_2] [i_1]) : (var_6 + 4294967290)));
                        arr_20 [i_1] [i_1] [i_1] [i_2] [i_3] [i_4] = var_1;
                    }
                }
            }
        }
        var_19 = (min(var_19, (arr_8 [i_1])));
    }
    var_20 = (min(var_20, (min(((~(!7729492116669661671))), ((((var_1 ? 40 : 134)) & ((27 ? var_3 : 65529))))))));
    #pragma endscop
}
