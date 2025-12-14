/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = 2626066084641626411;
                var_18 ^= ((!((min(3335998367, ((var_8 ? 15820677989067925194 : var_7)))))));
                arr_5 [i_0] [i_0] [i_0] = var_6;
                arr_6 [i_0] [i_0] [i_0] = (((arr_0 [i_1 - 1]) >> ((((((var_0 ? var_11 : (arr_1 [16]))))) + 106))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_9 [5] = ((-(var_6 & var_10)));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_13 [i_3] [2] = ((-(arr_2 [12] [i_3] [i_3])));
            var_19 *= ((~(arr_11 [i_2])));

            /* vectorizable */
            for (int i_4 = 3; i_4 < 11;i_4 += 1)
            {
                arr_18 [i_2] [i_3] [i_3] [11] = (((arr_8 [i_4 + 2]) ? 408726126 : (arr_8 [i_4 + 2])));
                var_20 = (max(var_20, (((var_15 ? var_14 : 0)))));
            }
        }
        arr_19 [i_2] [i_2] |= ((((min(15820677989067925197, 5))) ? (max((var_13 && 1258287667), (max(var_12, 5408513895371903307)))) : ((((max(0, var_8)) * var_13)))));
        arr_20 [i_2] [i_2] = 32763;
    }
    #pragma endscop
}
