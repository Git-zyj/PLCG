/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0 + 1] [i_0 + 1]) >> (((arr_1 [i_0 + 1] [i_0 - 1]) - 17873))));
        var_20 *= (((((6367880555540085399 + (arr_1 [i_0 - 1] [i_0 - 1])))) ? ((max((arr_2 [i_0 + 1]), (arr_1 [i_0] [i_0 + 1])))) : (((!(arr_2 [i_0]))))));
        var_21 ^= (min(var_12, -7));
        var_22 = ((((-((-3455951058365023153 ? 14 : 1)))) | ((-(arr_2 [i_0])))));
    }
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                {
                    var_23 = (((((-((-10 ? 4294967295 : 2))))) ? (arr_5 [i_1 + 2]) : 2));
                    arr_13 [i_3] = (min((max((((var_7 == (arr_10 [i_1] [i_1] [i_1])))), (min(var_1, 1)))), var_7));
                    var_24 = ((((!(-1 >= 4049444126901813173)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            {

                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    arr_21 [i_4] = (arr_19 [i_4] [i_4] [i_4] [i_5]);
                    arr_22 [i_4] [i_5] [i_4] = (((((var_9 | (((120 ? var_14 : (arr_16 [i_4] [i_6]))))))) ? (arr_19 [10] [i_4] [i_5] [3]) : ((((arr_14 [i_4]) ? (arr_14 [i_4]) : (arr_14 [i_4]))))));
                    var_25 = (min((arr_16 [i_4] [i_5]), ((min((arr_16 [i_4] [i_4]), var_2)))));
                }
                var_26 = ((((((arr_17 [i_4 - 1]) < (arr_14 [i_4])))) - ((var_13 + (arr_14 [i_4])))));
            }
        }
    }
    #pragma endscop
}
