/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((((min((arr_1 [i_0]), ((212 ? var_7 : 77))))) ? ((((var_14 != (arr_1 [i_0]))) ? (-95 >= 102) : ((max(0, -119))))) : ((max(100, -109)))));
        arr_3 [18] = 43;
        arr_4 [i_0] = ((-((15647 * (((max(16383, 0))))))));
        arr_5 [i_0 + 3] = (arr_1 [0]);
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = (((((160 ? (arr_6 [i_1 + 4]) : (arr_6 [i_1 + 1])))) ? (((arr_6 [i_1 + 2]) ? (arr_6 [i_1 + 3]) : 212)) : ((~(arr_6 [i_1 + 1])))));
        arr_10 [i_1] [i_1] = 896;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_16 *= (((arr_13 [8]) | (((~var_4) >> (((((arr_0 [i_2]) ? (arr_8 [i_2] [i_2]) : 31)) - 31179))))));
        var_17 = ((~(min(-28287, ((min(188, 19269)))))));
    }
    var_18 = -var_15;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    arr_21 [i_5] = (min(-17, 37942));
                    var_19 = (((((37249 ? (arr_18 [i_5 + 1] [i_5 + 1] [i_5 + 1]) : (arr_18 [i_5 + 1] [i_5 + 1] [i_5 + 1])))) ? (((!(arr_20 [i_5] [i_5 + 1] [i_5 + 1] [i_5])))) : ((max((arr_18 [i_5 + 1] [i_5 + 1] [i_5 + 1]), 50659)))));
                }
                /* vectorizable */
                for (int i_6 = 3; i_6 < 13;i_6 += 1)
                {
                    var_20 = (((var_9 >= 226) ? (arr_15 [i_3]) : (!55)));
                    arr_24 [i_6] = ((~(arr_17 [i_6 + 2])));
                    arr_25 [i_3] [i_4] [i_4] [i_6] = 65535;
                }
                var_21 = (min((0 != 1), ((((max(219, (arr_16 [i_3] [i_3])))) >> ((((var_2 ? -4715645292718801735 : (arr_15 [7]))) + 4715645292718801759))))));
                var_22 = -4715645292718801735;
            }
        }
    }
    #pragma endscop
}
