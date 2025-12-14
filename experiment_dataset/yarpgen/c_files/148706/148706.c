/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((884927004 ? var_3 : (max(var_15, var_3)))) > (((((min(var_7, var_5))) ? (var_4 ^ var_14) : (var_14 >= var_10))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_18 = (884927004 ? (min(884926989, 1)) : (884927016 / 884927004));
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_0] [i_1] = var_7;
                        var_19 = ((((!(arr_6 [i_3 + 1] [i_3] [i_3 - 1] [11]))) ? (var_5 || var_16) : (((arr_6 [i_3 - 1] [i_3] [i_3 + 1] [i_3]) ? (arr_6 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) : (arr_6 [i_3 + 1] [3] [i_3 + 1] [3])))));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_20 = ((((min(var_1, var_0))) ? ((max((max(884926976, var_2)), (arr_4 [i_0] [i_1] [0] [i_4])))) : (max((arr_3 [i_0] [i_0] [i_4]), ((var_11 ? var_12 : 884926960))))));
                        var_21 = (((((max((arr_2 [i_0] [i_0] [i_2]), var_7)) ^ (((var_15 ? (arr_9 [5] [i_0] [5]) : var_2)))))) & (min(((((arr_10 [8] [17] [17]) ? 1 : 1))), var_11)));
                        var_22 = (!5);
                        arr_13 [i_0] = var_16;
                    }
                    var_23 = var_9;
                    var_24 -= ((+((var_0 ? ((((arr_1 [i_0]) < (arr_2 [8] [i_1] [3])))) : 1))));

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        arr_16 [i_0] [i_1] [5] [i_1] [i_0] [i_5] = ((var_8 ? var_16 : var_4));
                        var_25 += (((arr_3 [i_5 - 1] [16] [i_0]) ? var_15 : (((arr_5 [i_0] [10]) * var_14))));
                        var_26 = (arr_12 [i_0] [i_1] [i_2] [i_5 + 2]);
                        var_27 = ((884926984 >> (!var_16)));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_21 [1] [i_0] [i_1] [i_1] [i_0] [i_0] = (arr_2 [i_1] [i_1] [15]);
                        var_28 = (((var_10 ^ var_0) << (((((arr_19 [i_0] [i_0] [i_0] [i_0]) ? (arr_10 [3] [14] [1]) : var_1)) - 3949489250))));
                        var_29 = (((arr_14 [i_6] [i_0] [i_0] [i_0]) ? (arr_1 [i_2]) : (arr_19 [i_0] [i_0] [i_0] [i_0])));
                    }
                }
            }
        }
    }
    var_30 = (((((((((var_10 ? var_15 : var_11))) && (!1))))) < ((6447874473716472149 ? var_7 : var_11))));
    #pragma endscop
}
