/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_14 = (-11745 & 0);
                        var_15 = ((((94 ? 76 : (arr_3 [i_3] [i_1] [i_0]))) / (-16124 < 144)));
                        var_16 = -11752;
                        var_17 += ((~((-95 ? (arr_9 [i_0]) : 189))));
                    }
                    arr_11 [i_1] [i_1] = (max(((var_0 ? 11751 : (((arr_5 [23] [i_1] [i_0]) ? (arr_9 [i_2]) : (arr_0 [i_0]))))), -1894163887));
                }
            }
        }
        var_18 = (min(var_18, (((((((arr_4 [i_0] [i_0]) * (((arr_2 [i_0]) ? (arr_8 [10] [i_0] [10]) : 9))))) == (max((arr_10 [i_0] [i_0] [i_0] [i_0]), (((166 ? 19362 : (arr_0 [i_0])))))))))));
        var_19 = (((((1 ? ((70 ? 14398797906347768112 : 64116)) : 0))) ? ((min(169, -25737))) : (((max(var_1, (arr_6 [4] [i_0]))) & 10003))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 8;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_20 = 101;
                        var_21 = (9 && 23379);
                        var_22 = (((((min((max(var_2, (arr_0 [i_4]))), 11751)))) - (arr_10 [i_4] [i_5] [i_6 - 3] [i_6 - 3])));
                        var_23 ^= (max(((!(arr_7 [i_5 + 1] [i_6 + 2] [i_6]))), ((!(arr_7 [i_5 - 1] [i_6 - 3] [i_6 + 2])))));
                    }
                }
            }
        }
        var_24 = (max(((253 ? ((7 >> (((arr_16 [0]) - 55101)))) : ((0 >> (3634597730 - 3634597718))))), (((arr_16 [2]) + (arr_4 [i_4] [i_4])))));
        var_25 = (max(var_25, ((((((max((arr_15 [i_4]), var_11)))) * (max((((var_5 ? var_1 : (arr_9 [i_4])))), ((-14 / (arr_3 [i_4] [i_4] [i_4]))))))))));
    }
    var_26 = 65535;
    var_27 *= (!((min((min(18446744073709551605, 17)), (~-16152)))));
    var_28 = ((((((max(var_10, var_4))))) == (((var_3 > 465110062) ? var_10 : var_11))));
    #pragma endscop
}
