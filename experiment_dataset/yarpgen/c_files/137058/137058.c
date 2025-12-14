/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [6] = ((-(var_1 | 52595)));
        var_13 = ((((min(3767187697, 12941)))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_14 = ((((1 ? -10645 : (arr_5 [i_1]))) * (((!(arr_0 [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_15 = (((((var_1 << (((max((arr_0 [i_3] [i_3]), var_3)) - 4294967246))))) >= ((-52595 ? (arr_13 [i_3] [i_1] [i_2] [i_2] [i_3] [i_4] [i_4]) : var_7))));
                            arr_14 [i_3] [2] = (((arr_8 [i_3 + 1] [i_3 + 1]) ? ((((!(arr_11 [i_0] [i_0] [i_0] [i_3] [i_3]))))) : (((arr_10 [i_2] [i_3]) ? -0 : (((arr_11 [i_1] [i_1] [i_1] [6] [i_3]) ? 134217472 : var_0))))));
                            arr_15 [i_3] [1] [i_2] [i_3] [i_4] = ((((((((176 ? -10645 : 4128768))) ? var_11 : (arr_13 [i_3] [17] [i_0] [i_0] [i_3] [i_3 + 1] [i_3 + 1])))) ? ((-4128746 ? (arr_13 [i_3] [i_3] [i_3 + 1] [i_3] [i_4] [i_0] [i_3 + 1]) : (arr_12 [i_3] [i_3 + 1] [i_3 + 1]))) : (arr_11 [i_0] [i_1] [3] [i_3] [i_3])));
                        }
                    }
                }
                arr_16 [i_0] [i_0] [i_1] [i_1] = var_11;
                arr_17 [i_0] [i_1] [i_2] [i_2] = -4128729;
            }
            var_16 += ((!((min(52595, 255)))));
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        var_17 = var_3;
                        arr_23 [19] [i_1] = (arr_4 [i_5 + 1] [i_5 - 1]);
                    }
                }
            }
            var_18 = (~(min(var_6, (var_0 ^ var_9))));
        }
    }
    for (int i_7 = 1; i_7 < 19;i_7 += 1)
    {
        var_19 ^= (min((arr_13 [2] [i_7] [2] [10] [i_7] [i_7] [i_7]), (((~((-27195 ? (arr_10 [i_7] [20]) : (arr_18 [i_7] [i_7 - 1] [i_7] [i_7]))))))));
        var_20 += (((((-(arr_7 [i_7] [i_7] [i_7 - 1])))) & (min((4128768 || 1), (2248648538660738126 * 0)))));
        arr_26 [i_7] = var_8;
    }
    var_21 = var_5;
    #pragma endscop
}
