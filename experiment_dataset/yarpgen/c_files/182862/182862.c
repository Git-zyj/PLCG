/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = (((((127 != (arr_6 [i_0] [i_1])) ? (arr_6 [i_0] [i_1]) : var_7))));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_15 [i_3] [i_1] [i_2] [i_1] [i_4] = (!var_8);
                            var_20 = -114;
                            var_21 = ((((((var_6 ? 54 : var_14))) && (((var_0 ? var_4 : 15303074023069913830))))));
                            var_22 = (arr_5 [i_1]);
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_23 *= ((24 != ((min(72, 157)))));
                            arr_20 [i_0] [1] [i_2] [i_3] [i_3] = (min((!var_2), (min((arr_11 [5] [i_1] [i_1] [i_3] [i_5] [i_5]), 1))));
                        }
                        var_24 = (max(var_24, ((min(1, ((((min(-105, 24824))) ? var_16 : (~74))))))));
                    }
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_25 |= -17086;
                        var_26 *= ((((!(arr_17 [i_0] [i_1] [i_6] [i_7] [i_0]))) ? -var_10 : 39));
                        arr_27 [i_6] = (((arr_5 [i_0]) >> (((min(((var_15 ? 58 : var_10)), ((max((arr_8 [i_1] [i_6]), 224))))) - 35))));
                        arr_28 [i_6] [i_1] [i_6] [i_7] = -4;
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_31 [i_1] [8] [i_6] [i_6] |= ((~(arr_30 [i_1] [i_1] [i_8])));
                        var_27 = 0;
                        var_28 = ((!((min((!-40), ((219 ? 12641084772528067389 : 0)))))));
                    }
                    var_29 = var_15;
                }
                var_30 = (min(var_30, var_0));
            }
        }
    }
    var_31 = ((((((108 - 57) && ((max(var_0, var_9)))))) != (((min(74, 245))))));
    #pragma endscop
}
