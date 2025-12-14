/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(((((12832 ? 96 : 12832))) ? 6519127399321461556 : var_9))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_12 |= (max((min(var_0, var_6)), ((max((arr_1 [i_1 + 1]), (arr_1 [i_1 - 1]))))));
                        var_13 = (max(((var_4 ? 842997272 : var_7)), var_2));
                        arr_10 [i_0] [i_0] = (67108863 + 3689452871);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((((((65440 ? 2147483647 : var_10)) / ((var_2 ? var_7 : var_0))))) ? 7851 : (((arr_3 [i_0] [i_1 - 1]) | var_9)));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 11927616674388090060;
                    }
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        arr_18 [i_5] [i_5] = 1792;

                        for (int i_6 = 3; i_6 < 11;i_6 += 1)
                        {
                            arr_22 [i_6] = ((((arr_17 [i_0] [i_0]) == (~14))) ? (((!(((5432117852486909216 ? 62165 : -5169)))))) : ((14 ? (-12843 + 20290) : (arr_3 [i_0] [i_0]))));
                            var_14 ^= ((((((var_4 ? 4827679013626288317 : var_8))) ? (max(var_10, var_0)) : (!5432117852486909216))));
                        }
                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            arr_26 [i_0] [i_0] [i_0] [i_7] [i_0] = (((((((min((arr_8 [i_1] [i_1]), var_2))) ? (arr_21 [i_0] [i_0] [i_7] [i_0] [i_7]) : (arr_21 [i_5 - 2] [i_5 - 2] [i_7] [i_1 + 1] [i_7 - 1])))) ? ((var_1 ? (arr_8 [i_1 + 1] [i_5 - 3]) : (arr_21 [i_1 - 1] [i_7] [i_7] [i_1 - 1] [i_1 - 1]))) : ((((arr_13 [i_5] [i_5] [i_5 - 2] [i_5]) ? 11927616674388090059 : 255)))));
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_7] = (~1145026523);
                        }
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = min(-2305843009213693952, 16);
                    }
                    var_15 = (((((24576 - (~64188)))) ? (((((24576 ? (arr_9 [i_2]) : 3371554228))))) : ((~(max(2305843009213693952, 19987))))));
                    arr_29 [i_1] [i_1] [i_1] [i_1] = (((max(26636, (arr_3 [i_0] [i_0])))));

                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_16 = -672044405189643035;
                        arr_32 [i_0] [i_0] [i_0] [i_0] = -19988;
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        arr_35 [i_9] = (-38 > (((arr_6 [i_0]) ? var_4 : var_3)));
                        arr_36 [i_9] [i_9] [i_9] [i_9] = 16376;
                    }
                    arr_37 [i_0] [i_0] [i_0] [i_0] |= (min(20290, 226326829));
                }
            }
        }
    }
    var_17 = ((min(((8 ? 1994561541 : var_10), (max(var_5, var_2))))));
    #pragma endscop
}
