/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    var_20 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = (((min((~246), 9497)) / ((-(9497 * var_3)))));
                var_22 = 56020;
            }
        }
    }
    var_23 = (min(var_23, (2568103677 ^ var_7)));
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_24 &= var_6;

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    arr_12 [i_4] [i_3] [i_3] [i_2] = ((((min(1, 1726863619))) ? (~1726863639) : 20132));
                    arr_13 [i_2] [i_3] [i_2] &= (((~var_6) / (~var_18)));
                    arr_14 [i_3] [i_3] [i_2] = ((((max(var_14, var_7))) ^ (min((arr_3 [i_2 - 4]), 2568103677))));
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_25 = (((((~((min(var_6, (arr_3 [i_5]))))))) ? (((56044 > var_0) + ((min((arr_5 [i_2 - 4] [i_3]), var_5))))) : ((0 + (arr_4 [i_2 - 3] [i_2 - 2] [i_2 - 4])))));
                    var_26 = (max((max((var_13 & var_3), (arr_7 [i_2]))), ((min(1, -8433)))));
                    arr_17 [i_2 - 2] [2] [1] [i_3] = (((-(min((arr_6 [6]), 56044)))));
                }
            }
        }
    }
    #pragma endscop
}
