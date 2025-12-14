/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_9 [i_1] [i_1] [i_2] [i_1] [i_1] = ((11013464064882923233 ? 193 : (arr_1 [i_0])));
                        var_19 = min(4294967292, (max((arr_6 [i_0] [i_1] [i_0] [i_3]), 0)));
                        var_20 = (min(((-(arr_4 [i_1] [i_1] [i_1]))), var_17));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_21 *= (min(var_16, (min((max(var_16, 7433280008826628383)), (((11013464064882923240 ? 0 : 0)))))));
                        var_22 = (max(((min((arr_12 [i_1]), (max((arr_4 [i_0] [i_1] [14]), var_11))))), var_16));
                        var_23 = ((var_11 ? 1 : 16921));
                        var_24 = var_1;
                        arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] = (((arr_8 [i_1] [i_1] [i_1]) ? (min((arr_12 [i_1]), var_12)) : ((((arr_8 [i_1] [i_2] [i_1]) ? var_8 : 193)))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_25 *= (arr_0 [i_0]);
                        var_26 = var_14;
                        var_27 ^= (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_2]) : (arr_2 [i_1] [i_0])));
                        var_28 = 98;
                        var_29 = (((arr_6 [i_0] [i_0] [i_2] [i_5]) >= (arr_6 [i_0] [i_1] [i_2] [i_5])));
                    }
                    var_30 = 11013464064882923240;
                    arr_16 [i_0] [i_1] [i_2] = (((((-var_11 ? (((arr_15 [i_2] [i_2] [i_1] [i_0] [i_1] [i_0]) & (arr_5 [i_0] [i_0] [i_2]))) : (arr_8 [i_1] [i_1] [2])))) ? 7433280008826628383 : 4163));
                }
            }
        }
    }
    var_31 = ((((var_16 <= (((1 ? -16922 : 13494))))) ? 3856659317104991023 : var_3));
    #pragma endscop
}
