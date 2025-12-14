/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_12 ? var_12 : ((min(var_11, var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (~-var_8);
                var_16 = (min(((((((arr_1 [i_0]) << (25695 - 25695)))) ? (var_5 / var_4) : -39832)), var_13));

                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            arr_15 [i_0] = ((!(arr_1 [i_0])));
                            var_17 = ((((min(46714, (arr_7 [i_0 - 1]))))) % 7806398688262504697);
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            arr_18 [i_0] [4] [i_2] [i_0] [8] = 46714;
                            var_18 = ((((((((arr_3 [i_0] [i_0] [i_0]) % (arr_0 [i_0])))) < ((var_5 ? 2273599782864829922 : var_7)))) ? -46697 : (max((!var_2), 8874029295608941561))));
                            var_19 = (arr_11 [8] [i_1]);
                            arr_19 [i_0] [i_1] [i_1] [i_1] [i_1] = (((((((min(1323817096966769083, 8874029295608941561))) ? (arr_10 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2]) : (~165)))) ? ((-(arr_2 [i_0 - 1] [i_2 - 2] [i_3 + 2]))) : (((9572714778100610054 ? (arr_1 [i_0]) : (arr_5 [i_0] [i_0] [i_0]))))));
                            var_20 = ((~((var_0 * (arr_13 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 3] [i_0])))));
                        }
                        arr_20 [i_0] [i_2 - 1] [i_2] [i_2 - 2] = (((((0 ? 1 : 145))) ? 140 : ((~((min(1, 1)))))));
                        var_21 = ((-(arr_12 [i_3 - 2] [i_3] [i_3 - 1] [i_0] [i_3 - 1] [i_3] [i_3])));
                    }
                    var_22 = (-((var_8 << (18446744073709551615 - 18446744073709551560))));
                    var_23 = (max(var_23, 10));
                    arr_21 [i_0 + 2] [i_1] [i_0] = (((((~(arr_8 [i_0] [i_0] [1] [i_1] [8] [i_2])))) ? -21318 : ((((arr_10 [i_0 + 3] [i_0 + 1] [i_0] [i_0 + 4] [i_0 + 4] [i_2 - 2]) || var_13)))));
                }
                var_24 += 1;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_25 = (min(var_25, ((max(((18043846171182848219 << (4943579588016856851 - 4943579588016856848))), (arr_16 [i_0] [i_0 + 1] [i_0] [4] [i_0]))))));
                            arr_27 [i_0] [i_0 + 2] [i_0 + 2] [i_1] [i_6] [i_0] = (((((13503164485692694772 ? (arr_17 [i_0] [i_0] [i_1] [i_6] [i_7] [i_0]) : (var_11 & 1)))) ? (arr_3 [i_0 - 1] [i_1] [i_6]) : var_5));
                        }
                    }
                }
            }
        }
    }
    var_26 = (((((-1068694853 ? var_1 : var_5))) ? var_13 : (var_13 != var_0)));
    #pragma endscop
}
