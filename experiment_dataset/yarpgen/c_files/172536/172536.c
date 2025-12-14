/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 = (max(var_10, ((((arr_5 [4] [4]) ? (((!(arr_5 [0] [i_2])))) : ((-29060 ? (arr_5 [6] [14]) : (arr_5 [2] [2]))))))));
                    var_11 = (((!15077798917545155700) <= (((55 || (arr_6 [8] [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_12 = ((~((((!(arr_3 [i_3]))) ? ((var_2 % (arr_5 [i_0] [9]))) : (((((arr_9 [i_0] [i_0] [i_0] [i_0]) >= 16788905164336104390))))))));
                                var_13 = (max(var_13, (((((min(26, 82))) ? (((((arr_8 [i_3 + 1] [i_3] [i_3 + 1] [i_3]) + 2147483647)) >> (((arr_8 [i_3 + 1] [i_3] [i_3 + 1] [14]) + 4795)))) : ((((((arr_1 [i_3]) ? (arr_8 [i_0] [8] [i_2] [22]) : (arr_3 [i_0])))) ? -25492 : (arr_11 [10] [i_3 + 2] [i_4] [i_1] [14]))))))));
                                var_14 += (arr_4 [i_3]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (((((!((max(var_5, -8)))))) % var_0));
    var_16 = (max(var_16, var_3));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    var_17 = (min(var_17, (arr_14 [2])));
                    var_18 = (max(var_18, ((((((min(18, (arr_5 [i_7] [14]))))) != (arr_4 [i_5]))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((((+(max((arr_1 [i_5]), var_8))))) ? (arr_21 [i_5] [i_7] [18] [i_5]) : ((5 ? var_9 : (((!(arr_18 [i_9]))))))))));
                                var_20 *= ((((min(4336404398204898570, 4294967273))) ? (((121 << (((max((arr_0 [i_7]), (arr_10 [i_6] [i_6] [10] [i_7] [i_6]))) - 18446744073709551476))))) : (((arr_9 [i_5] [i_6] [i_7] [i_8]) ? (arr_20 [i_5] [i_5] [i_6]) : (((arr_17 [i_6] [i_9]) ? (arr_3 [i_7]) : var_3))))));
                            }
                        }
                    }
                    var_21 *= (((arr_21 [i_7] [i_6] [i_6] [i_5]) ? (((arr_24 [i_5] [i_6] [i_6] [7] [i_7]) / var_6)) : ((max((arr_21 [i_5] [i_7] [8] [i_5]), 31674)))));
                    var_22 = (max(var_22, ((((((var_4 ? (arr_15 [i_7]) : (arr_3 [3])))) ? var_3 : (169 || 3116351895982219811))))));
                }
            }
        }
    }
    #pragma endscop
}
