/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 *= ((((!(arr_0 [i_0]))) ? ((((arr_0 [i_0]) || (arr_0 [i_0])))) : ((101 ? -121 : ((48 ? (arr_0 [i_0]) : (arr_0 [i_0])))))));
        var_14 = (((((-((227 >> (255 - 229)))))) ? ((+((536868864 ? (arr_0 [17]) : 1)))) : (arr_1 [i_0])));
        var_15 = (!43350);

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_16 |= (((min(-98, 30542)) % -121));
                arr_9 [i_0] [i_0] [i_1] = (((arr_5 [i_0] [11]) ? 95 : (((!((min(-96, -288523260055393673))))))));
                var_17 *= ((((((-(arr_4 [i_0] [i_0]))) > (((arr_2 [i_0] [i_1] [i_2]) + 121)))) ? (~-1039234415) : (max((~120), (arr_4 [i_2] [i_1])))));
                arr_10 [i_0] [i_0] [i_0] [i_0] = (max((~0), (arr_1 [i_0])));
                var_18 = ((120 ? ((((arr_1 [i_0]) < (arr_8 [i_0] [i_0] [i_0])))) : ((((min((arr_7 [i_0] [i_0]), (arr_1 [i_0])))) + (max(101, 511))))));
            }
            for (int i_3 = 2; i_3 < 24;i_3 += 1)
            {
                var_19 ^= -96;

                /* vectorizable */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    var_20 *= 42098;
                    var_21 = (max(var_21, ((((19812 > 95) && (((117 ? 0 : -121))))))));
                    var_22 = (((((arr_1 [i_1]) >= 8512151861841184733)) ? (arr_11 [i_1] [i_0]) : (((arr_15 [i_0] [i_0] [i_1] [i_3] [i_4]) ? 28 : (arr_5 [i_3] [i_1])))));
                }
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    arr_18 [i_5] [i_0] = (arr_5 [i_3] [i_0]);
                    var_23 = (((min((max(46877, (arr_6 [i_0] [i_1] [3]))), ((((arr_6 [i_5] [i_1] [i_5]) || 1))))) > 0));
                }
            }
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                var_24 = (arr_15 [i_6] [i_1] [i_1] [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_27 [i_0] [i_0] [i_0] [17] [i_6] = (~(arr_13 [i_0] [i_1] [i_1] [i_6] [i_7] [i_8]));
                            var_25 *= ((((max((((arr_0 [i_7]) + 90)), ((1 ? 1 : 244))))) == ((((max((arr_2 [i_0] [i_7] [i_6]), 121))) ? (arr_23 [23] [i_7] [i_7] [i_7] [i_7]) : (((255 ? 95 : 0)))))));
                            var_26 = (95 % 1016);
                        }
                    }
                }
            }
            arr_28 [i_1] [i_1] [i_0] = -258992865;
            arr_29 [i_1] [i_0] = (((((arr_19 [i_1]) < (arr_3 [i_0] [i_0]))) ? (((arr_15 [i_0] [i_0] [i_0] [i_0] [i_1]) ? (((((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]) && 1)))) : (((arr_1 [i_0]) ? -258992857 : (arr_6 [i_0] [i_1] [i_0]))))) : 46069679));
            arr_30 [i_0] [i_0] [i_0] = (max((arr_6 [i_0] [i_1] [i_1]), (arr_6 [i_1] [i_1] [i_0])));
        }
    }
    var_27 = 14854;
    #pragma endscop
}
