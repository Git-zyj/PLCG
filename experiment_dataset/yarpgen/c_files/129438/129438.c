/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (4 || var_10);
    var_16 &= -65518;

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] = ((((!(arr_4 [i_1]))) ? (((((-846262135 ? (arr_4 [i_1]) : (arr_0 [i_0] [i_0])))) ? 846262135 : (arr_4 [i_1]))) : (~115)));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_17 = (max(var_17, -var_8));
                        arr_9 [i_1] = (max(-846262139, ((-((2076 ? 63471 : 17))))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_1] = ((-((((~(arr_7 [i_0] [i_1] [1] [i_4]))) * ((max((arr_11 [i_0 + 1] [5] [5] [i_0 + 1] [i_0 + 2]), 32552)))))));
                        var_18 = ((!(((-(arr_5 [i_0 + 2] [i_0 + 2] [i_0 - 1]))))));
                        var_19 = (max(var_19, ((min((((-((65516 ? 32984 : 216))))), (max((arr_10 [i_0 + 1] [i_0 + 1] [0] [i_0 + 2] [i_0 + 2] [i_2]), (arr_1 [i_0]))))))));
                        var_20 = ((40 ? 846262138 : 174));
                        var_21 = (max(var_21, ((max(40, -123)))));
                    }
                    for (int i_5 = 3; i_5 < 7;i_5 += 1)
                    {
                        var_22 = (min((((arr_10 [i_0] [i_0] [i_2] [i_2] [9] [i_5 + 1]) ? -846262139 : 1626701835)), (arr_7 [i_0] [1] [i_2] [i_5])));
                        var_23 = min((((86 ? -69 : 225))), ((((max(1, (arr_10 [i_0] [1] [i_2] [i_5] [1] [i_0])))) ? (arr_0 [i_2] [i_2]) : ((((!(arr_11 [i_0 + 2] [i_1] [i_0 + 2] [i_1] [i_1]))))))));
                        arr_15 [1] [1] [i_1] [5] [i_1] = (((((216 ? 49 : 0))) ? ((210 ? -846262139 : 4294967295)) : ((((9 || (arr_7 [i_0] [i_1] [i_2] [i_2])))))));
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_24 = (((arr_2 [i_0] [i_0 - 1]) & 2668265475));
                        var_25 = (((arr_2 [i_0] [i_0]) + (((!(arr_8 [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_1]))))));
                        var_26 = (var_10 + 846262139);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 7;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 0;i_9 += 1)
                {
                    {
                        var_27 = (min((((2076 ? (arr_11 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_8 - 2] [i_9 + 1]) : (arr_27 [i_0 + 3] [i_8 + 2] [i_8 + 2] [i_9 + 1] [0])))), ((-(var_5 & 0)))));

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            var_28 &= (((arr_3 [i_0 + 1] [i_7] [6]) && 1));
                            var_29 = ((((var_13 ? 15 : 40518)) + ((((arr_19 [0] [i_8 + 3] [5]) >= 9223372036854775807)))));
                            var_30 += (((arr_8 [i_7] [8] [i_8 - 1] [i_7]) ? (arr_8 [i_7] [i_0 + 2] [i_8 - 2] [i_7]) : (arr_8 [i_7] [i_9] [i_8 + 2] [i_7])));
                        }
                    }
                }
            }
        }
        var_31 += (arr_17 [4] [0] [i_0]);
    }
    var_32 = (min(var_32, var_6));
    #pragma endscop
}
