/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_11 << (min(1, ((max(1, 1)))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    {
                        var_18 = (~1);
                        var_19 -= (!((min((arr_14 [i_0] [8] [i_2]), 5934005784471538584))));
                        var_20 = (~1);
                        arr_15 [i_0] [6] [6] [i_2] = (+-1);
                    }
                }
            }
        }
        var_21 = (((1 / 37253) ? (((-28455 > (arr_7 [i_0] [5] [i_0])))) : ((~((-(arr_8 [i_0] [i_0] [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_22 = 1;
            var_23 -= (arr_17 [i_5]);
        }
        var_24 = ((1 << ((1 & (arr_17 [0])))));
        var_25 = (((arr_16 [i_4 - 2]) ? 0 : 1));
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    arr_28 [i_7] [i_7 + 1] [i_7] = ((+((((((111 ? (arr_20 [3]) : -1890161003))) && ((max(1, 15069))))))));
                    var_26 = arr_22 [i_6];
                }
            }
        }
        var_27 = (arr_26 [i_6] [12] [i_6]);
    }
    #pragma endscop
}
