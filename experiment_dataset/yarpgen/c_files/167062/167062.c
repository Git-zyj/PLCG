/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = (min((min((arr_4 [i_2] [7]), var_11)), ((-((var_5 ? (arr_0 [i_0]) : (arr_0 [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 = var_11;
                                arr_13 [i_2] [i_4] = (max((((arr_2 [i_3]) || (arr_5 [i_0]))), (min(1, 1))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_15 = ((((1 ? var_3 : 3)) | ((~(arr_3 [i_0])))));
                        var_16 = ((((((arr_15 [i_5] [i_2] [i_1] [i_1] [i_1] [i_0]) ? (arr_15 [i_5] [i_5] [i_2] [i_1] [18] [i_0]) : 42))) ? ((-(arr_15 [i_5] [i_5] [17] [i_1] [17] [17]))) : (((!(arr_15 [i_0] [i_1] [i_2] [i_1] [i_1] [i_5]))))));
                        var_17 = (min(1, 112));
                    }
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        var_18 = 217;
                        arr_19 [1] = (min(var_1, ((((var_5 ? var_2 : var_5)) | (((max((arr_2 [i_0]), 1))))))));
                        var_19 = 1;
                    }
                    var_20 = (max(var_20, var_3));
                    var_21 -= (((((var_10 ? var_5 : (~-99)))) ? (((((16269304431103744446 ? 47 : (arr_14 [i_0] [i_1])))) ? var_7 : var_0)) : (((arr_12 [5] [i_1] [i_1] [i_0]) ? 105553116266496 : (min(var_7, var_6))))));
                }
            }
        }
    }
    #pragma endscop
}
