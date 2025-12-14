/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(max(-var_2, -1))));
    var_15 = (min((!1), (!-var_3)));
    var_16 = ((-(min((max(var_4, var_12)), var_11))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 *= ((-(!var_10)));
        var_18 = ((!((!(arr_1 [i_0] [i_0])))));
        arr_2 [i_0] = var_0;
        var_19 *= ((~((-(arr_0 [1] [1])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_20 -= ((-(((!(arr_9 [i_0] [i_0] [i_1] [i_2] [i_3]))))));
                        arr_11 [i_2] [i_1] [i_2] [i_1] [i_3] = ((-(!-32767)));
                        arr_12 [6] [i_1] [i_2] [i_2] [i_3] [5] = ((!(arr_9 [8] [i_1] [i_1] [2] [i_3])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = ((-(!var_10)));

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_18 [i_4] = ((!((!(arr_13 [i_4])))));
            var_21 *= ((!(~1)));
        }
        for (int i_6 = 3; i_6 < 18;i_6 += 1)
        {
            arr_22 [i_4] [i_6] = (!-var_5);
            arr_23 [i_4] [i_4] = 512823636;
            arr_24 [i_4 + 1] [i_4] = (--32767);
            arr_25 [i_4] = (--21242);
        }
        arr_26 [i_4] [i_4] = (--131);
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        arr_29 [i_7] [i_7] = (max((((!((max(6587, (arr_21 [i_7] [i_7] [i_7]))))))), ((~(((!(arr_0 [i_7] [i_7]))))))));
        var_22 += ((-(min(((max((arr_28 [i_7]), (arr_10 [0])))), -var_12))));
    }
    var_23 = ((!((min((max(202, 59859)), (!var_3))))));
    #pragma endscop
}
